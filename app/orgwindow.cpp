#include "orgwindow.h"
#include "ui_orgwindow.h"

orgWindow::orgWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::orgWindow)
{
    ui->setupUi(this);
    ui->listWidget->setViewMode(QListWidget::IconMode);
    ui->listWidget->setIconSize(QSize(50, 32));
    ui->listWidget->setResizeMode(QListWidget::Adjust);

    QDirIterator it("misc/", QDirIterator::Subdirectories);
    QString path = "misc/DSC_0065.jpg";
    while(it.hasNext()){
        QString path = it.next();
        qDebug() << path;
        QListWidgetItem* item = new QListWidgetItem(QIcon(path), QString(path));

        ui->listWidget->addItem(item);

        delete item;
    }
    QListWidgetItem* item = new QListWidgetItem(QIcon(path), QString(path));

    ui->listWidget->addItem(item);

}

orgWindow::~orgWindow()
{
    delete ui;
}
