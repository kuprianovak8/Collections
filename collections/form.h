#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <mainwindow.h>
#include <QString>

namespace Ui
{
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

/*   Collections col;
   col.;*/

//private slots:

//    void setCollections (QString books)
//    {

//    }

//    void on_pushButton_clicked();

private:
    Ui::Form *ui;
};

#endif // FORM_H
