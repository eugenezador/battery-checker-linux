#ifndef BATTERY_LEVEL_H
#define BATTERY_LEVEL_H

#include <QMainWindow>
#include <QFile>


QT_BEGIN_NAMESPACE
namespace Ui { class battery_level; }
QT_END_NAMESPACE

class battery_level : public QMainWindow
{
    Q_OBJECT

public:
    battery_level(QWidget *parent = nullptr);
    ~battery_level();

private slots:
    void on_level_clicked();

private:
    Ui::battery_level *ui;

    int level_value;
};
#endif // BATTERY_LEVEL_H
