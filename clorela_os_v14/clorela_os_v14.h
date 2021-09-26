#ifndef CLORELA_OS_V14_H
#define CLORELA_OS_V14_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class clorela_os_v14; }
QT_END_NAMESPACE

class clorela_os_v14 : public QMainWindow
{
    Q_OBJECT

public:
    clorela_os_v14(QWidget *parent = nullptr);
    ~clorela_os_v14();

private:
    Ui::clorela_os_v14 *ui;
};
#endif // CLORELA_OS_V14_H
