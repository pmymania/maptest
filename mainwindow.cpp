#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    m_webView = new QWebEngineView(this);
//    setCentralWidget(m_webView);
//    QString htmlPath = "F:/Code/LaserProject/MAPTEST/html/showmap.html";
//    m_webView->page()->load(QUrl("file:///"+htmlPath));

    map = new Map();
    QVBoxLayout* m_pSCVLayout = new QVBoxLayout;
    m_pSCVLayout->setSizeConstraint(QVBoxLayout::SetMinAndMaxSize);
    m_pSCVLayout->setContentsMargins(0, 0, 0, 0);

    m_pSCVLayout->addWidget(map);

    ui->widget->setLayout(m_pSCVLayout);
    map->mapload();
}

MainWindow::~MainWindow()
{
    delete ui;
}

