#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool s1 = false;
bool s2 = false;
bool s3 = false;
bool s4 = false;
bool s5 = false;
bool s6 = false;
bool s7 = false;
bool s8 = false;
bool s9 = false;

void MainWindow::on_pushButton_clicked()
{
    if (!s1) {
        ui->pushButton->setText("X");
        ui->Slot->setText("Ciekawy ruch...");
        s1 = true;
        srand(time(0));
        int randomNum = rand() % 10 + 1;




        if (randomNum = 1){
            if (s1 = true){
                randomNum = rand() % 10 + 2;
                if (s2 = true){
                    randomNum = rand() % 10 + 3;
                    if (s3 = true){
                        randomNum = rand() % 10 + 4;
                        if (s4 = true){
                            randomNum = rand() % 10 + 5;
                            if (s5 = true){
                                randomNum = rand() % 10 + 6;
                                if (s6 = true){
                                    randomNum = rand() % 10 + 7;
                                    if (s7 = true){
                                        randomNum = rand() % 10 + 8;
                                        if (s8 = true){
                                            randomNum = 9;
                                            if (s9 = true){
                                                randomNum = rand() % 9 + 1;
                                                if (randomNum = 1){
                                                    ui->pushButton->setText("O");
                                                    s1 = true;
                                                }
                                                else if (randomNum = 2){
                                                    ui->pushButton_2->setText("O");
                                                    s2 = true;
                                                }
                                                else if (randomNum = 3){
                                                    ui->pushButton_3->setText("O");
                                                    s3 = true;
                                                }
                                                else if (randomNum = 4){
                                                    ui->pushButton_4->setText("O");
                                                    s4 = true;
                                                }
                                                else if (randomNum = 5){
                                                    ui->pushButton_5->setText("O");
                                                    s5 = true;
                                                }
                                                else if (randomNum = 6){
                                                    ui->pushButton_6->setText("O");
                                                    s6 = true;
                                                }
                                                else if (randomNum = 7){
                                                    ui->pushButton_7->setText("O");
                                                    s7 = true;
                                                }
                                                else if (randomNum = 8){
                                                    ui->pushButton_8->setText("O");
                                                    s8 = true;
                                                }

                                            }
                                            else{
                                                ui->pushButton_9->setText("O");
                                                s9 = true;
                                            }
                                        }
                                        else{
                                            ui->pushButton_8->setText("O");
                                            s8 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_7->setText("O");
                                        s5 = true;
                                    }

                                }
                                else{
                                    ui->pushButton_6->setText("O");
                                    s6 = true;
                                }
                            }
                            else{
                                ui->pushButton_5->setText("O");
                                s5 = true;
                            }
                        }
                        else{
                            ui->pushButton_4->setText("O");
                            s4 = true;
                        }
                    }
                    else{
                        ui->pushButton_3->setText("O");
                        s3 = true;
                    }

                }
                else{
                    ui->pushButton_2->setText("O");
                    s2 = true;
                }

            }
            else{
                ui->pushButton->setText("O");
                s1 = true;
            }
        }


        else if (randomNum = 2){
            if (s2 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_2->setText("O");
                s2 = true;
            }

        }
        else if (randomNum = 3){
            if (s3 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_3->setText("O");
                s3 = true;
            }

        }
        else if (randomNum = 4){
            if (s4 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_4->setText("O");
                s4 = true;
            }

        }
        else if (randomNum = 5){
            if (s5 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_5->setText("O");
                s5 = true;
            }

        }
        else if (randomNum = 6){
            if (s6 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_6->setText("O");
                s6 = true;
            }

        }
        else if (randomNum = 7){
            if (s7 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_7->setText("O");
                s7 = true;
            }

        }
        else if (randomNum = 8){
            if (s8 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_8->setText("O");
                s8 = true;
            }

        }
        else if (randomNum = 9){
            if (s9 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_9->setText("O");
                s9 = true;
            }

        }

    } else {
        ui->Slot->setText("Ten slot jest zajety");
    }


}


void MainWindow::on_pushButton_2_clicked()
{
    if (!s2) {
        ui->pushButton_2->setText("X");
        ui->Slot->setText("Ciekawy ruch...");
        s2 = true;
        srand(time(0));
        int randomNum = rand() % 10 + 1;




        if (randomNum = 1){
            if (s1 = true){
                randomNum = rand() % 10 + 2;
                if (s2 = true){
                    randomNum = rand() % 10 + 3;
                    if (s3 = true){
                        randomNum = rand() % 10 + 4;
                        if (s4 = true){
                            randomNum = rand() % 10 + 5;
                            if (s5 = true){
                                randomNum = rand() % 10 + 6;
                                if (s6 = true){
                                    randomNum = rand() % 10 + 7;
                                    if (s7 = true){
                                        randomNum = rand() % 10 + 8;
                                        if (s8 = true){
                                            randomNum = 9;
                                            if (s9 = true){
                                                randomNum = rand() % 9 + 1;
                                                if (randomNum = 1){
                                                    ui->pushButton->setText("O");
                                                    s1 = true;
                                                }
                                                else if (randomNum = 2){
                                                    ui->pushButton_2->setText("O");
                                                    s2 = true;
                                                }
                                                else if (randomNum = 3){
                                                    ui->pushButton_3->setText("O");
                                                    s3 = true;
                                                }
                                                else if (randomNum = 4){
                                                    ui->pushButton_4->setText("O");
                                                    s4 = true;
                                                }
                                                else if (randomNum = 5){
                                                    ui->pushButton_5->setText("O");
                                                    s5 = true;
                                                }
                                                else if (randomNum = 6){
                                                    ui->pushButton_6->setText("O");
                                                    s6 = true;
                                                }
                                                else if (randomNum = 7){
                                                    ui->pushButton_7->setText("O");
                                                    s7 = true;
                                                }
                                                else if (randomNum = 8){
                                                    ui->pushButton_8->setText("O");
                                                    s8 = true;
                                                }

                                            }
                                            else{
                                                ui->pushButton_9->setText("O");
                                                s9 = true;
                                            }
                                        }
                                        else{
                                            ui->pushButton_8->setText("O");
                                            s8 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_7->setText("O");
                                        s5 = true;
                                    }

                                }
                                else{
                                    ui->pushButton_6->setText("O");
                                    s6 = true;
                                }
                            }
                            else{
                                ui->pushButton_5->setText("O");
                                s5 = true;
                            }
                        }
                        else{
                            ui->pushButton_4->setText("O");
                            s4 = true;
                        }
                    }
                    else{
                        ui->pushButton_3->setText("O");
                        s3 = true;
                    }

                }
                else{
                    ui->pushButton_2->setText("O");
                    s2 = true;
                }

            }
            else{
                ui->pushButton->setText("O");
                s1 = true;
            }
        }


        else if (randomNum = 2){
            if (s2 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_2->setText("O");
                s2 = true;
            }

        }
        else if (randomNum = 3){
            if (s3 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_3->setText("O");
                s3 = true;
            }

        }
        else if (randomNum = 4){
            if (s4 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_4->setText("O");
                s4 = true;
            }

        }
        else if (randomNum = 5){
            if (s5 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_5->setText("O");
                s5 = true;
            }

        }
        else if (randomNum = 6){
            if (s6 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_6->setText("O");
                s6 = true;
            }

        }
        else if (randomNum = 7){
            if (s7 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_7->setText("O");
                s7 = true;
            }

        }
        else if (randomNum = 8){
            if (s8 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_8->setText("O");
                s8 = true;
            }

        }
        else if (randomNum = 9){
            if (s9 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_9->setText("O");
                s9 = true;
            }

        }
    } else {
        ui->Slot->setText("Ten slot jest zajety");
    }

}


void MainWindow::on_pushButton_3_clicked()
{
    if (!s3) {
        ui->pushButton_3->setText("X");
        ui->Slot->setText("Ciekawy ruch...");
        s3 = true;
        srand(time(0));
        int randomNum = rand() % 10 + 1;




        if (randomNum = 1){
            if (s1 = true){
                randomNum = rand() % 10 + 2;
                if (s2 = true){
                    randomNum = rand() % 10 + 3;
                    if (s3 = true){
                        randomNum = rand() % 10 + 4;
                        if (s4 = true){
                            randomNum = rand() % 10 + 5;
                            if (s5 = true){
                                randomNum = rand() % 10 + 6;
                                if (s6 = true){
                                    randomNum = rand() % 10 + 7;
                                    if (s7 = true){
                                        randomNum = rand() % 10 + 8;
                                        if (s8 = true){
                                            randomNum = 9;
                                            if (s9 = true){
                                                randomNum = rand() % 9 + 1;
                                                if (randomNum = 1){
                                                    ui->pushButton->setText("O");
                                                    s1 = true;
                                                }
                                                else if (randomNum = 2){
                                                    ui->pushButton_2->setText("O");
                                                    s2 = true;
                                                }
                                                else if (randomNum = 3){
                                                    ui->pushButton_3->setText("O");
                                                    s3 = true;
                                                }
                                                else if (randomNum = 4){
                                                    ui->pushButton_4->setText("O");
                                                    s4 = true;
                                                }
                                                else if (randomNum = 5){
                                                    ui->pushButton_5->setText("O");
                                                    s5 = true;
                                                }
                                                else if (randomNum = 6){
                                                    ui->pushButton_6->setText("O");
                                                    s6 = true;
                                                }
                                                else if (randomNum = 7){
                                                    ui->pushButton_7->setText("O");
                                                    s7 = true;
                                                }
                                                else if (randomNum = 8){
                                                    ui->pushButton_8->setText("O");
                                                    s8 = true;
                                                }

                                            }
                                            else{
                                                ui->pushButton_9->setText("O");
                                                s9 = true;
                                            }
                                        }
                                        else{
                                            ui->pushButton_8->setText("O");
                                            s8 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_7->setText("O");
                                        s5 = true;
                                    }

                                }
                                else{
                                    ui->pushButton_6->setText("O");
                                    s6 = true;
                                }
                            }
                            else{
                                ui->pushButton_5->setText("O");
                                s5 = true;
                            }
                        }
                        else{
                            ui->pushButton_4->setText("O");
                            s4 = true;
                        }
                    }
                    else{
                        ui->pushButton_3->setText("O");
                        s3 = true;
                    }

                }
                else{
                    ui->pushButton_2->setText("O");
                    s2 = true;
                }

            }
            else{
                ui->pushButton->setText("O");
                s1 = true;
            }
        }


        else if (randomNum = 2){
            if (s2 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_2->setText("O");
                s2 = true;
            }

        }
        else if (randomNum = 3){
            if (s3 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_3->setText("O");
                s3 = true;
            }

        }
        else if (randomNum = 4){
            if (s4 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_4->setText("O");
                s4 = true;
            }

        }
        else if (randomNum = 5){
            if (s5 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_5->setText("O");
                s5 = true;
            }

        }
        else if (randomNum = 6){
            if (s6 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_6->setText("O");
                s6 = true;
            }

        }
        else if (randomNum = 7){
            if (s7 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_7->setText("O");
                s7 = true;
            }

        }
        else if (randomNum = 8){
            if (s8 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_8->setText("O");
                s8 = true;
            }

        }
        else if (randomNum = 9){
            if (s9 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_9->setText("O");
                s9 = true;
            }

        }
    } else {
        ui->Slot->setText("Ten slot jest zajety");
    }


}


void MainWindow::on_pushButton_4_clicked()
{
    if (!s4) {
        ui->pushButton_4->setText("X");
        ui->Slot->setText("Ciekawy ruch...");
        s4 = true;
        srand(time(0));
        int randomNum = rand() % 10 + 1;




        if (randomNum = 1){
            if (s1 = true){
                randomNum = rand() % 10 + 2;
                if (s2 = true){
                    randomNum = rand() % 10 + 3;
                    if (s3 = true){
                        randomNum = rand() % 10 + 4;
                        if (s4 = true){
                            randomNum = rand() % 10 + 5;
                            if (s5 = true){
                                randomNum = rand() % 10 + 6;
                                if (s6 = true){
                                    randomNum = rand() % 10 + 7;
                                    if (s7 = true){
                                        randomNum = rand() % 10 + 8;
                                        if (s8 = true){
                                            randomNum = 9;
                                            if (s9 = true){
                                                randomNum = rand() % 9 + 1;
                                                if (randomNum = 1){
                                                    ui->pushButton->setText("O");
                                                    s1 = true;
                                                }
                                                else if (randomNum = 2){
                                                    ui->pushButton_2->setText("O");
                                                    s2 = true;
                                                }
                                                else if (randomNum = 3){
                                                    ui->pushButton_3->setText("O");
                                                    s3 = true;
                                                }
                                                else if (randomNum = 4){
                                                    ui->pushButton_4->setText("O");
                                                    s4 = true;
                                                }
                                                else if (randomNum = 5){
                                                    ui->pushButton_5->setText("O");
                                                    s5 = true;
                                                }
                                                else if (randomNum = 6){
                                                    ui->pushButton_6->setText("O");
                                                    s6 = true;
                                                }
                                                else if (randomNum = 7){
                                                    ui->pushButton_7->setText("O");
                                                    s7 = true;
                                                }
                                                else if (randomNum = 8){
                                                    ui->pushButton_8->setText("O");
                                                    s8 = true;
                                                }

                                            }
                                            else{
                                                ui->pushButton_9->setText("O");
                                                s9 = true;
                                            }
                                        }
                                        else{
                                            ui->pushButton_8->setText("O");
                                            s8 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_7->setText("O");
                                        s5 = true;
                                    }

                                }
                                else{
                                    ui->pushButton_6->setText("O");
                                    s6 = true;
                                }
                            }
                            else{
                                ui->pushButton_5->setText("O");
                                s5 = true;
                            }
                        }
                        else{
                            ui->pushButton_4->setText("O");
                            s4 = true;
                        }
                    }
                    else{
                        ui->pushButton_3->setText("O");
                        s3 = true;
                    }

                }
                else{
                    ui->pushButton_2->setText("O");
                    s2 = true;
                }

            }
            else{
                ui->pushButton->setText("O");
                s1 = true;
            }
        }


        else if (randomNum = 2){
            if (s2 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_2->setText("O");
                s2 = true;
            }

        }
        else if (randomNum = 3){
            if (s3 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_3->setText("O");
                s3 = true;
            }

        }
        else if (randomNum = 4){
            if (s4 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_4->setText("O");
                s4 = true;
            }

        }
        else if (randomNum = 5){
            if (s5 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_5->setText("O");
                s5 = true;
            }

        }
        else if (randomNum = 6){
            if (s6 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_6->setText("O");
                s6 = true;
            }

        }
        else if (randomNum = 7){
            if (s7 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_7->setText("O");
                s7 = true;
            }

        }
        else if (randomNum = 8){
            if (s8 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_8->setText("O");
                s8 = true;
            }

        }
        else if (randomNum = 9){
            if (s9 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_9->setText("O");
                s9 = true;
            }

        }
    } else {
        ui->Slot->setText("Ten slot jest zajety");
    }


}


void MainWindow::on_pushButton_5_clicked()
{
    if (!s5) {
        ui->pushButton_5->setText("X");
        ui->Slot->setText("Ciekawy ruch...");
        s5 = true;
        srand(time(0));
        int randomNum = rand() % 10 + 1;




        if (randomNum = 1){
            if (s1 = true){
                randomNum = rand() % 10 + 2;
                if (s2 = true){
                    randomNum = rand() % 10 + 3;
                    if (s3 = true){
                        randomNum = rand() % 10 + 4;
                        if (s4 = true){
                            randomNum = rand() % 10 + 5;
                            if (s5 = true){
                                randomNum = rand() % 10 + 6;
                                if (s6 = true){
                                    randomNum = rand() % 10 + 7;
                                    if (s7 = true){
                                        randomNum = rand() % 10 + 8;
                                        if (s8 = true){
                                            randomNum = 9;
                                            if (s9 = true){
                                                randomNum = rand() % 9 + 1;
                                                if (randomNum = 1){
                                                    ui->pushButton->setText("O");
                                                    s1 = true;
                                                }
                                                else if (randomNum = 2){
                                                    ui->pushButton_2->setText("O");
                                                    s2 = true;
                                                }
                                                else if (randomNum = 3){
                                                    ui->pushButton_3->setText("O");
                                                    s3 = true;
                                                }
                                                else if (randomNum = 4){
                                                    ui->pushButton_4->setText("O");
                                                    s4 = true;
                                                }
                                                else if (randomNum = 5){
                                                    ui->pushButton_5->setText("O");
                                                    s5 = true;
                                                }
                                                else if (randomNum = 6){
                                                    ui->pushButton_6->setText("O");
                                                    s6 = true;
                                                }
                                                else if (randomNum = 7){
                                                    ui->pushButton_7->setText("O");
                                                    s7 = true;
                                                }
                                                else if (randomNum = 8){
                                                    ui->pushButton_8->setText("O");
                                                    s8 = true;
                                                }

                                            }
                                            else{
                                                ui->pushButton_9->setText("O");
                                                s9 = true;
                                            }
                                        }
                                        else{
                                            ui->pushButton_8->setText("O");
                                            s8 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_7->setText("O");
                                        s5 = true;
                                    }

                                }
                                else{
                                    ui->pushButton_6->setText("O");
                                    s6 = true;
                                }
                            }
                            else{
                                ui->pushButton_5->setText("O");
                                s5 = true;
                            }
                        }
                        else{
                            ui->pushButton_4->setText("O");
                            s4 = true;
                        }
                    }
                    else{
                        ui->pushButton_3->setText("O");
                        s3 = true;
                    }

                }
                else{
                    ui->pushButton_2->setText("O");
                    s2 = true;
                }

            }
            else{
                ui->pushButton->setText("O");
                s1 = true;
            }
        }


        else if (randomNum = 2){
            if (s2 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_2->setText("O");
                s2 = true;
            }

        }
        else if (randomNum = 3){
            if (s3 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_3->setText("O");
                s3 = true;
            }

        }
        else if (randomNum = 4){
            if (s4 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_4->setText("O");
                s4 = true;
            }

        }
        else if (randomNum = 5){
            if (s5 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_5->setText("O");
                s5 = true;
            }

        }
        else if (randomNum = 6){
            if (s6 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_6->setText("O");
                s6 = true;
            }

        }
        else if (randomNum = 7){
            if (s7 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_7->setText("O");
                s7 = true;
            }

        }
        else if (randomNum = 8){
            if (s8 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_8->setText("O");
                s8 = true;
            }

        }
        else if (randomNum = 9){
            if (s9 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_9->setText("O");
                s9 = true;
            }

        }
    } else {
        ui->Slot->setText("Ten slot jest zajety");
    }


}


void MainWindow::on_pushButton_6_clicked()
{
    if (!s6) {
        ui->pushButton_6->setText("X");
        ui->Slot->setText("Ciekawy ruch...");
        s6 = true;
        srand(time(0));
        int randomNum = rand() % 10 + 1;




        if (randomNum = 1){
            if (s1 = true){
                randomNum = rand() % 10 + 2;
                if (s2 = true){
                    randomNum = rand() % 10 + 3;
                    if (s3 = true){
                        randomNum = rand() % 10 + 4;
                        if (s4 = true){
                            randomNum = rand() % 10 + 5;
                            if (s5 = true){
                                randomNum = rand() % 10 + 6;
                                if (s6 = true){
                                    randomNum = rand() % 10 + 7;
                                    if (s7 = true){
                                        randomNum = rand() % 10 + 8;
                                        if (s8 = true){
                                            randomNum = 9;
                                            if (s9 = true){
                                                randomNum = rand() % 9 + 1;
                                                if (randomNum = 1){
                                                    ui->pushButton->setText("O");
                                                    s1 = true;
                                                }
                                                else if (randomNum = 2){
                                                    ui->pushButton_2->setText("O");
                                                    s2 = true;
                                                }
                                                else if (randomNum = 3){
                                                    ui->pushButton_3->setText("O");
                                                    s3 = true;
                                                }
                                                else if (randomNum = 4){
                                                    ui->pushButton_4->setText("O");
                                                    s4 = true;
                                                }
                                                else if (randomNum = 5){
                                                    ui->pushButton_5->setText("O");
                                                    s5 = true;
                                                }
                                                else if (randomNum = 6){
                                                    ui->pushButton_6->setText("O");
                                                    s6 = true;
                                                }
                                                else if (randomNum = 7){
                                                    ui->pushButton_7->setText("O");
                                                    s7 = true;
                                                }
                                                else if (randomNum = 8){
                                                    ui->pushButton_8->setText("O");
                                                    s8 = true;
                                                }

                                            }
                                            else{
                                                ui->pushButton_9->setText("O");
                                                s9 = true;
                                            }
                                        }
                                        else{
                                            ui->pushButton_8->setText("O");
                                            s8 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_7->setText("O");
                                        s5 = true;
                                    }

                                }
                                else{
                                    ui->pushButton_6->setText("O");
                                    s6 = true;
                                }
                            }
                            else{
                                ui->pushButton_5->setText("O");
                                s5 = true;
                            }
                        }
                        else{
                            ui->pushButton_4->setText("O");
                            s4 = true;
                        }
                    }
                    else{
                        ui->pushButton_3->setText("O");
                        s3 = true;
                    }

                }
                else{
                    ui->pushButton_2->setText("O");
                    s2 = true;
                }

            }
            else{
                ui->pushButton->setText("O");
                s1 = true;
            }
        }


        else if (randomNum = 2){
            if (s2 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_2->setText("O");
                s2 = true;
            }

        }
        else if (randomNum = 3){
            if (s3 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_3->setText("O");
                s3 = true;
            }

        }
        else if (randomNum = 4){
            if (s4 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_4->setText("O");
                s4 = true;
            }

        }
        else if (randomNum = 5){
            if (s5 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_5->setText("O");
                s5 = true;
            }

        }
        else if (randomNum = 6){
            if (s6 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_6->setText("O");
                s6 = true;
            }

        }
        else if (randomNum = 7){
            if (s7 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_7->setText("O");
                s7 = true;
            }

        }
        else if (randomNum = 8){
            if (s8 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_8->setText("O");
                s8 = true;
            }

        }
        else if (randomNum = 9){
            if (s9 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_9->setText("O");
                s9 = true;
            }

        }
    } else {
        ui->Slot->setText("Ten slot jest zajety");
    }


}


void MainWindow::on_pushButton_7_clicked()
{
    if (!s7) {
        ui->pushButton_7->setText("X");
        ui->Slot->setText("Ciekawy ruch...");
        s7 = true;
        srand(time(0));
        int randomNum = rand() % 10 + 1;




        if (randomNum = 1){
            if (s1 = true){
                randomNum = rand() % 10 + 2;
                if (s2 = true){
                    randomNum = rand() % 10 + 3;
                    if (s3 = true){
                        randomNum = rand() % 10 + 4;
                        if (s4 = true){
                            randomNum = rand() % 10 + 5;
                            if (s5 = true){
                                randomNum = rand() % 10 + 6;
                                if (s6 = true){
                                    randomNum = rand() % 10 + 7;
                                    if (s7 = true){
                                        randomNum = rand() % 10 + 8;
                                        if (s8 = true){
                                            randomNum = 9;
                                            if (s9 = true){
                                                randomNum = rand() % 9 + 1;
                                                if (randomNum = 1){
                                                    ui->pushButton->setText("O");
                                                    s1 = true;
                                                }
                                                else if (randomNum = 2){
                                                    ui->pushButton_2->setText("O");
                                                    s2 = true;
                                                }
                                                else if (randomNum = 3){
                                                    ui->pushButton_3->setText("O");
                                                    s3 = true;
                                                }
                                                else if (randomNum = 4){
                                                    ui->pushButton_4->setText("O");
                                                    s4 = true;
                                                }
                                                else if (randomNum = 5){
                                                    ui->pushButton_5->setText("O");
                                                    s5 = true;
                                                }
                                                else if (randomNum = 6){
                                                    ui->pushButton_6->setText("O");
                                                    s6 = true;
                                                }
                                                else if (randomNum = 7){
                                                    ui->pushButton_7->setText("O");
                                                    s7 = true;
                                                }
                                                else if (randomNum = 8){
                                                    ui->pushButton_8->setText("O");
                                                    s8 = true;
                                                }

                                            }
                                            else{
                                                ui->pushButton_9->setText("O");
                                                s9 = true;
                                            }
                                        }
                                        else{
                                            ui->pushButton_8->setText("O");
                                            s8 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_7->setText("O");
                                        s5 = true;
                                    }

                                }
                                else{
                                    ui->pushButton_6->setText("O");
                                    s6 = true;
                                }
                            }
                            else{
                                ui->pushButton_5->setText("O");
                                s5 = true;
                            }
                        }
                        else{
                            ui->pushButton_4->setText("O");
                            s4 = true;
                        }
                    }
                    else{
                        ui->pushButton_3->setText("O");
                        s3 = true;
                    }

                }
                else{
                    ui->pushButton_2->setText("O");
                    s2 = true;
                }

            }
            else{
                ui->pushButton->setText("O");
                s1 = true;
            }
        }


        else if (randomNum = 2){
            if (s2 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_2->setText("O");
                s2 = true;
            }

        }
        else if (randomNum = 3){
            if (s3 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_3->setText("O");
                s3 = true;
            }

        }
        else if (randomNum = 4){
            if (s4 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_4->setText("O");
                s4 = true;
            }

        }
        else if (randomNum = 5){
            if (s5 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_5->setText("O");
                s5 = true;
            }

        }
        else if (randomNum = 6){
            if (s6 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_6->setText("O");
                s6 = true;
            }

        }
        else if (randomNum = 7){
            if (s7 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_7->setText("O");
                s7 = true;
            }

        }
        else if (randomNum = 8){
            if (s8 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_8->setText("O");
                s8 = true;
            }

        }
        else if (randomNum = 9){
            if (s9 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_9->setText("O");
                s9 = true;
            }

        }
    } else {
        ui->Slot->setText("Ten slot jest zajety");
    }


}


void MainWindow::on_pushButton_8_clicked()
{
    if (!s8) {
        ui->pushButton_8->setText("X");
        ui->Slot->setText("Ciekawy ruch...");
        s8 = true;
        srand(time(0));
        int randomNum = rand() % 10 + 1;




        if (randomNum = 1){
            if (s1 = true){
                randomNum = rand() % 10 + 2;
                if (s2 = true){
                    randomNum = rand() % 10 + 3;
                    if (s3 = true){
                        randomNum = rand() % 10 + 4;
                        if (s4 = true){
                            randomNum = rand() % 10 + 5;
                            if (s5 = true){
                                randomNum = rand() % 10 + 6;
                                if (s6 = true){
                                    randomNum = rand() % 10 + 7;
                                    if (s7 = true){
                                        randomNum = rand() % 10 + 8;
                                        if (s8 = true){
                                            randomNum = 9;
                                            if (s9 = true){
                                                randomNum = rand() % 9 + 1;
                                                if (randomNum = 1){
                                                    ui->pushButton->setText("O");
                                                    s1 = true;
                                                }
                                                else if (randomNum = 2){
                                                    ui->pushButton_2->setText("O");
                                                    s2 = true;
                                                }
                                                else if (randomNum = 3){
                                                    ui->pushButton_3->setText("O");
                                                    s3 = true;
                                                }
                                                else if (randomNum = 4){
                                                    ui->pushButton_4->setText("O");
                                                    s4 = true;
                                                }
                                                else if (randomNum = 5){
                                                    ui->pushButton_5->setText("O");
                                                    s5 = true;
                                                }
                                                else if (randomNum = 6){
                                                    ui->pushButton_6->setText("O");
                                                    s6 = true;
                                                }
                                                else if (randomNum = 7){
                                                    ui->pushButton_7->setText("O");
                                                    s7 = true;
                                                }
                                                else if (randomNum = 8){
                                                    ui->pushButton_8->setText("O");
                                                    s8 = true;
                                                }

                                            }
                                            else{
                                                ui->pushButton_9->setText("O");
                                                s9 = true;
                                            }
                                        }
                                        else{
                                            ui->pushButton_8->setText("O");
                                            s8 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_7->setText("O");
                                        s5 = true;
                                    }

                                }
                                else{
                                    ui->pushButton_6->setText("O");
                                    s6 = true;
                                }
                            }
                            else{
                                ui->pushButton_5->setText("O");
                                s5 = true;
                            }
                        }
                        else{
                            ui->pushButton_4->setText("O");
                            s4 = true;
                        }
                    }
                    else{
                        ui->pushButton_3->setText("O");
                        s3 = true;
                    }

                }
                else{
                    ui->pushButton_2->setText("O");
                    s2 = true;
                }

            }
            else{
                ui->pushButton->setText("O");
                s1 = true;
            }
        }


        else if (randomNum = 2){
            if (s2 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_2->setText("O");
                s2 = true;
            }

        }
        else if (randomNum = 3){
            if (s3 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_3->setText("O");
                s3 = true;
            }

        }
        else if (randomNum = 4){
            if (s4 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_4->setText("O");
                s4 = true;
            }

        }
        else if (randomNum = 5){
            if (s5 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_5->setText("O");
                s5 = true;
            }

        }
        else if (randomNum = 6){
            if (s6 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_6->setText("O");
                s6 = true;
            }

        }
        else if (randomNum = 7){
            if (s7 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_7->setText("O");
                s7 = true;
            }

        }
        else if (randomNum = 8){
            if (s8 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_8->setText("O");
                s8 = true;
            }

        }
        else if (randomNum = 9){
            if (s9 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_9->setText("O");
                s9 = true;
            }

        }
    } else {
        ui->Slot->setText("Ten slot jest zajety");
    }


}


void MainWindow::on_pushButton_9_clicked()
{
    if (!s9) {
        ui->pushButton_9->setText("X");
        ui->Slot->setText("Ciekawy ruch...");
        s9 = true;
        srand(time(0));
        int randomNum = rand() % 10 + 1;




        if (randomNum = 1){
            if (s1 = true){
                randomNum = rand() % 10 + 2;
                if (s2 = true){
                    randomNum = rand() % 10 + 3;
                    if (s3 = true){
                        randomNum = rand() % 10 + 4;
                        if (s4 = true){
                            randomNum = rand() % 10 + 5;
                            if (s5 = true){
                                randomNum = rand() % 10 + 6;
                                if (s6 = true){
                                    randomNum = rand() % 10 + 7;
                                    if (s7 = true){
                                        randomNum = rand() % 10 + 8;
                                        if (s8 = true){
                                            randomNum = 9;
                                            if (s9 = true){
                                                randomNum = rand() % 9 + 1;
                                                if (randomNum = 1){
                                                    ui->pushButton->setText("O");
                                                    s1 = true;
                                                }
                                                else if (randomNum = 2){
                                                    ui->pushButton_2->setText("O");
                                                    s2 = true;
                                                }
                                                else if (randomNum = 3){
                                                    ui->pushButton_3->setText("O");
                                                    s3 = true;
                                                }
                                                else if (randomNum = 4){
                                                    ui->pushButton_4->setText("O");
                                                    s4 = true;
                                                }
                                                else if (randomNum = 5){
                                                    ui->pushButton_5->setText("O");
                                                    s5 = true;
                                                }
                                                else if (randomNum = 6){
                                                    ui->pushButton_6->setText("O");
                                                    s6 = true;
                                                }
                                                else if (randomNum = 7){
                                                    ui->pushButton_7->setText("O");
                                                    s7 = true;
                                                }
                                                else if (randomNum = 8){
                                                    ui->pushButton_8->setText("O");
                                                    s8 = true;
                                                }

                                            }
                                            else{
                                                ui->pushButton_9->setText("O");
                                                s9 = true;
                                            }
                                        }
                                        else{
                                            ui->pushButton_8->setText("O");
                                            s8 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_7->setText("O");
                                        s5 = true;
                                    }

                                }
                                else{
                                    ui->pushButton_6->setText("O");
                                    s6 = true;
                                }
                            }
                            else{
                                ui->pushButton_5->setText("O");
                                s5 = true;
                            }
                        }
                        else{
                            ui->pushButton_4->setText("O");
                            s4 = true;
                        }
                    }
                    else{
                        ui->pushButton_3->setText("O");
                        s3 = true;
                    }

                }
                else{
                    ui->pushButton_2->setText("O");
                    s2 = true;
                }

            }
            else{
                ui->pushButton->setText("O");
                s1 = true;
            }
        }


        else if (randomNum = 2){
            if (s2 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_2->setText("O");
                s2 = true;
            }

        }
        else if (randomNum = 3){
            if (s3 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_3->setText("O");
                s3 = true;
            }

        }
        else if (randomNum = 4){
            if (s4 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_4->setText("O");
                s4 = true;
            }

        }
        else if (randomNum = 5){
            if (s5 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_5->setText("O");
                s5 = true;
            }

        }
        else if (randomNum = 6){
            if (s6 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_6->setText("O");
                s6 = true;
            }

        }
        else if (randomNum = 7){
            if (s7 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_7->setText("O");
                s7 = true;
            }

        }
        else if (randomNum = 8){
            if (s8 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_8->setText("O");
                s8 = true;
            }

        }
        else if (randomNum = 9){
            if (s9 = true){
                if (s1 = true){
                    randomNum = rand() % 10 + 2;
                    if (s2 = true){
                        randomNum = rand() % 10 + 3;
                        if (s3 = true){
                            randomNum = rand() % 10 + 4;
                            if (s4 = true){
                                randomNum = rand() % 10 + 5;
                                if (s5 = true){
                                    randomNum = rand() % 10 + 6;
                                    if (s6 = true){
                                        randomNum = rand() % 10 + 7;
                                        if (s7 = true){
                                            randomNum = rand() % 10 + 8;
                                            if (s8 = true){
                                                randomNum = 9;
                                                if (s9 = true){
                                                    randomNum = rand() % 9 + 1;
                                                    if (randomNum = 1){
                                                        ui->pushButton->setText("O");
                                                        s1 = true;
                                                    }
                                                    else if (randomNum = 2){
                                                        ui->pushButton_2->setText("O");
                                                        s2 = true;
                                                    }
                                                    else if (randomNum = 3){
                                                        ui->pushButton_3->setText("O");
                                                        s3 = true;
                                                    }
                                                    else if (randomNum = 4){
                                                        ui->pushButton_4->setText("O");
                                                        s4 = true;
                                                    }
                                                    else if (randomNum = 5){
                                                        ui->pushButton_5->setText("O");
                                                        s5 = true;
                                                    }
                                                    else if (randomNum = 6){
                                                        ui->pushButton_6->setText("O");
                                                        s6 = true;
                                                    }
                                                    else if (randomNum = 7){
                                                        ui->pushButton_7->setText("O");
                                                        s7 = true;
                                                    }
                                                    else if (randomNum = 8){
                                                        ui->pushButton_8->setText("O");
                                                        s8 = true;
                                                    }

                                                }
                                                else{
                                                    ui->pushButton_9->setText("O");
                                                    s9 = true;
                                                }
                                            }
                                            else{
                                                ui->pushButton_8->setText("O");
                                                s8 = true;
                                            }

                                        }
                                        else{
                                            ui->pushButton_7->setText("O");
                                            s5 = true;
                                        }

                                    }
                                    else{
                                        ui->pushButton_6->setText("O");
                                        s6 = true;
                                    }
                                }
                                else{
                                    ui->pushButton_5->setText("O");
                                    s5 = true;
                                }
                            }
                            else{
                                ui->pushButton_4->setText("O");
                                s4 = true;
                            }
                        }
                        else{
                            ui->pushButton_3->setText("O");
                            s3 = true;
                        }

                    }
                    else{
                        ui->pushButton_2->setText("O");
                        s2 = true;
                    }

                }

            }
            else{
                ui->pushButton_9->setText("O");
                s9 = true;
            }

        }
    } else {
        ui->Slot->setText("Ten slot jest zajety");
    }


}


void MainWindow::on_ng_clicked()
{
    s1 = false;
    s2 = false;
    s3 = false;
    s4 = false;
    s5 = false;
    s6 = false;
    s7 = false;
    s8 = false;
    s9 = false;
    ui->pushButton->setText(" ");
    ui->pushButton_2->setText(" ");
    ui->pushButton_3->setText(" ");
    ui->pushButton_4->setText(" ");
    ui->pushButton_5->setText(" ");
    ui->pushButton_6->setText(" ");
    ui->pushButton_7->setText(" ");
    ui->pushButton_8->setText(" ");
    ui->pushButton_9->setText(" ");
    ui->Slot->setText(" ");


}


