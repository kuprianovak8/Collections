#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <vector>
#include <iostream>

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

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    //    class Collections
    //    {
    //    private:
    //        std::vector<QString> books;
    //    };

    //void on_comboBox_currentIndexChanged(int index);

    // void on_comboBox_textActivated(const QString &arg1);

private:
    Ui::MainWindow *ui;
};

class Collections
{

private:
    std::vector<QString> books {"Война и мир", "Преcтупление и наказание", "Мастер и Маргарита"};
    std::vector<QString> movies {"Интерстеллар", "Зелёная книга", "Гарри Поттер"};
    std::vector<QString> games {"Скайрим","Ведьмак","CS GO"};
    std::vector<QString> applications {"ReadEra","Photoshop","PhotoMath"};

    //    std::cout << books.at(2);
    //    QStringList _books {"Война и мир", "Преcтупление и наказание", "Мастер и Маргарита"};
    //    QStringList _movies {"Интерстеллар", "Зелёная книга", "Гарри Поттер"};
    //    QStringList _games {"Скайрим","Ведьмак","CS GO"};
    //    QStringList _applications {"ReadEra","Photoshop","PhotoMath"};

public:


};

#endif // MAINWINDOW_H
