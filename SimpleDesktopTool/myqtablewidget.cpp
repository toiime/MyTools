#include "myqtablewidget.h"

MyQTableWidget::MyQTableWidget(QWidget *parent)
    : QTableWidget(parent)
{

    m_defaultBkColor = QColor(0x00,0xff,0x00,0x00);
    m_previousColorRow = -1;
    m_item = NULL;

    //connect(this,SIGNAL(cellEntered(int,int)),this,SLOT(slot_mycellEntered(int,int)));
    connect(this, &MyQTableWidget::cellEntered, this, &MyQTableWidget::slot_mycellEntered);
}

void MyQTableWidget::slot_mycellEntered(int row, int column)
{
    //还原上一行的颜色
    m_item = this->item(m_previousColorRow, 0);
    if (m_item != 0)
    {
        this->setRowColor(m_previousColorRow, m_defaultBkColor);
    }

    //设置当前行的颜色
    m_item = this->item(row, column);
    if (m_item != 0 && !m_item->isSelected() && !m_item->text().isEmpty())
    {
        this->setRowColor(row, QColor(229,243,255));
    }

    //设置行的索引
    m_previousColorRow = row;
}

//设置某一行的颜色
void MyQTableWidget::setRowColor(int row, QColor color)
{
    for (int col=0; col<this->columnCount(); ++col)
    {
        m_item = this->item(row, col);
        m_item->setBackgroundColor(color);
    }
}


