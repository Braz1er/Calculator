#include <QApplication>
#include "calc.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Calculator calc;
    calc.setFixedSize(450, 640);
    calc.show();
    return app.exec();
}