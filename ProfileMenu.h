#ifndef _PROFILEMENU_
#define _PROFILEMENU_

#include "common.h"
#include "Menu.h"
#include "User.h"

// child classes of Menu class
class ProfileMenu:public Menu {
  private:
    User& user;
    static string menuIntro; // static var which is displayed when program runs

  public:
    ProfileMenu(User &user);

    void showMenu(); // override of Menu::showMenu() - example of polymorphism
    int getUserInput();

    void createProfile(); // creates portfolio
    bool loadProfile(); // reading from text files implemented here
};

#endif
