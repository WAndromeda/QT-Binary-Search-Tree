#ifndef PROGRAMM_H
#define PROGRAMM_H

#include <QDialog>
#include "QMessageBox"

namespace Ui {
class Programm;
}

class Programm : public QDialog
{
    Q_OBJECT

public:
    explicit Programm(QWidget *parent = nullptr);
    ~Programm();

private slots:
    void on_button_QT_clicked();

private:
    Ui::Programm *ui;
};

#endif // PROGRAMM_H
