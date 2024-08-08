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

  for(int i = 0; i < (int) purchasedStocks.size(); i++){

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

//for adding a stock
User& operator += (User& user, Industry st){
  st.setBoughtPrice(st.getCurrentPrice()); // bought price is set when a stock is bought 
  user.purchasedStocks.push_back(st);
  user.adjustTotalValue();

  return user;
}

// for selling a stock (overloaded -= operator) removes stock from purchased stock vector and adds to sold stock vector
User& operator -= (User& user, Industry st){
  for(int i = 0; i < (int) user.purchasedStocks.size(); i++){
    if(st.getName().compare(user.purchasedStocks.at(i).getName())==0){
      user.purchasedStocks.at(i).setSoldPrice(st.getCurrentPrice());
      user.soldStocks.push_back(user.purchasedStocks.at(i));
      user.purchasedStocks.erase(user.purchasedStocks.begin()+i);
      break;
    }
  }

  //adjusting values for total value and net value of portfolio each time that a stock is sold
  user.totalValue = 0;
  user.netValue = 0;

  user.adjustTotalValue();
  user.adjustNetValue();

  return user;
}

//simulates price change in purchased stocks in purchased stocks vector
void User::priceChangeAllPurchasedStocks(){
  this->totalValue = 0;
  this->netValue = 0;

  for(int i = 0; i < (int) this->purchasedStocks.size(); i++){
    purchasedStocks.at(i).priceChange();
  }
  adjustTotalValue();
  adjustNetValue();
}

// returns total value of portfolio
void User::adjustTotalValue(){
  for(int i = 0; i < (int) this->purchasedStocks.size(); i++){
    this->totalValue+=purchasedStocks.at(i).totalStockValue();
  }
}

void User::adjustNetValue() {
  for(int i = 0; i < (int) this->purchasedStocks.size(); i++){
    this->netValue+=purchasedStocks.at(i).getStockNetValue();
  }
}

void User::printSoldStockList(){
  cout << "The list of sold stock contain: " << endl << endl;

  for(int i = 0; i < (int) this->soldStocks.size(); i++){
    cout << "STOCK NUMBER - " << i+1 << endl << endl;

    cout << "Sock Name: " << soldStocks.at(i).getName() << endl;
    cout << "Today's Starting Price: " << soldStocks.at(i).getInitialPrice() << endl;
    cout << "Current Price: " << soldStocks.at(i).getCurrentPrice() << endl;
    cout << "Bought Price: " << soldStocks.at(i).getBoughtPrice() << endl;
    cout << "Sold Price: " << soldStocks.at(i).getSoldPrice() << endl;

    cout << "Number of Shares: " << soldStocks.at(i).getNumShares() << endl;
    cout << "Total Value of Stocks: " << soldStocks.at(i).totalStockValue() << endl;
    cout << "Net Profit/Loss on this Stock: " << soldStocks.at(i).getStockNetValue() << endl << endl;
  }
  cout << "------------------------------------------------------------------------------------------------------------------------------" << endl << endl;
}

//returns vector of industry objects
vector<Industry> User::getPurchasedStocks(){
  return this->purchasedStocks;
}

vector<Industry> User::getSoldStocks(){
  return this->soldStocks;
}

void User::setTotalValue(double totalValue){
  this->totalValue = totalValue;
}

void User::setNetValue(double netValue){
  this->netValue=netValue;
}


