#include "CuaSo.h"
CuaSo ::CuaSo() : QWidget(){
    setFixedSize(230,120);

    m_nutBam = new QPushButton("Mở thông báo", this);
    m_nutBam->move(40,50);
    QObject::connect(m_nutBam, SIGNAL(clicked()), this, SLOT(moHopThoai()));

}

void CuaSo::moHopThoai(){

    QMessageBox::information(this,"Kính gửi", "Chào mừng <strong>chủ tịch</strong> trở lại!");
    QMessageBox::warning(this, "Kính gửi cấp báo", "Bộ phận thiết kế giao diện đang gặp trục trặc lớn có thể không kịp tiến độ!");
    int traloi = QMessageBox::question(this, "Yêu cầu", "Ông có thể gửi thêm người xuống để giải quyết vấn đề này không?", QMessageBox::Yes | QMessageBox::No | QMessageBox::Ignore);
    if (traloi == QMessageBox::Yes){
        QMessageBox::information(this, "Phản hồi", "Cảm ơn chủ tịch đã chấp thuận!");
    }
    if (traloi == QMessageBox::No){
        QMessageBox::information(this, "Phản hồi", "Xin chủ tịch hãy đề xuất phương án nào tốt hơn ạ.");
        CuaSo::Phanhoi();
    }
    if (traloi == QMessageBox::Ignore){
        QMessageBox::information(this, "Phản hồi", "Xin chủ tịch hãy cho chúng tôi biết lí do.");
        CuaSo::Phanhoi();
    }
}

void CuaSo::Phanhoi(){

    bool ok = false;
    QString reponse = QInputDialog::getText(this, "Phản hồi bị từ chối", "Chủ tịch phản hồi:", QLineEdit::Normal, QString(), &ok);
        if (ok && !reponse.isEmpty()){
            QMessageBox::information(this, "Phản hồi", "Cảm ơn chủ tịch đã phản hồi, tôi xin được phép nhắc lại lời chủ tịch như sau:  " + reponse + " !");
        }else{
            QMessageBox::information(this, "Phản hồi", "Hộp thoại đã đóng, hãy mở lại nếu cần thiết.");
}
}
