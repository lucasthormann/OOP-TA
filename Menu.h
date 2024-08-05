#ifndef _MENU_
#define _MENU_

#include "common.h"

//virtual parent class which is inhereted by ProfileMenu and BuySellMenu class

class Menu{
  public:
    virtual void showMenu() = 0; // pure virtual function
    virtual void userInputBuyHandler(){ return; }
    virtual void userInputSellHandler(){ return; }
    virtual int getUserInput(){ return 0; }

};

#endif
