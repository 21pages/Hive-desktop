#ifndef GUIHOMETAB_H
#define GUIHOMETAB_H

#include <QWidget>

#include "GuiMenuButton.h"

#include <QVBoxLayout>
#include <QGridLayout>

class GuiHomeTab : public QWidget
{
  Q_OBJECT

public:
  explicit GuiHomeTab(QWidget *parent = 0);
  ~GuiHomeTab();

  GuiMenuButton *welcome_btn;
  GuiMenuButton *storage_btn;

private:
  QVBoxLayout *main_layout;
};

#endif // GUIHOMETAB_H
