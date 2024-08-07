#include "BuySellMenu.h"

string BuySellMenu::menuType = "\nWelcome to the Buy-Sell Menu!";

BuySellMenu::BuySellMenu(User user): // constructor w initializer list
Nio("Nio", 30),
Tesla("Tesla", 600),
AmericanAirlines("American Airlines", 20),
UnitedAirlines("United Airlines", 15),
GameStop("GameStop", 70),
EA("Electronic Arts", 50),
Facebook("Facebook", 250),
Apple("Apple", 120)
{
  this->user = user;
}

