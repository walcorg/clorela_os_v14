#include "clorela_os_v14.h"
#include "ui_clorela_os_v14.h"

clorela_os_v14::clorela_os_v14(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::clorela_os_v14)
{
    ui->setupUi(this);
}

clorela_os_v14::~clorela_os_v14()
{
    delete ui;
}

