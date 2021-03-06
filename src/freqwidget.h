#pragma once

#include <QPainter>
#include <QPen>
#include <QWidget>
#include <vector>
#include "complex.h"

class FreqWidget : public QWidget
{
  Q_OBJECT

  struct Item
  {
    std::vector<complex> freq_;
    QPen pen_;
  };

public:
  explicit FreqWidget(QWidget* parent = 0);

  void clear();
  void add(std::vector<complex>* freq, QPen pen);

protected:
  QList<Item> items;

protected:
  void paintEvent(QPaintEvent* event) override;
};
