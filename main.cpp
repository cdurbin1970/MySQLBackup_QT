#include "mainwindow.h"
#include <QApplication>
#include <string>
#include <QFileInfo>
#include <QDateTime>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    a.setApplicationName("version-cmd");
    a.setApplicationVersion(VERSION_STRING);
    MainWindow w;
    QFileInfo info(argv[0]);
    w.setWindowTitle("MySQL Backup v" + QString::fromStdString(VERSION_STRING) + " build " + info.created().toString("MMddyy"));
    w.show();
    return a.exec();
}
