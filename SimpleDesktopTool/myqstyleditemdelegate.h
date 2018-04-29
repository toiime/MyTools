#ifndef MYQSTYLEDITEMDELEGATE_H
#define MYQSTYLEDITEMDELEGATE_H

#include <QStyledItemDelegate>

class MyQStyledItemDelegate : public QStyledItemDelegate
{
    Q_OBJECT

public:
    explicit MyQStyledItemDelegate(QObject *parent = 0);


    void paint(QPainter *painter,
               const QStyleOptionViewItem &option, const QModelIndex &index) const;


private:
};

#endif // MYQSTYLEDITEMDELEGATE_H
