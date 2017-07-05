#include "mainwindow.h"

#include "transfermodel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), tableView(NULL), transferModel(NULL)
{
    initUI();
}

MainWindow::~MainWindow()
{

}

void MainWindow::initUI()
{
    QHBoxLayout *layout = new QHBoxLayout();
    tableView = new QTableView();
    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableView->verticalHeader()->hide();
    transferModel = new TransferModel();
    tableView->setModel(transferModel);
    layout->addWidget(tableView, 0, 0);

    QWidget *widget = new QWidget(this);
    widget->setLayout(layout);
    setCentralWidget(widget);
}

