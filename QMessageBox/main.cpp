#include <QApplication>
#include "CuaSo.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    CuaSo cuaSo;
    cuaSo.show();
    return app.exec();
}
