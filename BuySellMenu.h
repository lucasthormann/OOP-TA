#ifndef _BUYSELLMENU_
#define _BUYSELLMENU_

#include "Menu.h"
#include "User.h"
#include "Industry.h"
#include "EVIndustry.h"
#include "AirlinesIndustry.h"
#include "VGIndustry.h"
#include "TechIndustry.h"

User addStock(User u, Industry stock); // method for adding a stock to purchasedStock vector
User sellStock(User u, Industry stock);

// Inherits from Menu class 
class BuySellMenu:public Menu{
private:
  int userInput;
  static string menuType;
  User user;

  EVIndustry Nio;
  EVIndustry Tesla;

  AirlinesIndustry AmericanAirlines;
  AirlinesIndustry UnitedAirlines;

  VGIndustry GameStop;
  VGIndustry EA;

  TechIndustry Facebook;
  TechIndustry Apple;

public:
  BuySellMenu(User user);

  void showMenu(); // overriden
  void userInputBuyHandler(); // overriden
  void userInputSellHandler(); // overriden
  int getUserInput();

  void printStockList();
  void writeandSavePortfolio(User user); // writing to text files implemented here
};

#endif
