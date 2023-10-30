#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    DB = QSqlDatabase::addDatabase("QSQLITE");
    DB.setDatabaseName("./DataBase.db");
    if(DB.open()){qDebug("open");}
    else{qDebug("no open");}
    //таблица инструктор
    query = new QSqlQuery(DB);
    query -> exec("CREATE TABLE INSTRUCTOR(id INTEGER PRIMARY KEY AUTOINCREMENT, surname TEXT, name TEXT, address TEXT, telephone INT, passport_data TEXT );");
    modul_instructor = new QSqlTableModel(this, DB);
    modul_instructor -> setTable("INSTRUCTOR");
    modul_instructor -> select();
    ui -> INSTRUCTOR -> setModel(modul_instructor);
    modul_instructor -> setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    modul_instructor -> setHeaderData(1, Qt::Horizontal, QObject::tr("Фамилия"));
    modul_instructor -> setHeaderData(2, Qt::Horizontal, QObject::tr("Имя"));
    modul_instructor -> setHeaderData(3, Qt::Horizontal, QObject::tr("Адрес"));
    modul_instructor -> setHeaderData(4, Qt::Horizontal, QObject::tr("Телефон"));
    modul_instructor -> setHeaderData(5, Qt::Horizontal, QObject::tr("Данные паспорта"));
    ui -> INSTRUCTOR -> setColumnHidden(0, true);
    //таблица клиенты
    query = new QSqlQuery(DB);
    query -> exec("CREATE TABLE CLIENTS(id INTEGER PRIMARY KEY AUTOINCREMENT, surname TEXT, name TEXT, Email TEXT, telephone INT, additional_phone INT, birthday DATE, discount INT, How_did_you_know_about_us TEXT, description TEXT );");
    modul_clients = new QSqlTableModel(this, DB);
    modul_clients -> setTable("CLIENTS");
    modul_clients -> select();
    ui -> CLIENTS -> setModel(modul_clients);
    modul_clients -> setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    modul_clients -> setHeaderData(1, Qt::Horizontal, QObject::tr("Фамилия"));
    modul_clients -> setHeaderData(2, Qt::Horizontal, QObject::tr("Имя"));
    modul_clients -> setHeaderData(3, Qt::Horizontal, QObject::tr("Email"));
    modul_clients -> setHeaderData(4, Qt::Horizontal, QObject::tr("Телефон"));
    modul_clients -> setHeaderData(5, Qt::Horizontal, QObject::tr("Дополнительный телефон"));
    modul_clients -> setHeaderData(6, Qt::Horizontal, QObject::tr("День Рождения"));
    modul_clients -> setHeaderData(7, Qt::Horizontal, QObject::tr("Скидка,%"));
    modul_clients -> setHeaderData(8, Qt::Horizontal, QObject::tr("Откуда узнали о нас"));
    modul_clients -> setHeaderData(9, Qt::Horizontal, QObject::tr("Описание"));
    ui -> CLIENTS -> setColumnHidden(0, true);
    //таблица товары
    query = new QSqlQuery(DB);
    query -> exec("CREATE TABLE GOODS(id INTEGER PRIMARY KEY AUTOINCREMENT, name TEXT, category TEXT, quantity INT, cost_price INT, selling_price INT, critical_residue INT, comment TEXT );");
    modul_goods = new QSqlTableModel(this, DB);
    modul_goods -> setTable("GOODS");
    modul_goods -> select();
    ui -> GOODS -> setModel(modul_goods);
    modul_goods -> setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    modul_goods -> setHeaderData(1, Qt::Horizontal, QObject::tr("Наименование"));
    modul_goods -> setHeaderData(2, Qt::Horizontal, QObject::tr("Категория"));
    modul_goods -> setHeaderData(3, Qt::Horizontal, QObject::tr("Количество"));
    modul_goods -> setHeaderData(4, Qt::Horizontal, QObject::tr("Себестоимость, РУБ"));
    modul_goods -> setHeaderData(5, Qt::Horizontal, QObject::tr("Цена продажи, РУБ"));
    modul_goods -> setHeaderData(6, Qt::Horizontal, QObject::tr("Критичный остаток, РУБ"));
    modul_goods -> setHeaderData(7, Qt::Horizontal, QObject::tr("Комментарий"));
    ui -> GOODS -> setColumnHidden(0, true);
    //таблица оборудование
    query = new QSqlQuery(DB);
    query -> exec("CREATE TABLE EQUIPMENT(id INTEGER PRIMARY KEY AUTOINCREMENT, number INT, name TEXT, category TEXT, game_type TEXT, equipment_status TEXT, comment TEXT );");
    modul_equipment = new QSqlTableModel(this, DB);
    modul_equipment -> setTable("EQUIPMENT");
    modul_equipment -> select();
    ui -> EQUIPMENT -> setModel(modul_equipment);
    modul_equipment -> setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    modul_equipment -> setHeaderData(1, Qt::Horizontal, QObject::tr("Номер"));
    modul_equipment -> setHeaderData(2, Qt::Horizontal, QObject::tr("Наименование"));
    modul_equipment -> setHeaderData(3, Qt::Horizontal, QObject::tr("Категория"));
    modul_equipment -> setHeaderData(4, Qt::Horizontal, QObject::tr("Тип игры"));
    modul_equipment -> setHeaderData(5, Qt::Horizontal, QObject::tr("Статус оборудовнаия"));
    modul_equipment -> setHeaderData(6, Qt::Horizontal, QObject::tr("Комментарий"));
    ui -> EQUIPMENT -> setColumnHidden(0, true);
    //таблица сервис
    query = new QSqlQuery(DB);
    query -> exec("CREATE TABLE SERVICE(id INTEGER PRIMARY KEY AUTOINCREMENT, id_equipment TEXT, life_time DATE, guarantee TEXT, start_repair TEXT, end_repair TEXT, type_equipment TEXT, registration_number TEXT, year_issue TEXT, quantity INT);");
    modul_service = new QSqlRelationalTableModel(this, DB);
    m_D_service = new QSqlRelationalDelegate(this);
    modul_service -> setTable("SERVICE");
    modul_service -> setRelation(1, QSqlRelation("EQUIPMENT", "id", "number"));
    modul_service -> select();
    modul_service -> setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    modul_service -> setHeaderData(1, Qt::Horizontal, QObject::tr("id_оборудования"));
    modul_service -> setHeaderData(2, Qt::Horizontal, QObject::tr("Срок службы"));
    modul_service -> setHeaderData(3, Qt::Horizontal, QObject::tr("Гарантия"));
    modul_service -> setHeaderData(4, Qt::Horizontal, QObject::tr("Начало ремонта"));
    modul_service -> setHeaderData(5, Qt::Horizontal, QObject::tr("Конец ремонта"));
    modul_service -> setHeaderData(6, Qt::Horizontal, QObject::tr("Вид оборудования"));
    modul_service -> setHeaderData(7, Qt::Horizontal, QObject::tr("Регистрационный номер"));
    modul_service -> setHeaderData(8, Qt::Horizontal, QObject::tr("Год выпуска"));
    modul_service -> setHeaderData(9, Qt::Horizontal, QObject::tr("Количество"));
    modul_service->select();
    ui -> SERVICE -> setModel(modul_service);
    ui -> SERVICE -> setItemDelegate(m_D_service);
    ui -> SERVICE -> setColumnHidden(0, true);
    //таблица расписание игр
    query = new QSqlQuery(DB);
    query -> exec("CREATE TABLE GAME_SCHEDULE(id INTEGER PRIMARY KEY AUTOINCREMENT, id_equipment TEXT, data_game DATE, time_game TEXT, duration INT, age_bracket INT, game_type TEXT, area TEXT, number_players INT, price INT, id_instructor TEXT);");
    modul_game_schedule = new QSqlRelationalTableModel(this, DB);
    m_D_game_schedule = new QSqlRelationalDelegate(this);
    modul_game_schedule -> setTable("GAME_SCHEDULE");
    modul_game_schedule -> setRelation(1, QSqlRelation("EQUIPMENT", "id", "name"));
    modul_game_schedule -> setRelation(10, QSqlRelation("INSTRUCTOR", "id", "surname"));
    modul_game_schedule -> select();
    modul_game_schedule -> setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    modul_game_schedule -> setHeaderData(1, Qt::Horizontal, QObject::tr("id_оборудования"));
    modul_game_schedule -> setHeaderData(2, Qt::Horizontal, QObject::tr("Дата игры"));
    modul_game_schedule -> setHeaderData(3, Qt::Horizontal, QObject::tr("Время игры"));
    modul_game_schedule -> setHeaderData(4, Qt::Horizontal, QObject::tr("Продолжительность"));
    modul_game_schedule -> setHeaderData(5, Qt::Horizontal, QObject::tr("Возрастная группа"));
    modul_game_schedule -> setHeaderData(6, Qt::Horizontal, QObject::tr("Тип игры"));
    modul_game_schedule -> setHeaderData(7, Qt::Horizontal, QObject::tr("Площадка"));
    modul_game_schedule -> setHeaderData(8, Qt::Horizontal, QObject::tr("Количество игроков"));
    modul_game_schedule -> setHeaderData(9, Qt::Horizontal, QObject::tr("Стоимость, РУБ"));
    modul_game_schedule -> setHeaderData(10, Qt::Horizontal, QObject::tr("id_Инструктор"));
    modul_game_schedule -> select();
    ui -> GAME_SCHEDULE -> setModel(modul_game_schedule);
    ui -> GAME_SCHEDULE -> setItemDelegate(m_D_game_schedule);
    ui -> GAME_SCHEDULE -> setColumnHidden(0, true);
    //таблица заявки
    query = new QSqlQuery(DB);
    query -> exec("CREATE TABLE APPLICATIONS(id INTEGER PRIMARY KEY AUTOINCREMENT, id_client TEXT, telephone INT, game_date DATE, game_time TEXT, duration TEXT, number_players INT, area TEXT, event_type TEXT, age_group TEXT, game_type TEXT, id_equipment TEXT, id_product TEXT, id_instructor TEXT);");
    modul_applications = new QSqlRelationalTableModel(this, DB);
    m_D_applications = new QSqlRelationalDelegate(this);
    modul_applications -> setTable("APPLICATIONS");
    modul_applications -> setRelation(1, QSqlRelation("CLIENTS", "id", "name"));
    modul_applications -> setRelation(11, QSqlRelation("EQUIPMENT", "id", "name"));
    modul_applications -> setRelation(12, QSqlRelation("GOODS", "id", "name"));
    modul_applications -> setRelation(13, QSqlRelation("INSTRUCTOR", "id", "surname"));
    modul_applications -> select();
    modul_applications -> setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    modul_applications -> setHeaderData(1, Qt::Horizontal, QObject::tr("id_Клиент"));
    modul_applications -> setHeaderData(2, Qt::Horizontal, QObject::tr("Телефон"));
    modul_applications -> setHeaderData(3, Qt::Horizontal, QObject::tr("Дата игры"));
    modul_applications -> setHeaderData(4, Qt::Horizontal, QObject::tr("Время игры"));
    modul_applications -> setHeaderData(5, Qt::Horizontal, QObject::tr("Продолжительность"));
    modul_applications -> setHeaderData(6, Qt::Horizontal, QObject::tr("Количество игроков"));
    modul_applications -> setHeaderData(7, Qt::Horizontal, QObject::tr("Площадка"));
    modul_applications -> setHeaderData(8, Qt::Horizontal, QObject::tr("Тип мероприятия"));
    modul_applications -> setHeaderData(9, Qt::Horizontal, QObject::tr("Возрастная группа"));
    modul_applications -> setHeaderData(10, Qt::Horizontal, QObject::tr("Тип игры"));
    modul_applications -> setHeaderData(11, Qt::Horizontal, QObject::tr("id_оборудования"));
    modul_applications -> setHeaderData(12, Qt::Horizontal, QObject::tr("id_товара"));
    modul_applications -> setHeaderData(13, Qt::Horizontal, QObject::tr("id_Инструктор"));
    modul_applications -> select();
    ui -> APPLICATIONS -> setModel(modul_applications);
    ui -> APPLICATIONS -> setItemDelegate(m_D_applications);
    ui -> APPLICATIONS -> setColumnHidden(0, true);
    //таблица касса
    query = new QSqlQuery(DB);
    query -> exec("CREATE TABLE CASH_REGISTER(id INTEGER PRIMARY KEY AUTOINCREMENT, date_creation DATE, id_applications INT, instructor TEXT, type TEXT, coming TEXT, consumption TEXT, difference TEXT );");
    modul_cash_register = new QSqlRelationalTableModel(this, DB);
    m_D_cash_register = new QSqlRelationalDelegate(this);
    modul_cash_register -> setTable("CASH_REGISTER");
    modul_cash_register -> setRelation(2, QSqlRelation("APPLICATIONS", "id", "game_date"));
    modul_cash_register -> setRelation(3, QSqlRelation("INSTRUCTOR", "id", "surname"));

    modul_cash_register -> select();
    modul_cash_register -> setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    modul_cash_register -> setHeaderData(1, Qt::Horizontal, QObject::tr("Дата создания"));
    modul_cash_register -> setHeaderData(2, Qt::Horizontal, QObject::tr("id_заявки"));
    modul_cash_register -> setHeaderData(3, Qt::Horizontal, QObject::tr("Инструктор"));
    modul_cash_register -> setHeaderData(4, Qt::Horizontal, QObject::tr("Тип"));
    modul_cash_register -> setHeaderData(5, Qt::Horizontal, QObject::tr("Приход"));
    modul_cash_register -> setHeaderData(6, Qt::Horizontal, QObject::tr("Расход"));
    modul_cash_register -> setHeaderData(7, Qt::Horizontal, QObject::tr("Разница"));
    modul_cash_register -> select();
    ui -> CASH_REGISTER -> setModel(modul_cash_register);
    ui -> CASH_REGISTER -> setItemDelegate(m_D_cash_register);
    ui -> CASH_REGISTER -> setColumnHidden(0, true);

}

