#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)

    : QMainWindow(parent)

    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    graph["서울"] = {

    {"도쿄","07:30",12},

        {"방콕","09:10",8},

        {"싱가포르","11:20",15},

        {"홍콩","13:40",5},

        {"타이베이","15:50",17},

        {"베이징","18:00",9},

        {"마닐라","21:10",14}

};



graph["두바이"] = {

{"카이로","06:50",10},

    {"이스탄불","08:40",7},

    {"아테네","10:30",16},

    {"리야드","13:20",11},

    {"도하","15:10",6},

    {"뭄바이","18:40",18},

    {"파리","22:00",4}

};



graph["싱가포르"] = {

{"쿠알라룸푸르","07:20",13},

    {"자카르타","09:50",9},

    {"발리","12:00",7},

    {"호치민","14:30",15},

    {"하노이","16:40",8},

    {"마닐라","19:10",12},

    {"푸껫","21:30",5}

};



graph["시드니"] = {

{"멜버른","06:40",20},

    {"브리즈번","09:00",14},

    {"오클랜드","11:50",10},

    {"캔버라","14:10",6},

    {"퍼스","16:30",9},

    {"애들레이드","18:50",11},

    {"웰링턴","21:20",8}

};

}

MainWindow::~MainWindow()

{
    delete ui;
}

void MainWindow::on_btnSeoul_clicked()

{
    ui->listFlight->clear();

    for(auto flight : graph["서울"])

    {
        ui->listFlight->addItem(

            flight.destination

            +" "

            +flight.time

            +" (잔여 "

            +QString::number(flight.seat)

            +"석)"

            );
    }
}

void MainWindow::on_btnSingapore_clicked()

{
    ui->listFlight->clear();

    for(auto flight : graph["싱가포르"])

    {
        ui->listFlight->addItem(

            flight.destination

            +" "

            +flight.time

            +" (잔여 "

            +QString::number(flight.seat)

            +"석)"

            );
    }
}

void MainWindow::on_btnDubai_clicked()

{
    ui->listFlight->clear();

    for(auto flight : graph["두바이"])

    {
        ui->listFlight->addItem(

            flight.destination

            +" "

            +flight.time

            +" (잔여 "

            +QString::number(flight.seat)

            +"석)"

            );
    }
}

void MainWindow::on_btnSydney_clicked()

{
    ui->listFlight->clear();

    for(auto flight : graph["시드니"])

    {
        ui->listFlight->addItem(

            flight.destination

            +" "

            +flight.time

            +" (잔여 "

            +QString::number(flight.seat)

            +"석)"

            );
    }
}

void MainWindow::on_btnReserve_clicked()

{
    if(ui->listFlight->currentItem())

    {
        reservationCount++;

        visitedCount++;

        ui->labelStatus->setText(

            "상태 : 예매 완료"

            );

        ui->labelVisited->setText(

            "🌎 방문 도시 : "

            +QString::number(visitedCount)

            +"개"

            );

        ui->labelCount->setText(

            "🎟️ 누적 예매 : "

            +QString::number(reservationCount)

            +"회"

            );

        QString level;

        if(reservationCount<3)

        level="Beginner";

        else if(reservationCount<6)

        level="Explorer";

        else if(reservationCount<10)

        level="Traveler";

        else

        level="World Master";

        ui->labelLevel->setText(

            "🏅 여행 등급 : "

            +level

            );
    }
}