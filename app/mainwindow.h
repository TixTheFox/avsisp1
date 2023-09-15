#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QUrlQuery>

#include "orgWindow.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_sign_in_button_clicked();
    void logInRequest(QNetworkReply* reply);

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *manager;
    orgWindow* org_window;


};
#endif // MAINWINDOW_H
