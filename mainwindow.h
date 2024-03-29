#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDate>
#include <QDateEdit>
#include <QItemDelegate>
#include <QMainWindow>
#include <QStandardItemModel>
#include <QTimeEdit>
#include <QWidget>

#include <QApplication>
#include <QItemDelegate>
#include <QMessageBox>
#include <QPainter>
#include <QPushButton>
#include <QStyleOptionButton>

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
    void on_pushButton_OK_clicked();

    void on_comboBox_day_currentIndexChanged(int index);

    void on_pushButton_addDesc_clicked();

    void on_pushButton_light_clicked();

    void on_pushButton_dark_clicked();

    void addNewMyDayTask(const QString &todays_task);

    void addNewPlannedTask(const QString &TO_DO,
                           int urgency,
                           const QString &timeString,
                           const QString &dateString,
                           const QString &description);

    void addNewDailyTask(const QString &TO_DO,
                         int urgency,
                         const QString &timeString,
                         const QString &description);

    void on_pushButton_add_clicked();

    void on_pushButton_ok_clicked();

    void toggleTabBar();

    void on_toolButton_clicked();

    void setviewTables();

    // Settings Section

    void loadSettings();

    void on_radioButton_Dial_toggled(bool checked);

    void on_radioButton_SpinBox_toggled(bool checked);

    void on_radioButton_Dark_toggled(bool checked);

    void on_radioButton_Light_toggled(bool checked);

    void on_pushButton_settings_Save_clicked();

private:
    QTime time;
    QDate date;
    QString timeString;
    QString dateString;
    QString TO_DO;
    QString todays_task;
    QString description;

    int urgency;
    int comboBox_day_current_index;
    int tabWidget_current_index;
    int rowCount;

    QTime currentTime = QTime::currentTime();
    QDate currentDate = QDate::currentDate();

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
