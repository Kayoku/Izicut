#ifndef IC_MAIN_WINDOW_H
#define IC_MAIN_WINDOW_H

#include <QMainWindow>

namespace Ui {
class IC_Main_Window;
}

class IC_Main_Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit IC_Main_Window(QWidget *parent = 0);
    ~IC_Main_Window();

private:
    Ui::IC_Main_Window *ui;
};

#endif // IC_MAIN_WINDOW_H
