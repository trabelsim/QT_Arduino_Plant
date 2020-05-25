#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connectdialog.h" // connectdialog zawiera okno do obsługi komunikacji z kontrolerem
#include <QSerialPortInfo>


#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->device = new QSerialPort;
    insert_image();
    setup_plants();
    createChart();
    set_up_line_edits();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete device;
}


void MainWindow::on_exit_button_clicked()
{
    qDebug() << "Exit button has been clicked \n Exiting the application";
    QApplication::quit();

}



void MainWindow::myCustomSlot(){
    qDebug() << "Test button pushed";
}

int MainWindow::on_connectButton_clicked()
{
    /*
     * W przypadku tworzenia drugiego okna w taki sposób, gdy już okno zostanie otwarte,
     * nie bedziemy w stanie powrócić do main window. Czyli cały program czeka na decyzje
     * wychodzącą z connect dialog.
     * */

//    ConnectDialog dialogWindow;
//    dialogWindow.setModal(true);
//    dialogWindow.exec();


    /* Drugi przypadek jest lepszy ze względu na możliwość dalszej pracy nad pierwszym oknem main window,
     * mimo że nie dokonaliśmy ostatecznej decyzji w oknie dialog. */

    secondConnectionWindow = new ConnectDialog(this);
    secondConnectionWindow->show();
    connect(secondConnectionWindow, SIGNAL(readFromPort()) , this, SLOT(get_device_name()));
    ui->main_text->append("New connection in progress..");
    return 1;
}

void MainWindow::get_device_name()
{
    qInfo() << secondConnectionWindow->device_num.device_name_x;
    QString dev_m = secondConnectionWindow->device_num.device_name_x;

    if (dev_m.contains('"')){
        dev_m.replace('"',"");
        qInfo() << "Wrong device name";
    }

    this->device->setPortName(dev_m);
    ui->device_edit->append(dev_m);
    qInfo() << "Port name given to set :" << dev_m;
    if(device->open(QSerialPort::ReadOnly)){
        device->setBaudRate(QSerialPort::Baud9600);
        device->setDataBits(QSerialPort::Data8);
        device->setParity(QSerialPort::NoParity);
        device->setStopBits(QSerialPort::OneStop);
        device->setFlowControl(QSerialPort::NoFlowControl);
        QString line = this->device->readAll();
        qDebug() << line;
        ui->main_text->append(line);
        connect(this->device,SIGNAL(readyRead()), this, SLOT(readFromPort()));
    }
    else{
            qInfo() << "Could not open port";
        }
}

void MainWindow::readFromPort()
{
    QElapsedTimer timer;
    timer.start();
    while(this->device->canReadLine()){
          QString line = this->device->readAll();
//          ui->main_text->append(line);
          QStringList word = line.split("\t");
          QStringList goal;
          for (int i=0; i < word.length() ; i++){
              qInfo() << word.at(i);
                if(word.at(i).contains("S")){
                    temp = word[i+1].toFloat();
//                    ui->tempLCD->display(temp);
                    QString temp_string = QString::number(temp);
                    ui->temp_line->setText(temp_string + " °C");
                    qInfo() << temp << "TEMPERATURA";
                    hum = word[i+2].toFloat();
//                    ui->humLCD->display(hum);
                    QString hum_string = QString::number(hum);
                    ui->hum_line->setText(hum_string + " %");
                    qInfo() << hum << "WILGOTNOSC";
                    lux = word[i+3].toFloat();
//                    ui->luxLCD->display(lux);
                    QString lux_string = QString::number(lux);
                    ui->lux_line->setText(lux_string + " lux");
                    qInfo() << lux << "LUXY";
                    push_data_to_series(temp,hum,lux,timer);
                }
          }
    }
}

void MainWindow::readTemp()
{
    while(this->device->canReadLine()){
          QString line = this->device->readLine();
          if(line.contains('S')){
              qInfo() << " START";
          }
    }

}

void MainWindow::insert_image()
{
    QPixmap pixmap("/home/maroine/Desktop/19hoursago/QTPlantStatus-d8d02d61a821b99374eb60dd7f7f6ef5a9d0f1d9/src/dobra.png");
    int w = ui->label_2->width();
    int h = ui->label_2->height();
    ui->label_2->setPixmap(pixmap.scaled(w,h,Qt::KeepAspectRatio));
}

void MainWindow::setup_plants()
{
    ui->comboBox->addItem("Plant 1");
    ui->comboBox->addItem("Plant 2");
    ui->comboBox->addItem("Plant 3");
}

