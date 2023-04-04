#include "battery_level.h"
#include "ui_battery_level.h"

battery_level::battery_level(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::battery_level)
{
    ui->setupUi(this);
}

battery_level::~battery_level()
{
    delete ui;
}


void battery_level::on_level_clicked()
{
    QFile battery_lavel_file("/sys/class/power_supply/BAT0/capacity");
    battery_lavel_file.open(QIODevice::ReadOnly | QIODevice::Text);
    level_value = QString(battery_lavel_file.readAll()).toInt();
    battery_lavel_file.close();

    ui->charge_level->setValue(level_value);
}

