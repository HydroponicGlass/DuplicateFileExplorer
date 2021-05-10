/*  Revision History
 *  Ver 0.2 : 20210510
 *      1. Change normal search logic to checksum and file size from checksum
 *      2. Search Speed up : only file size same checksum input
 */

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
