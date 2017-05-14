#include "ic_main_window.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IC_Main_Window w;
    w.show();

    return a.exec();
}
