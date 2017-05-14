#include "ic_main_window.h"
#include "ui_ic_main_window.h"

IC_Main_Window::IC_Main_Window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::IC_Main_Window)
{
    ui->setupUi(this);
}

IC_Main_Window::~IC_Main_Window()
{
    delete ui;
}
