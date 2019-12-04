#include "mainwindow.h"
#include <QApplication>
#include <string>
#include <QFileInfo>
#include <QDateTime>
#include <QScreen>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    a.setApplicationName("version-cmd");
    a.setApplicationVersion(VERSION_STRING);
    MainWindow w;
    QFileInfo info(argv[0]);
    w.setWindowTitle("MySQL Backup v" + QString::fromStdString(VERSION_STRING) + " build " + info.birthTime().toString("MMddyy"));
    w.show();
    // Put the app in the center of the primary screen
    QScreen *screen = QGuiApplication::primaryScreen();
    int screenWidth, width;
    int screenHeight, height;
    int x, y;
    QSize windowSize;
    screenWidth = screen->geometry().width();   // get width of screen
    screenHeight = screen->geometry().height(); // get height of screen
    windowSize = w.size(); // size of our application window
    width = windowSize.width();
    height = windowSize.height();
    // little computations
    x = (screenWidth - width) / 2;
    y = (screenHeight - height) / 2;
    y -= 50;
    // move window to desired coordinates
    w.move ( x, y );

    return a.exec();
}
