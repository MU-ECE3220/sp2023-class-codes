#ifndef KEYWORDFINDER_H
#define KEYWORDFINDER_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class KeywordFinder; }
QT_END_NAMESPACE

class KeywordFinder : public QWidget
{
    Q_OBJECT

public:
    KeywordFinder(QWidget *parent = nullptr);
    ~KeywordFinder();

private slots:
    void on_pushButton_clicked();

private:
    Ui::KeywordFinder *ui;
    void load_text_file();
};
#endif // KEYWORDFINDER_H
