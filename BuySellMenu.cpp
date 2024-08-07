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

void BuySellMenu::showMenu(){
  cout << menuType << endl << endl;
  while(true){
    cout << "Select and option from the list below.\n\n";
    cout << "1. Buy Stocks" << endl << "2. Sell Stocks" << endl << "3. Continue Trading and View Portfolio Stats" << endl << "4. End Trading Day and Save Portfolio\n\n";
    this->userInput = getUserInput();

    if(this->userInput == 4){
      cout << "PRINTING PORTFOLIO INFO AND ENDING TRADING DAY\n\n";
      cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
      user.priceChangeAllPurchasedStocks();
      showUserStats(user);
      cout << "\n-----------------------------------------------------------------------------------------------------------------------\n\n";
      user.printPurchasedStockList();
      user.printSoldStockList();

      cout << "Exiting App. Your portfolio is save in an output file \"Portfolio.txt\".\n\n";
      writeandSavePortfolio(user); // writing in order to later display

      return;
    }
    
    if(this->userInput != 1 && this->userInput != 2 && this->userInput != 3 && this->userInput != 4){
      cout << "Please select a valid option from the menu.\n\n";
      continue;
    }
    
    if(this->userInput == 1){
      this->userInputBuyHandler();
    }

    if(this->userInput == 2){
      this->userInputSellHandler();
    }

    if(this->userInput == 3){
      user.priceChangeAllPurchasedStocks(); // everytime the user wishes to see the updated portfolio the profit/loss on all stocks change
      showUserStats(user);
      cout << "--------------------------------------------------------------------------------------------------------------------------\n\n";
      user.printPurchasedStockList();
      user.printSoldStockList();
    }
  }
}

