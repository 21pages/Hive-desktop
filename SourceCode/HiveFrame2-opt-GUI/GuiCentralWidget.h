#ifndef GUICENTRALWIDGET_H
#define GUICENTRALWIDGET_H

#include "GuiTabBlock.h"
#include "GuiMainBlock.h"

#include "DataManager.h"
#include "NetManager.h"
#include "ThreadInfo.h"

class GuiCentralWidget : public QWidget
{
  Q_OBJECT

public:
  explicit GuiCentralWidget(QWidget *parent = 0);
  ~GuiCentralWidget();

  QHBoxLayout *main_layout;
  GuiTabBlock *gui_tab_block;
  GuiMainBlock *gui_main_block;

private:
  DataManager *data_manager;
  NetManager *net_manager;
  ThreadInfo *thread_info;

  QString usr_key_str;
  QString usr_name_str;
  QString avatar_path_str;

  QStringList my_profile_str_list;

private slots:
  void onUsrEnter(UsrProfileStruct *usrProfileStruct);



};

#endif // GUICENTRALWIDGET_H
