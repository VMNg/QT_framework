#ifndef DEF_CUASO
#define DEF_CUASO

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include <QInputDialog>

class CuaSo : public QWidget{
    Q_OBJECT
    public:
      CuaSo();
    public slots:
      void moHopThoai();
      void Phanhoi();
    private:
      QPushButton *m_nutBam;
};
#endif
