#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <map>
#include <vector>
#include <QString>

struct Flight
{
    QString destination;
    QString time;
    int seat;
};

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private slots:

    void on_btnSeoul_clicked();

    void on_btnSingapore_clicked();

    void on_btnDubai_clicked();

    void on_btnSydney_clicked();

    void on_btnReserve_clicked();

private:

    Ui::MainWindow *ui;

    std::map<QString,std::vector<Flight>> graph;

    int reservationCount=0;

    int visitedCount=0;
};

#endif