#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QByteArray>
#include <QCryptographicHash>
#include <qtconcurrentrun.h>
#include <QDate>
#include <QDateTime>
#include <QDebug>
#include <QDir>
#include <QElapsedTimer>
#include <QFileDialog>
#include <QFuture>
#include <QLabel>
#include <QMessageBox>
#include <QProcess>
#include <QProgressBar>
#include <QSettings>
#include <QString>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSysInfo>
#include <QThread>
#include <QTime>
#include <Qt>

#include "libraries/simplecrypt/simplecrypt.h"
#include "libraries/smtp/CSmtp.h"
#include <quazip5/JlCompress.h>

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

    void on_buGetDatabaseNames_clicked();

    void on_actionQuit_triggered();

    void on_cbSelectDatabases_clicked();

    void on_buMySQLDumpLocation_clicked();

    void on_buMySQLBackupSaveLocation_clicked();

    void on_cbRemoveSQLDumpFile_clicked();    

    void on_actionSave_triggered();

    void on_actionSave_As_triggered();

    bool SaveConfig(QString filename);

    void on_actionOpen_triggered();

    void on_cbSendEmail_clicked();

    void on_actionAbout_triggered();

    void on_buTestConfig_clicked();

    void on_actionNew_triggered();

    void on_buTestMail_clicked();

    bool errorProvider(QString groupname);

    static int backupThread(QString command);


private:
    Ui::MainWindow *ui;
    QLabel *statusLabelOS;
    QLabel *statusLabelConfig;
    QLabel *statusLabelConfigName;
    QLabel *statusLabelScheduler;
    QProgressBar *statusProgressBar;
    // We use this to store our current config file in
    QString configFile;

};

#endif // MAINWINDOW_H