MainWindow::~MainWindow()
{
    delete ui;
}
//добавление клиента
void MainWindow::on_add_clients_clicked(){
   modul_clients -> insertRow(modul_clients -> rowCount());
}
//обновление клиента
void MainWindow::on_up_clients_clicked(){
    modul_clients -> select();
}
//удаление клиента
void MainWindow::on_del_clients_clicked()
{
    modul_clients -> removeRow(row_clients);
}
void MainWindow::on_CLIENTS_clicked(const QModelIndex &index)
{
    row_clients = index.row();
}


//добавление оборудования
void MainWindow::on_add_equipment_clicked()
{
     modul_equipment -> insertRow(modul_equipment -> rowCount());
}
//обновление оборудования
void MainWindow::on_up_equipment_clicked()
{
     modul_equipment -> select();
}
//удаление оборудования
void MainWindow::on_del_equipment_clicked()
{
     modul_equipment -> removeRow(row_equipment);
}
void MainWindow::on_EQUIPMENT_clicked(const QModelIndex &index)
{
     row_equipment = index.row();
}


//добавление товара
void MainWindow::on_add_goods_clicked()
{
    modul_goods -> insertRow(modul_goods -> rowCount());
}
//обновление товара
void MainWindow::on_up_goods_clicked()
{
    modul_goods -> select();
}
//удаление товара
void MainWindow::on_del_goods_clicked()
{
     modul_goods -> removeRow(row_goods);
}
void MainWindow::on_GOODS_clicked(const QModelIndex &index)
{
    row_goods = index.row();
}


