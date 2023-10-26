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

void MainWindow::on_actionOpenLevel_triggered()
{
    std::string levelFile = QFileDialog::getOpenFileName(
                                this, tr("Open Level"),
                                "/path/to/file/",
                                tr("Yaml files (*.yaml)"))
                                .toStdString();

    YAML::Node node = yml->loadLevelFromYaml(levelFile);

}


void MainWindow::on_actionExit_triggered()
{
    qApp->exit();
}

