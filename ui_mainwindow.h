/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionQuit;
    QAction *actionNew;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *tbMySQLHostName;
    QLineEdit *tbMySQLUserName;
    QLineEdit *tbMySQLPassword;
    QLineEdit *tbMySQLPort;
    QCheckBox *cbSelectDatabases;
    QListWidget *clbDatabases;
    QPushButton *buGetDatabaseNames;
    QRadioButton *rbWindows;
    QRadioButton *rbLinux;
    QLineEdit *tbMySQLDumpLocation;
    QLineEdit *tbMySQLBackupLocation;
    QLineEdit *tbMySQLDaysToSave;
    QPushButton *buMySQLDumpLocation;
    QPushButton *buMySQLBackupSaveLocation;
    QCheckBox *cbCompressBackup;
    QCheckBox *cbRemoveSQLDumpFile;
    QCheckBox *cbUseDBDirs;
    QGroupBox *groupBox_2;
    QCheckBox *cbSendEmail;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *tbSMTPServerName;
    QLineEdit *tbSMTPServerPort;
    QLineEdit *tbSMTPUserName;
    QLineEdit *tbSMTPPassword;
    QLineEdit *tbSMTPEMailAddress;
    QLineEdit *tbSMTPFromAddress;
    QPushButton *buTestMail;
    QLabel *label_17;
    QRadioButton *rbSMTPNone;
    QRadioButton *rbSMTPTLS;
    QRadioButton *rbSMTPSSL;
    QGroupBox *groupBox_3;
    QLabel *label_16;
    QLineEdit *tbAdditionalOptions;
    QPushButton *buTestConfig;
    QListWidget *lwOutput;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuScheduler;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1170, 711);
        MainWindow->setMaximumSize(QSize(1170, 711));
        QIcon icon;
        icon.addFile(QStringLiteral("../../CSharp/MySQL Backup/MySQL Backup/MySQL Backup/App-database.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionOpen->setCheckable(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/mysqlbackup_qt/icons/Icons/open-file-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionOpen->setIconVisibleInMenu(true);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/mysqlbackup_qt/icons/Icons/Actions-document-save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionSave_As->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/mysqlbackup_qt/icons/Icons/Actions-document-save-as-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon3);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/mysqlbackup_qt/icons/Icons/Windows-Close-Program-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon4);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/mysqlbackup_qt/icons/Icons/Action-file-new-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 1171, 651));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(gridLayoutWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 601, 561));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox->setFlat(false);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(11, 41, 77, 17));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(17, 78, 71, 17));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(22, 115, 66, 17));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(453, 41, 31, 17));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(16, 180, 74, 17));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 360, 69, 17));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(11, 390, 152, 17));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(15, 425, 148, 17));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(68, 460, 94, 17));
        tbMySQLHostName = new QLineEdit(groupBox);
        tbMySQLHostName->setObjectName(QStringLiteral("tbMySQLHostName"));
        tbMySQLHostName->setEnabled(true);
        tbMySQLHostName->setGeometry(QRect(94, 41, 321, 31));
        tbMySQLHostName->setAutoFillBackground(false);
        tbMySQLHostName->setFrame(true);
        tbMySQLHostName->setClearButtonEnabled(false);
        tbMySQLUserName = new QLineEdit(groupBox);
        tbMySQLUserName->setObjectName(QStringLiteral("tbMySQLUserName"));
        tbMySQLUserName->setGeometry(QRect(94, 78, 321, 31));
        tbMySQLPassword = new QLineEdit(groupBox);
        tbMySQLPassword->setObjectName(QStringLiteral("tbMySQLPassword"));
        tbMySQLPassword->setGeometry(QRect(94, 115, 321, 31));
        tbMySQLPassword->setEchoMode(QLineEdit::Password);
        tbMySQLPort = new QLineEdit(groupBox);
        tbMySQLPort->setObjectName(QStringLiteral("tbMySQLPort"));
        tbMySQLPort->setGeometry(QRect(490, 40, 61, 31));
        cbSelectDatabases = new QCheckBox(groupBox);
        cbSelectDatabases->setObjectName(QStringLiteral("cbSelectDatabases"));
        cbSelectDatabases->setGeometry(QRect(94, 150, 161, 21));
        clbDatabases = new QListWidget(groupBox);
        clbDatabases->setObjectName(QStringLiteral("clbDatabases"));
        clbDatabases->setGeometry(QRect(94, 180, 256, 131));
        clbDatabases->setAlternatingRowColors(true);
        clbDatabases->setSelectionMode(QAbstractItemView::MultiSelection);
        clbDatabases->setSortingEnabled(true);
        buGetDatabaseNames = new QPushButton(groupBox);
        buGetDatabaseNames->setObjectName(QStringLiteral("buGetDatabaseNames"));
        buGetDatabaseNames->setGeometry(QRect(120, 320, 221, 33));
        rbWindows = new QRadioButton(groupBox);
        rbWindows->setObjectName(QStringLiteral("rbWindows"));
        rbWindows->setGeometry(QRect(100, 360, 109, 21));
        rbLinux = new QRadioButton(groupBox);
        rbLinux->setObjectName(QStringLiteral("rbLinux"));
        rbLinux->setGeometry(QRect(200, 360, 109, 21));
        tbMySQLDumpLocation = new QLineEdit(groupBox);
        tbMySQLDumpLocation->setObjectName(QStringLiteral("tbMySQLDumpLocation"));
        tbMySQLDumpLocation->setGeometry(QRect(170, 390, 351, 31));
        tbMySQLBackupLocation = new QLineEdit(groupBox);
        tbMySQLBackupLocation->setObjectName(QStringLiteral("tbMySQLBackupLocation"));
        tbMySQLBackupLocation->setGeometry(QRect(170, 425, 351, 31));
        tbMySQLDaysToSave = new QLineEdit(groupBox);
        tbMySQLDaysToSave->setObjectName(QStringLiteral("tbMySQLDaysToSave"));
        tbMySQLDaysToSave->setGeometry(QRect(170, 460, 41, 31));
        buMySQLDumpLocation = new QPushButton(groupBox);
        buMySQLDumpLocation->setObjectName(QStringLiteral("buMySQLDumpLocation"));
        buMySQLDumpLocation->setGeometry(QRect(550, 390, 31, 33));
        buMySQLBackupSaveLocation = new QPushButton(groupBox);
        buMySQLBackupSaveLocation->setObjectName(QStringLiteral("buMySQLBackupSaveLocation"));
        buMySQLBackupSaveLocation->setGeometry(QRect(550, 425, 31, 33));
        cbCompressBackup = new QCheckBox(groupBox);
        cbCompressBackup->setObjectName(QStringLiteral("cbCompressBackup"));
        cbCompressBackup->setGeometry(QRect(70, 520, 141, 21));
        cbRemoveSQLDumpFile = new QCheckBox(groupBox);
        cbRemoveSQLDumpFile->setObjectName(QStringLiteral("cbRemoveSQLDumpFile"));
        cbRemoveSQLDumpFile->setGeometry(QRect(220, 520, 181, 21));
        cbUseDBDirs = new QCheckBox(groupBox);
        cbUseDBDirs->setObjectName(QStringLiteral("cbUseDBDirs"));
        cbUseDBDirs->setGeometry(QRect(410, 520, 93, 21));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(610, 0, 551, 321));
        cbSendEmail = new QCheckBox(groupBox_2);
        cbSendEmail->setObjectName(QStringLiteral("cbSendEmail"));
        cbSendEmail->setGeometry(QRect(20, 30, 111, 21));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(35, 62, 90, 17));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(440, 62, 31, 17));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(52, 99, 71, 17));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(57, 136, 66, 17));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(23, 173, 101, 17));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(28, 210, 95, 17));
        tbSMTPServerName = new QLineEdit(groupBox_2);
        tbSMTPServerName->setObjectName(QStringLiteral("tbSMTPServerName"));
        tbSMTPServerName->setEnabled(false);
        tbSMTPServerName->setGeometry(QRect(130, 62, 271, 31));
        tbSMTPServerPort = new QLineEdit(groupBox_2);
        tbSMTPServerPort->setObjectName(QStringLiteral("tbSMTPServerPort"));
        tbSMTPServerPort->setEnabled(false);
        tbSMTPServerPort->setGeometry(QRect(477, 62, 41, 31));
        tbSMTPUserName = new QLineEdit(groupBox_2);
        tbSMTPUserName->setObjectName(QStringLiteral("tbSMTPUserName"));
        tbSMTPUserName->setEnabled(false);
        tbSMTPUserName->setGeometry(QRect(130, 99, 271, 31));
        tbSMTPPassword = new QLineEdit(groupBox_2);
        tbSMTPPassword->setObjectName(QStringLiteral("tbSMTPPassword"));
        tbSMTPPassword->setEnabled(false);
        tbSMTPPassword->setGeometry(QRect(130, 136, 271, 31));
        tbSMTPPassword->setEchoMode(QLineEdit::Password);
        tbSMTPEMailAddress = new QLineEdit(groupBox_2);
        tbSMTPEMailAddress->setObjectName(QStringLiteral("tbSMTPEMailAddress"));
        tbSMTPEMailAddress->setEnabled(false);
        tbSMTPEMailAddress->setGeometry(QRect(130, 173, 271, 31));
        tbSMTPFromAddress = new QLineEdit(groupBox_2);
        tbSMTPFromAddress->setObjectName(QStringLiteral("tbSMTPFromAddress"));
        tbSMTPFromAddress->setEnabled(false);
        tbSMTPFromAddress->setGeometry(QRect(130, 210, 271, 31));
        buTestMail = new QPushButton(groupBox_2);
        buTestMail->setObjectName(QStringLiteral("buTestMail"));
        buTestMail->setEnabled(false);
        buTestMail->setGeometry(QRect(440, 270, 91, 33));
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(20, 250, 131, 17));
        rbSMTPNone = new QRadioButton(groupBox_2);
        rbSMTPNone->setObjectName(QStringLiteral("rbSMTPNone"));
        rbSMTPNone->setGeometry(QRect(20, 270, 71, 21));
        rbSMTPNone->setChecked(true);
        rbSMTPTLS = new QRadioButton(groupBox_2);
        rbSMTPTLS->setObjectName(QStringLiteral("rbSMTPTLS"));
        rbSMTPTLS->setGeometry(QRect(90, 270, 61, 21));
        rbSMTPSSL = new QRadioButton(groupBox_2);
        rbSMTPSSL->setObjectName(QStringLiteral("rbSMTPSSL"));
        rbSMTPSSL->setGeometry(QRect(150, 270, 61, 21));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(610, 330, 551, 81));
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(30, 20, 231, 17));
        tbAdditionalOptions = new QLineEdit(groupBox_3);
        tbAdditionalOptions->setObjectName(QStringLiteral("tbAdditionalOptions"));
        tbAdditionalOptions->setGeometry(QRect(30, 40, 491, 31));
        buTestConfig = new QPushButton(tab);
        buTestConfig->setObjectName(QStringLiteral("buTestConfig"));
        buTestConfig->setGeometry(QRect(1000, 570, 161, 33));
        lwOutput = new QListWidget(tab);
        lwOutput->setObjectName(QStringLiteral("lwOutput"));
        lwOutput->setGeometry(QRect(610, 420, 551, 141));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1170, 29));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuScheduler = new QMenu(menuBar);
        menuScheduler->setObjectName(QStringLiteral("menuScheduler"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuScheduler->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionHelp);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MySQL Backup v.", Q_NULLPTR));
        actionHelp->setText(QApplication::translate("MainWindow", "&Help", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "&Open", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "&Save", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSave_As->setText(QApplication::translate("MainWindow", "Sa&ve As", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSave_As->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionNew->setText(QApplication::translate("MainWindow", "&New", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        groupBox->setTitle(QApplication::translate("MainWindow", "MySQL Server Information", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Host Name:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Username:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Password:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Port:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Databases:", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Config OS:", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "MySQL Dump Location:", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Backup Save Location:", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Days To Keep:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tbMySQLHostName->setToolTip(QApplication::translate("MainWindow", "Enter the database server host name.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        tbMySQLUserName->setToolTip(QApplication::translate("MainWindow", "Enter the database server user name.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        tbMySQLPassword->setToolTip(QApplication::translate("MainWindow", "Enter the database server password.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        tbMySQLPort->setToolTip(QApplication::translate("MainWindow", "Enter the database server port number. Usually this is 3306.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tbMySQLPort->setText(QApplication::translate("MainWindow", "3306", Q_NULLPTR));
        cbSelectDatabases->setText(QApplication::translate("MainWindow", "Select All Databases", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        clbDatabases->setToolTip(QApplication::translate("MainWindow", "A list of the databases found on this server.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        buGetDatabaseNames->setToolTip(QApplication::translate("MainWindow", "Get the names of the databases on this server.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buGetDatabaseNames->setText(QApplication::translate("MainWindow", "Get Database Names", Q_NULLPTR));
        rbWindows->setText(QApplication::translate("MainWindow", "Wi&ndows", Q_NULLPTR));
        rbLinux->setText(QApplication::translate("MainWindow", "Linu&x", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tbMySQLDumpLocation->setToolTip(QApplication::translate("MainWindow", "Where is the mysqldump location? Usually it is in /usr/bin on Linux.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        tbMySQLBackupLocation->setToolTip(QApplication::translate("MainWindow", "Where should the backups be kept?", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tbMySQLBackupLocation->setText(QApplication::translate("MainWindow", "backups/", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tbMySQLDaysToSave->setToolTip(QApplication::translate("MainWindow", "How long should the backup be kept?", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tbMySQLDaysToSave->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        buMySQLDumpLocation->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        buMySQLBackupSaveLocation->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbCompressBackup->setToolTip(QApplication::translate("MainWindow", "Should the backup be compressed?", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbCompressBackup->setText(QApplication::translate("MainWindow", "Compress Backup", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbRemoveSQLDumpFile->setToolTip(QApplication::translate("MainWindow", "Should the SQL dump file be removed after the backup? This is used in conjunction with Compress Backup. ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbRemoveSQLDumpFile->setText(QApplication::translate("MainWindow", "Remove SQL Dump File", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbUseDBDirs->setToolTip(QApplication::translate("MainWindow", "Should backups be stored in directories which are named after the databases?", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbUseDBDirs->setText(QApplication::translate("MainWindow", "Use DB Dirs", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "E-Mail Server Information", Q_NULLPTR));
        cbSendEmail->setText(QApplication::translate("MainWindow", "Send E-Mail", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Server Name:", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Port:", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Username:", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Password:", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "E-Mail Address:", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "From Address:", Q_NULLPTR));
        tbSMTPServerPort->setText(QApplication::translate("MainWindow", "25", Q_NULLPTR));
        tbSMTPEMailAddress->setInputMask(QString());
        buTestMail->setText(QApplication::translate("MainWindow", "Test E-Mail", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "SMTP Security Type", Q_NULLPTR));
        rbSMTPNone->setText(QApplication::translate("MainWindow", "None", Q_NULLPTR));
        rbSMTPTLS->setText(QApplication::translate("MainWindow", "TLS", Q_NULLPTR));
        rbSMTPSSL->setText(QApplication::translate("MainWindow", "SSL", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "MySQL Dump Options", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Additional Command Line Options", Q_NULLPTR));
        buTestConfig->setText(QApplication::translate("MainWindow", "Test Configuration", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Backup", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Restore", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "Fi&le", Q_NULLPTR));
        menuScheduler->setTitle(QApplication::translate("MainWindow", "Sched&uler", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
