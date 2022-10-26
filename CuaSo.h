#ifndef DEF_CUASO
#define DEF_CUASO
#include <QApplication>
#include <QWidget>
#include <QPushButton>

class CuaSo : public QWidget {// Ke thua lop QWidget
  public:
    CuaSo();

  private:
    QPushButton *nutBam, *nutBam2;
};
#endif
