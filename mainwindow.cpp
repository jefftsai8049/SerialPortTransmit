#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    port = new QSerialPort(this);

    clock = new QTimer;
    clock->setInterval(500);
    connect(clock,SIGNAL(timeout()),this,SLOT(speedMeter()));

    RS232Receive = new QTimer;
    RS232Receive->setInterval(20);
    RS232Receive->start();
    connect(RS232Receive,SIGNAL(timeout()),this,SLOT(receiveMsg()));

    //     QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    //     QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    //    QSerialPortInfo info("COM7");
    QList<QSerialPortInfo> portList;
    portList = QSerialPortInfo::availablePorts();
    for(int i = 0; i < QSerialPortInfo::standardBaudRates().size(); i++)
    {
        ui->port_baud_comboBox->insertItem(i,QString::number(QSerialPortInfo::standardBaudRates().at(i)));
    }

    for(int i = 0; i < portList.size(); i++)
    {
        //        qDebug() << portList.at(i).portName() << portList.at(i).description() << portList.at(i).standardBaudRates();
        ui->port_name_comboBox->insertItem(i,portList.at(i).portName()+" "+portList.at(i).description());
    }
}

MainWindow::~MainWindow()
{
    port->close();
    delete ui;
}

void MainWindow::on_open_com_pushButton_clicked()
{
    QString portName = ui->port_name_comboBox->currentText();

    QSerialPortInfo info(portName.split(" ")[0]);

    port->setPortName(info.portName());
    port->setBaudRate(ui->port_baud_comboBox->currentText().toInt());

    QString portDataBits = ui->port_dataBit_comboBox->currentText();

    if (portDataBits == "6")
        port->setDataBits(QSerialPort::Data6);
    else if (portDataBits == "7")
        port->setDataBits(QSerialPort::Data7);
    else if (portDataBits == "8")
        port->setDataBits(QSerialPort::Data8);

    QString portParity = ui->port_parity_comboBox->currentText();
    if(portParity == "NONE")
        port->setParity(QSerialPort::NoParity);
    else if(portParity == "ODD")
        port->setParity(QSerialPort::OddParity);
    else if(portParity == "EVEN")
        port->setParity(QSerialPort::EvenParity);
    else if(portParity == "MARK")
        port->setParity(QSerialPort::MarkParity);
    else if(portParity == "SPACE")
        port->setParity(QSerialPort::SpaceParity);

    QString portStopBits = ui->port_stopBit_comboBox->currentText();
    if(portStopBits == "1")
        port->setStopBits(QSerialPort::OneStop);
    else if(portStopBits == "1.5")
        port->setStopBits(QSerialPort::OneAndHalfStop);
    if(portStopBits == "2")
        port->setStopBits(QSerialPort::TwoStop);

    QString portFlowControl = ui->port_flowControl_comboBox->currentText();
    if(portFlowControl == "NONE")
        port->setFlowControl(QSerialPort::NoFlowControl);
    else if(portFlowControl == "SOFTWARE")
        port->setFlowControl(QSerialPort::SoftwareControl);
    else if(portFlowControl == "HARDWARE")
        port->setFlowControl(QSerialPort::HardwareControl);
    if(port->open(QIODevice::ReadWrite))
    {
        ui->port_status_label->setText("Connect");
        ui->port_name_label->setText(info.portName()+info.description());
    }
    else
    {
        ui->port_status_label->setText("Disconnect");
    }
}

void MainWindow::receiveMsg()
{
    if(port->isOpen())
    {
        //        QTextCodec *codec = QTextCodec::codecForName("Big5");
        //        QString msg = codec->toUnicode(port->readAll());
        QString msg = port->readAll();

        if(msg.isEmpty())
            return;
        QString fileName;


        if(msg[0] == 17 && msg[1] == 18)
        {
            if(msg.toStdString().find(20) - msg.toStdString().find(19) == 1)
            {
                transMode = 1;
                for(int i = 0;i<msg.indexOf(19)-2;i++)
                {
                    fileName.append(msg[i+2]);
                }
            }
            file.setFileName(fileName);
            file.open(QFile::ReadWrite);
            msg.remove(0,msg.toStdString().find(20)+1);
            qDebug() << fileName;

        }

        if(transMode == 1)
        {
            if(msg[msg.size()-1] == 23)
            {
                qDebug() <<"finish";
                transMode = 0;
                msg.remove(msg.size()-1,1);
                file.write(msg.toStdString().c_str());
                file.close();
                return;
            }
            else
            {
                file.write(msg.toStdString().c_str());
                return;
            }
        }
        else
        {



        ui->msg_textBrowser->insertPlainText(msg);
        }
    }
}

void MainWindow::on_send_msg_pushButton_clicked()
{

    QByteArray byte;
    byte.append(ui->msg_lineEdit->text());
    port->write(byte);
}

void MainWindow::on_actionTransmit_file_triggered()
{
    QString fileName = QFileDialog::getOpenFileName();
    if (fileName.isEmpty())
        return;
    file.setFileName(fileName);
    if(!file.open(QIODevice::ReadOnly))
        return;

    QByteArray header;
    header.append(17);
    header.append(18);
    header.append(fileName.split("/").at(fileName.split("/").size()-1));
    header.append(19);
    header.append(20);
    port->write(header);

    clock->start();
    while(!file.atEnd())
    {
        QByteArray byte = file.read(1024);

        port->write(byte);
    }

    QByteArray eof;
    eof.append((char)23);

    port->write(eof);
    file.close();

}

void MainWindow::speedMeter()
{
    float val = 100.0-(float)port->bytesToWrite()/(float)file.size()*100.0;
    ui->progressBar->setValue(val);
    if(val == 100.0)
    {
        clock->stop();
    }
}

void MainWindow::on_close_com_pushButton_clicked()
{
    port->close();
    ui->port_status_label->setText("Disconnect");
    ui->port_name_label->setText("");
}
