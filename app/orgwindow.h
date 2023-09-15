#ifndef ORGWINDOW_H
#define ORGWINDOW_H

#include <QDialog>
#include <QDirIterator> //test
#include <QDebug> //test


namespace Ui {
class orgWindow;
}

class orgWindow : public QDialog
{
    Q_OBJECT

public:
    explicit orgWindow(QWidget *parent = nullptr);
    ~orgWindow();

private:
    Ui::orgWindow *ui;
};

#endif // ORGWINDOW_H
