#ifndef MYQTABLEWIDGET_H
#define MYQTABLEWIDGET_H

#include <QTableWidget>
#include <QEvent>

class MyQTableWidget : public QTableWidget
{
    Q_OBJECT
public:
    explicit MyQTableWidget(QWidget *parent = 0);

protected:
    void setRowColor(int row, QColor color);

signals:

public slots:
    void slot_mycellEntered(int row, int column);

private:

    QColor m_defaultBkColor;
    int m_previousColorRow;
    // 局部变量提升为成员变量.避免一直定义内存...
    QTableWidgetItem * m_item;
};

#endif // MYQTABLEWIDGET_H
