#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_add_clients_clicked();
    void on_up_clients_clicked();
    void on_del_applications_clicked();
    void on_CLIENTS_clicked(const QModelIndex &index);
    void on_del_clients_clicked();
    void on_add_equipment_clicked();
    void on_up_equipment_clicked();
    void on_del_equipment_clicked();
    void on_EQUIPMENT_clicked(const QModelIndex &index);
    void on_add_goods_clicked();
    void on_up_goods_clicked();
    void on_del_goods_clicked();
    void on_GOODS_clicked(const QModelIndex &index);

    void on_add_service_clicked();

    void on_add_game_schedule_clicked();

    void on_up_service_clicked();

    void on_del_service_clicked();

    void on_SERVICE_clicked(const QModelIndex &index);

    void on_up_game_schedule_clicked();

    void on_del_game_schedule_clicked();

    void on_GAME_SCHEDULE_clicked(const QModelIndex &index);

    void on_add_applications_clicked();

    void on_up_applications_clicked();

    void on_APPLICATIONS_clicked(const QModelIndex &index);

    void on_add_cash_register_clicked();

    void on_up_cash_register_clicked();

    void on_del_cash_register_clicked();

    void on_CASH_REGISTER_clicked(const QModelIndex &index);

    void on_add_Instructor_clicked();

    void on_up_Instructor_clicked();

    void on_INSTRUCTOR_clicked(const QModelIndex &index);

    void on_del_Instructor_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase DB;
    QSqlQuery *query;
    QSqlRelationalTableModel *modul_service;
    QSqlRelationalTableModel *modul_game_schedule;
    QSqlRelationalTableModel *modul_cash_register;
    QSqlRelationalTableModel *modul_applications;

    QSqlTableModel *modul_clients;
    QSqlTableModel *modul_equipment;
    QSqlTableModel *modul_goods;
    QSqlTableModel *modul_instructor;

    QSqlRelationalDelegate *m_D_service;
    QSqlRelationalDelegate *m_D_game_schedule;
    QSqlRelationalDelegate *m_D_cash_register;
    QSqlRelationalDelegate *m_D_applications;

    int row_service;
    int row_game_schedule;
    int row_cash_register;
    int row_applications;
    int row_clients;
    int row_equipment;
    int row_goods;
    int row_instructor;
};
#endif // MAINWINDOW_H
