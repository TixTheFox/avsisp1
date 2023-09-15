#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    manager = new QNetworkAccessManager();
    connect(manager, &QNetworkAccessManager::finished, this, &MainWindow::logInRequest);

    org_window = new orgWindow();

    connect(ui->sign_in_button, SIGNAL(clicked()), this, SLOT(on_sign_in_button_clicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::logInRequest(QNetworkReply* reply) {
    qDebug(reply->readAll()); //dbg
    if (reply->error() == QNetworkReply::NoError){
        org_window->show();
        this->close();
    } else { //login problems
        qDebug("вай бляяяя");
    }

};


void MainWindow::on_sign_in_button_clicked()
{
    QString login = ui->login_line->text(), pswrd = ui->password_line->text();
    QUrl url("http://numbersapi.com/345");
//    QUrlQuery query;
//    query.addQueryItem("Login", login);
//    query.addQueryItem("Password", pswrd);

//    url.setQuery(query);

    QNetworkRequest request(url);

    manager->get(request);
}

