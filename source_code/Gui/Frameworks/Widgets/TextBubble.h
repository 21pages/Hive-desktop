#ifndef GUICHATBUBBLE_H
#define GUICHATBUBBLE_H

#include "GlobalData.h"
#include <QWidget>
#include <QResizeEvent>
#include <QMouseEvent>
#include <QPainter>
#include <QStaticText>
#include <QFontMetrics>
#include <QDebug>
#include <QPaintEngine>


class TextBubble : public QWidget
{
  Q_OBJECT

public:
  enum Palette{
    BackgroundDefault = 0,
    BackgroundHovered = 1,
    ForegroundDefault = 2,
    ForegroundHovered = 3
  };

  explicit TextBubble(const QString &txt, int w = 0, int h = 100, QWidget *parent = 0);
  explicit TextBubble(const QString &txt, QWidget *parent = 0);

  void setFont(const QFont &f);
  void setFont(const QString &family, const int &pixelSize);
  void setText(const QString &str);

  void setPalette(const Palette &palette, const QColor &color);


protected:
  void paintEvent(QPaintEvent *);
  void resizeEvent(QResizeEvent *ev);
  void mousePressEvent(QMouseEvent *);
  void mouseReleaseEvent(QMouseEvent *);
//  void enterEvent(QEvent *ev);
//  void leaveEvent(QEvent *ev);

private:
  bool hovered = false;

  int max_width = 400;
  int width = 0;
  int height = 30;

  QRect background_rect;

  QString text;
  QFont font;

  QColor background_default_color = QColor(245,245,245);
  QColor foreground_default_color = QColor(140,140,140);

  void updateTextRect();

signals:
  void clicked();
};


#endif // GUICHATBUBBLE_H
