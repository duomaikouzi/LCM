﻿#include "lcm.h"
#include "fun.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LCM w;
    w.show();
    return a.exec();
}
