#ifndef DEF_CUASO
#define DEF_CUASO
#include <QApplication>
#include <QWidget>
#include <QSlider>

class CuaSo : public QWidget{
    Q_OBJECT

    public:
      CuaSo();
    public slots:
      void thayDoiChieuRong(int chieuRong);
    signals:
      void kichThuocToiDa();
    private:
      QSlider * m_thanhGiaTri;
};
#endif
