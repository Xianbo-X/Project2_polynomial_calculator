#pragma once
#ifndef SRC_UI_H_
#define SRC_UI_H_
#include "controller.h"

namespace UI {
class UserInterface {
 private:
  int opt;
  int callMenu;
  std::string opt_str;

 public:
  UserInterface(/* args */);
  ~UserInterface();
  // accessors
  int getOption() const;
  int getNext() const;
  // mutator
  bool setCallMenu(int opt);
  void dispatch();
  bool setOption();
  void welcomePage();  // 0
  void sayGoodbye();   //-1
  void mainMenu();     // 1
  void calcMenu();     // 2
                       // friend void ctl::controller::start();
};

}  // namespace UI

#endif  // SRC_MENU_H_