//добавление сервиса
void MainWindow::on_add_service_clicked()
{
     modul_service -> insertRow(modul_service -> rowCount());
}
//обновление сервиса
void MainWindow::on_up_service_clicked()
{
    modul_service -> select();
}
//удаление сервиса
void MainWindow::on_del_service_clicked()
{
    modul_service -> removeRow(row_service);
}
void MainWindow::on_SERVICE_clicked(const QModelIndex &index)
{
    row_service = index.row();
}


//добавление расписания игр
void MainWindow::on_add_game_schedule_clicked()
{
    modul_game_schedule -> insertRow(modul_game_schedule -> rowCount());
}
//обновление расписания игр
void MainWindow::on_up_game_schedule_clicked()
{
    modul_game_schedule -> select();
}
//удаление расписания игр
void MainWindow::on_del_game_schedule_clicked()
{
    modul_game_schedule -> removeRow(row_game_schedule);
}
void MainWindow::on_GAME_SCHEDULE_clicked(const QModelIndex &index)
{
    row_game_schedule = index.row();
}


//добавление заявок
void MainWindow::on_add_applications_clicked()
{
    modul_applications -> insertRow(modul_applications -> rowCount());
}
//обновления заявок
void MainWindow::on_up_applications_clicked()
{
    modul_applications -> select();
}
//удаление заявок
void MainWindow::on_del_applications_clicked()
{
    modul_applications -> removeRow(row_applications);
}
void MainWindow::on_APPLICATIONS_clicked(const QModelIndex &index)
{
    row_applications = index.row();
}


//добавление кассы
void MainWindow::on_add_cash_register_clicked()
{
    modul_cash_register -> insertRow(modul_cash_register -> rowCount());
}
//обновление кассы
void MainWindow::on_up_cash_register_clicked()
{
    modul_cash_register -> select();
}
//удаление кассы
void MainWindow::on_del_cash_register_clicked()
{
    modul_cash_register -> removeRow(row_cash_register);
}
void MainWindow::on_CASH_REGISTER_clicked(const QModelIndex &index)
{
    row_cash_register = index.row();
}


//добавление инструктора
void MainWindow::on_add_Instructor_clicked()
{
    modul_instructor -> insertRow(modul_instructor -> rowCount());
}
//обновление инструктора
void MainWindow::on_up_Instructor_clicked()
{
    modul_instructor -> select();
}
//удаление инструктора
void MainWindow::on_del_Instructor_clicked()
{
    modul_instructor -> removeRow(row_instructor);
}
void MainWindow::on_INSTRUCTOR_clicked(const QModelIndex &index)
{
    row_instructor = index.row();
}




