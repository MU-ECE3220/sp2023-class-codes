#include "keywordfinder.h"
#include "ui_keywordfinder.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>

KeywordFinder::KeywordFinder(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::KeywordFinder)
{
    ui->setupUi(this);
    load_text_file();
}

KeywordFinder::~KeywordFinder()
{
    delete ui;
}


void KeywordFinder::on_pushButton_clicked()
{
    QString find_keyword = ui->lineEdit->text();
    ui->textEdit->find(find_keyword, QTextDocument::FindWholeWords);
}

void KeywordFinder::load_text_file() {
    QFile input_file(":lyrics.txt");
    if(!input_file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", input_file.errorString());
    }

    QTextStream input(&input_file);
    QString line = input.readAll();
    qDebug() << "Lyrics: " << line;
    input_file.close();

    ui->textEdit->setPlainText(line);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}

