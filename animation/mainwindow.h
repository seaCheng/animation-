#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "graphicsViewComp.h"

QT_BEGIN_NAMESPACE
namespace Ui { class animationMW; }
QT_END_NAMESPACE

class QToolBar;
class SampleModel;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setupUndoRedoActions();

    void setConnect();
public slots:

    void slot_show(const QString &message);
    void slot_add();
    void slot_importGif();
    void slot_FinimportGif();

    void slot_save();
    void slot_load();

    void slot_import(type_import type);

private:
    Ui::animationMW *ui;
    QToolBar* m_toolBar{nullptr};
    SampleModel * m_model = nullptr;
};
#endif // MAINWINDOW_H
