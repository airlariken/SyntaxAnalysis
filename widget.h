#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFile>
#include <QDir>
#include <QDebug>
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
#include<sstream>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    vector<vector<int>>act_table;
    vector<vector<int>>go_table;
    vector<char>ter_sym;
    vector<char>unter_sym;
private slots:
    void on_pushButton_SyntaxConfirm_clicked();//输入文法确定按钮点击事件

    void on_pushButton_CreateAnaTable_clicked();//构建预测分析表按钮点击事件

    void on_pushButton_AnalysisString_clicked();//分析字符串按钮点击事件

private:
    Ui::Widget *ui;
    QString path;

};
#endif // WIDGET_H
