#include <QApplication>
#include "CuaSo.h"
int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    CuaSo object;
    object.show();
    return app.exec();
}
