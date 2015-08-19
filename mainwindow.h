#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QByteArray>
#include <QFileDialog>
#include <QStringList>
#include <QString>
#include <QFile>
#include <QTime>
#include <QTimer>
#include <QList>
#include <QStringList>
#include <QTextCodec>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_open_com_pushButton_clicked();

    void receiveMsg();

    void on_send_msg_pushButton_clicked();

    void on_actionTransmit_file_triggered();

    void speedMeter();

    void on_close_com_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    //for RS232 port
    QSerialPort *port;
    //update progress
    QTimer *clock;
    //for receive RS232 data
    QTimer *RS232Receive;

    QFile file;

    bool transMode = 0;

};

#endif // MAINWINDOW_H
