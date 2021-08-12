#ifndef LCM_H
#define LCM_H

#include <QMainWindow>
#include <QSettings>
#include <QSerialPort>
#include <QMessageBox>
#include <QUdpSocket>
#include <QNetworkDatagram>
#include <QByteArray>


#pragma execution_character_set("utf-8")

QT_BEGIN_NAMESPACE
namespace Ui { class LCM; }
QT_END_NAMESPACE

class LCM : public QMainWindow
{
    Q_OBJECT

public:
    LCM(QWidget *parent = nullptr);
    ~LCM();
    void PortOpen();
    void UdpNetConfig();
    void SendInfo(char *info,int len );
    void SendInfo(const QString &info);

public slots:
    void ReceiveInfo();
    void ReadPendingDatagrams();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_exit_clicked();

    void on_pushButton_poweron_clicked();

private:
    Ui::LCM *ui;
    QSettings *config_port; //配置文件类
    QSerialPort *seri_port; //串口类
    QUdpSocket *udp_port;   //网口udpsocket类

    char buffer_net[256];
    qint16 length_buffer_net;
    char *buffer_serial;
    qint16 length_buffer_serial;



    char buffer_A0[5];
};
#endif // LCM_H
