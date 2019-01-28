#include "TitleBarWidget.h"
#include <QStyleOption>
#include <QStylePainter>
#include <QMouseEvent>

TitleBarWidget::TitleBarWidget(QWidget *parent) : QWidget(parent) { }

void TitleBarWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)
    QStyleOption option;
    option.init(this);
    QStylePainter painter(this);
    painter.drawPrimitive(QStyle::PE_Widget, option);
}

void TitleBarWidget::mousePressEvent(QMouseEvent *event)
{
    isMousePressed = true;
    QWidget *parentWidget = static_cast<QWidget *>(parent());
    differenceX = event->globalX() - parentWidget->x();
    differenceY = event->globalY() - parentWidget->y();
}

void TitleBarWidget::mouseMoveEvent(QMouseEvent *event)
{
    if (isMousePressed)
    {
        int x = event->globalX() - differenceX;
        int y = event->globalY() - differenceY;
        QWidget *parentWidget = static_cast<QWidget *>(parent());
        parentWidget->move(x, y);
    }
}

void TitleBarWidget::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event)
    isMousePressed = false;
}
