#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    // Tao ra cua so
    QWidget cuaSo;
    cuaSo.setFixedSize(300, 150);

    // Tao ra nut bam nam ben trong cuaSo
    QPushButton nutBam("Nút khẩn cấp !", &cuaSo);
    QPushButton nutBam2("Nút chuông!", &cuaSo);

    nutBam.setFont(QFont("Comic Sans MS", 14));
    nutBam.setToolTip("Chỉ dành cho TH khẩn cấp");
    nutBam.setCursor(Qt::PointingHandCursor);

    nutBam2.setFont(QFont("Times New Roman",18));
    nutBam2.setToolTip("Chuông báo hiệu cho xe đi sau");
    nutBam2.setCursor(Qt::PointingHandCursor);
    nutBam2.move(170, 0);


    cuaSo.show();

    return app.exec();
}
