#ifndef STARTWINDOW_H
#define STARTWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QMovie>
#include <QLabel>

namespace Ui {
class StartWindow;
}

class StartWindow : public QWidget
{
    Q_OBJECT

public:
    explicit StartWindow(QWidget *parent = nullptr);
    ~StartWindow();

private slots:
    void on_LocalMode_clicked();

    void on_NetMode_clicked();

    void on_Exit_clicked();

private:
    Ui::StartWindow *ui;
    QMainWindow *logoWindow;
    QMovie *gif;
    QLabel *gifPlayer;
};

#endif // STARTWINDOW_H
