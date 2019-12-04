#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QByteArray>
#include <QCloseEvent>
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
#include <QListWidgetItem>
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
//#include <quazip5/JlCompress.h>
#include "libraries/quazip/JlCompress.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
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

    bool errorProvider(QString groupname, QString action);

    void closeEvent (QCloseEvent *event);

    void setLineEditsModified(bool flag);

    bool detectChanges();

    static int backupThread(QString command, qint16 timeout);

    void on_rbWindows_toggled(bool checked);

    void on_rbLinux_toggled(bool checked);

    void on_clbDatabases_itemClicked(QListWidgetItem *item);

    void on_cbCompressBackup_clicked();

    void on_cbUseDBDirs_clicked();

    void on_rbSMTPNone_toggled(bool checked);

    void on_rbSMTPTLS_toggled(bool checked);

    void on_rbSMTPSSL_toggled(bool checked);

    void on_buMySQLLocation_clicked();

    void on_buFileLocation_clicked();

    void on_buRestoreDatabase_clicked();

    void on_cbCreateDatabase_clicked();

private:
    Ui::MainWindow *ui;
    QLabel *statusLabelOS;
    QLabel *statusLabelConfig;
    QLabel *statusLabelConfigName;
    QLabel *statusLabelScheduler;
    QProgressBar *statusProgressBar;
    // We use this to store our current config file in
    QString configFile;
    // Options Modified
    bool modified = false;

};

#endif // MAINWINDOW_H
