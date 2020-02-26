#include "programm.h"
#include "ui_programm.h"

Programm::Programm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Programm)
{
    ui->setupUi(this);
    this->setWindowTitle("Информация о программе");
    this->setWindowIcon(QIcon("images\\setMain.png"));
}

Programm::~Programm(){
    delete ui;
}

void Programm::on_button_QT_clicked(){
    QMessageBox::aboutQt(this, "Информация о среде разработки");
}
