/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionTransmit_file;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *msg_lineEdit;
    QTextBrowser *msg_textBrowser;
    QPushButton *send_msg_pushButton;
    QPushButton *clear_pushButton;
    QProgressBar *progressBar;
    QLabel *port_status_label;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *port_name_label;
    QWidget *tab_2;
    QPushButton *open_com_pushButton;
    QComboBox *port_name_comboBox;
    QLabel *label;
    QComboBox *port_baud_comboBox;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *port_parity_comboBox;
    QComboBox *port_dataBit_comboBox;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *port_stopBit_comboBox;
    QLabel *label_6;
    QComboBox *port_flowControl_comboBox;
    QPushButton *close_com_pushButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(530, 430);
        QFont font;
        font.setFamily(QStringLiteral("Noto Sans CJK TC Bold"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        actionTransmit_file = new QAction(MainWindow);
        actionTransmit_file->setObjectName(QStringLiteral("actionTransmit_file"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 481, 351));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        msg_lineEdit = new QLineEdit(tab);
        msg_lineEdit->setObjectName(QStringLiteral("msg_lineEdit"));
        msg_lineEdit->setGeometry(QRect(10, 210, 261, 31));
        msg_textBrowser = new QTextBrowser(tab);
        msg_textBrowser->setObjectName(QStringLiteral("msg_textBrowser"));
        msg_textBrowser->setGeometry(QRect(10, 10, 261, 192));
        send_msg_pushButton = new QPushButton(tab);
        send_msg_pushButton->setObjectName(QStringLiteral("send_msg_pushButton"));
        send_msg_pushButton->setGeometry(QRect(290, 210, 111, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/icon/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        send_msg_pushButton->setIcon(icon);
        clear_pushButton = new QPushButton(tab);
        clear_pushButton->setObjectName(QStringLiteral("clear_pushButton"));
        clear_pushButton->setGeometry(QRect(290, 170, 111, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/icon/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clear_pushButton->setIcon(icon1);
        progressBar = new QProgressBar(tab);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 260, 461, 41));
        progressBar->setValue(0);
        port_status_label = new QLabel(tab);
        port_status_label->setObjectName(QStringLiteral("port_status_label"));
        port_status_label->setGeometry(QRect(280, 100, 101, 31));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(280, 70, 151, 31));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(280, 10, 151, 31));
        port_name_label = new QLabel(tab);
        port_name_label->setObjectName(QStringLiteral("port_name_label"));
        port_name_label->setGeometry(QRect(280, 40, 221, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        open_com_pushButton = new QPushButton(tab_2);
        open_com_pushButton->setObjectName(QStringLiteral("open_com_pushButton"));
        open_com_pushButton->setGeometry(QRect(10, 260, 131, 41));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/icon/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        open_com_pushButton->setIcon(icon2);
        port_name_comboBox = new QComboBox(tab_2);
        port_name_comboBox->setObjectName(QStringLiteral("port_name_comboBox"));
        port_name_comboBox->setGeometry(QRect(10, 40, 131, 41));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 101, 31));
        port_baud_comboBox = new QComboBox(tab_2);
        port_baud_comboBox->setObjectName(QStringLiteral("port_baud_comboBox"));
        port_baud_comboBox->setGeometry(QRect(10, 120, 131, 41));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 90, 101, 31));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 170, 101, 31));
        port_parity_comboBox = new QComboBox(tab_2);
        port_parity_comboBox->setObjectName(QStringLiteral("port_parity_comboBox"));
        port_parity_comboBox->setGeometry(QRect(10, 200, 131, 41));
        port_dataBit_comboBox = new QComboBox(tab_2);
        port_dataBit_comboBox->setObjectName(QStringLiteral("port_dataBit_comboBox"));
        port_dataBit_comboBox->setGeometry(QRect(160, 40, 131, 41));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 10, 101, 31));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(160, 90, 101, 31));
        port_stopBit_comboBox = new QComboBox(tab_2);
        port_stopBit_comboBox->setObjectName(QStringLiteral("port_stopBit_comboBox"));
        port_stopBit_comboBox->setGeometry(QRect(160, 120, 131, 41));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(160, 170, 101, 31));
        port_flowControl_comboBox = new QComboBox(tab_2);
        port_flowControl_comboBox->setObjectName(QStringLiteral("port_flowControl_comboBox"));
        port_flowControl_comboBox->setGeometry(QRect(160, 200, 131, 41));
        close_com_pushButton = new QPushButton(tab_2);
        close_com_pushButton->setObjectName(QStringLiteral("close_com_pushButton"));
        close_com_pushButton->setGeometry(QRect(160, 260, 131, 41));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/icon/disconnect.png"), QSize(), QIcon::Normal, QIcon::Off);
        close_com_pushButton->setIcon(icon3);
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 530, 29));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionTransmit_file);

        retranslateUi(MainWindow);
        QObject::connect(clear_pushButton, SIGNAL(clicked()), msg_textBrowser, SLOT(clear()));
        QObject::connect(msg_lineEdit, SIGNAL(returnPressed()), send_msg_pushButton, SLOT(click()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "RS232 Port Connection", 0));
        actionTransmit_file->setText(QApplication::translate("MainWindow", "Transmit File", 0));
        send_msg_pushButton->setText(QApplication::translate("MainWindow", "Send", 0));
        clear_pushButton->setText(QApplication::translate("MainWindow", "Clear", 0));
        port_status_label->setText(QApplication::translate("MainWindow", "Disconnect", 0));
        label_7->setText(QApplication::translate("MainWindow", "COM Prot Status\357\274\232", 0));
        label_8->setText(QApplication::translate("MainWindow", "COM Prot Name\357\274\232", 0));
        port_name_label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Main", 0));
        open_com_pushButton->setText(QApplication::translate("MainWindow", "Open COM", 0));
        label->setText(QApplication::translate("MainWindow", "Port Name\357\274\232", 0));
        label_2->setText(QApplication::translate("MainWindow", "Baudrate\357\274\232", 0));
        label_3->setText(QApplication::translate("MainWindow", "Parity\357\274\232", 0));
        port_parity_comboBox->clear();
        port_parity_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "NONE", 0)
         << QApplication::translate("MainWindow", "ODD", 0)
         << QApplication::translate("MainWindow", "EVEN", 0)
         << QApplication::translate("MainWindow", "SPACE", 0)
         << QApplication::translate("MainWindow", "MARK", 0)
        );
        port_dataBit_comboBox->clear();
        port_dataBit_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8", 0)
         << QApplication::translate("MainWindow", "7", 0)
         << QApplication::translate("MainWindow", "6", 0)
        );
        label_4->setText(QApplication::translate("MainWindow", "Data Bit\357\274\232", 0));
        label_5->setText(QApplication::translate("MainWindow", "Stop Bit\357\274\232", 0));
        port_stopBit_comboBox->clear();
        port_stopBit_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "1.5", 0)
         << QApplication::translate("MainWindow", "2", 0)
        );
        label_6->setText(QApplication::translate("MainWindow", "Flow Control\357\274\232", 0));
        port_flowControl_comboBox->clear();
        port_flowControl_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "NONE", 0)
         << QApplication::translate("MainWindow", "SOFTWARE", 0)
         << QApplication::translate("MainWindow", "HARDWARE", 0)
        );
        close_com_pushButton->setText(QApplication::translate("MainWindow", "Close COM", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Setting", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
