#include "CuaSo.h"

void CuaSo::thayDoiChieuRong(int chieuRong){
    setFixedSize(chieuRong, 100);
    if (chieuRong == 600){
        emit kichThuocToiDa();
    }
}

CuaSo::CuaSo() : QWidget(){
    setFixedSize(200, 100);
    m_thanhGiaTri = new QSlider(Qt::Horizontal, this);
    m_thanhGiaTri->setRange(200, 600);
    m_thanhGiaTri->setGeometry(10, 60, 150, 20);
    QObject::connect(m_thanhGiaTri, SIGNAL(valueChanged(int)), this, SLOT(thayDoiChieuRong(int)));
    QObject::connect(this, SIGNAL(kichThuocToiDa()), qApp, SLOT(quit()));
}