void MainWindow::push_data_to_series(float tempx,float humx, float luxx, QElapsedTimer timer)
{

//    QDateTime xValue = QDateTime::currentDateTime();
//    // first x value = xValue.toMSecsSinceEpoch()
//    series->append(timer.elapsed()/1000,tempx);
//    chart->addSeries(series);
      double now = QDateTime::currentDateTime().toTime_t();
      ui->plot->graph(0)->addData(now,tempx);
      ui->plot->xAxis->setRange(now+50,100,Qt::AlignRight);
      ui->plot->rescaleAxes();
      ui->plot->replot();

      ui->plot_2->graph(0)->addData(now,humx);
      ui->plot_2->xAxis->setRange(now+50,100,Qt::AlignRight);
//      ui->plot_2->yAxis->setRange(humx+5,10,Qt::AlignRight);
      ui->plot_2->rescaleAxes();
      ui->plot_2->replot();

      ui->plot_3->graph(0)->addData(now,luxx);
      ui->plot_3->xAxis->setRange(now+50,100,Qt::AlignRight);
//      ui->plot_3->yAxis->setRange(luxx+5,10,Qt::AlignRight);
      ui->plot_3->rescaleAxes();
      ui->plot_3->replot();
}

void MainWindow::set_up_line_edits()
{
//    QFont font_line_edit("Times New Roman",13);
    ui->temp_line->setAlignment(Qt::AlignCenter);
    ui->hum_line->setAlignment(Qt::AlignCenter);
    ui->lux_line->setAlignment(Qt::AlignCenter);
//    ui->temp_line->setFont(font_line_edit);
    ui->temp_line->setStyleSheet("Font : 12pt");
    ui->hum_line->setStyleSheet("Font : 12pt");
    ui->lux_line->setStyleSheet("Font : 12pt");
}




void MainWindow::on_getdata_clicked()
{

    get_device_name();
    readTemp();
//    readFromPort();
}






void MainWindow::createChart()
{

    //PIERWSZY WYKRES
    double now = QDateTime::currentDateTime().toTime_t();
    // QCUSTOM PLOT ŚCIEŻKA
    //tworzenie zwykłego wykresu
    ui->plot->setLocale(QLocale(QLocale::Polish,QLocale::Poland));
    ui->plot->addGraph();
    ui->plot->graph(0)->setPen(QPen(Qt::blue));
    ui->plot->graph(0)->setLineStyle(QCPGraph::lsLine);
//    // timer
    QSharedPointer <QCPAxisTickerDateTime> dateTicker (new QCPAxisTickerDateTime);
    dateTicker->setDateTimeFormat("h:mm:ss");
    ui->plot->xAxis->setTicker(dateTicker);
    ui->plot->xAxis->setLabel("Time t [s]");
    ui->plot->yAxis->setLabel("Temperature [C]");
    // qcustomplot

    //DRUGI WYKRES
    //dodawanie do wykresu wartości wygenerowanych wektorów x-y
    ui->plot->xAxis->setRange(0,now+24*3600*249);
    ui->plot->yAxis->setRange(15,30);

    // QCUSTOM PLOT ŚCIEŻKA
    //tworzenie zwykłego wykresu
    ui->plot_2->setLocale(QLocale(QLocale::Polish,QLocale::Poland));
    ui->plot_2->addGraph();
    ui->plot_2->graph(0)->setPen(QPen(Qt::blue));
    ui->plot_2->graph(0)->setLineStyle(QCPGraph::lsLine);
//    // timer
//    dateTicker->setDateTimeFormat("h:mm:ss");
    ui->plot_2->xAxis->setTicker(dateTicker);
    ui->plot_2->xAxis->setLabel("Time t [s]");
    ui->plot_2->yAxis->setLabel("Humidity [%]");
    // qcustomplot


    //dodawanie do wykresu wartości wygenerowanych wektorów x-y
    ui->plot_2->xAxis->setRange(0,now+24*3600*249);
    ui->plot_2->yAxis->setRange(0,100);

        //TRZECI WYKRES
    // QCUSTOM PLOT ŚCIEŻKA
    //tworzenie zwykłego wykresu
    ui->plot_3->setLocale(QLocale(QLocale::Polish,QLocale::Poland));
    ui->plot_3->addGraph();
    ui->plot_3->graph(0)->setPen(QPen(Qt::blue));
    ui->plot_3->graph(0)->setLineStyle(QCPGraph::lsLine);
//    // timer

    dateTicker->setDateTimeFormat("h:mm:ss");
    ui->plot_3->xAxis->setTicker(dateTicker);
    ui->plot_3->xAxis->setLabel("Time t [s]");
    ui->plot_3->yAxis->setLabel("Illuminance [lux]");
    // qcustomplot


    //dodawanie do wykresu wartości wygenerowanych wektorów x-y
    ui->plot_3->xAxis->setRange(0,now+24*3600*249);
    ui->plot_3->yAxis->setRange(0,65000);



}




