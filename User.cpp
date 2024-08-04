#include "User.h"

void User::setName(string name){
  this->name=name;
}

void User::getName(){
  return this->name;
}

string User::setEmail(string email){
  this->email=email;
}

string User::getEmail(){
  return this->email;
}

double User::getTotalValue(){
  return this->totalValue;
}

double User::getNetValue(){
  return this->netValue;
}

// friend function
void showUserStats(User user){
  cout << "Name of user: " << user.name << endl;
  cout << "Email of user: " << user.email << endl;
  cout << "Total value of portfolio: " << user.totalValue << endl;
  cout << "Net Profit/Loss in portfolio: " << user.netValue << endl;
}

void User::printPurchasedStockList() {
  cout << "The purchased stocks are: " << endl << endl;

  for(int i = 0; i < (int) purhcasedStocks.size(); i++){

    cout << "STOCK NUMBER-" << i+1 << endl << endl;

    cout << "Description of all stocks in the same industry: ";
    purchasedStocks.at(i).printDescription();
    cout << "Stock Name: " << purchasedStocks.at(i).getName() << endl;
    cout << "Today's Price at Market Open: " << purchasedStocks.at(i).getInitialPrice() << endl;
    cout << "Current Price: " << purchasedStocks.at(i).getCurrentPrice() << endl;

    cout << "Bought Price: " << purchasedStocks.at(i).getBoughtPrice() << endl;
    cout << "Number of Shares: " << purchasedStocks.at(i).getNumShares() << endl;
    cout << "Total Value of Stocks: " << purchasedStocks.at(i).totalStockValue() << endl;
    cout << "Net Profit/Loss on this Stock: " << purchasedStocks.at(i).getStockNetValue() << endl << endl << endl;
  }

  cout << "-------------------------------------------------------------------------------------------------------" << endl << endl;
}
