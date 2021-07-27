#ifndef LCM_H
#define LCM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class LCM; }
QT_END_NAMESPACE

class LCM : public QMainWindow
{
    Q_OBJECT

public:
    LCM(QWidget *parent = nullptr);
    ~LCM();

private:
    Ui::LCM *ui;
};
#endif // LCM_H
