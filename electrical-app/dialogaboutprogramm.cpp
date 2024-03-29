#include "dialogaboutprogramm.h"
#include "ui_dialogaboutprogramm.h"

DialogAboutProgramm::DialogAboutProgramm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAboutProgramm)
{
    ui->setupUi(this);
    setFixedSize(380, 180);
    ui->labelAboutProgramm->setText(tr("Programm for accounting electrical equipment \
                                        at a plastic prcessing plant.\n\nAuthor: Glebov Kirill Igorevich,  ICTMS-2-7"));
}

DialogAboutProgramm::~DialogAboutProgramm()
{
    delete ui;
}
