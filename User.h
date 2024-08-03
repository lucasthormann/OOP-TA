#ifndef _USER_
#define _USER_

#include "common.h"
#include "Industry.h"

class User{

private:
  string name; // holds name of user
  string email; // holds user email
  double boughtPrice;
  double totalValue; // portfolio total value
  double netValue; // profit or loss of entire portfolio
  vector<Industry> purchasedStocks;
  vector<Industry> soldStocks;

public:
  void setName(string name);
  string getName();

  void setEmail(string email);
  string getEmail();

  friend void showUserStats(User user); // friend function used here which returns portfolio info
                                        
  void adjustTotalValue(); // calculates total value of portfolio as transactions are made
  void adjustNetValue(); // calculates the net profit in the portfolio as transactions are made

  double getTotalValue();
  void setTotalValue(double totalValue);
  void setNetValue(double netValue);

  double getNetValue();

  void priceChangeAllPurchasedStocks(); // applies the price changing algo to all purchased stocks

  friend User& operator += (User& user, Industry st); // overloaded operators and friend function used here to add a stock to the portfolio when it's bought

  friend User& operator -= (User& user, Industry st); // sells a stock and removes it from portfolio


  void printPurchasedStockList();

  void printSoldStockList();

  vector<Industry> getPurchasedStocks();
  vector<Industry> getSoldStocks();

};

#endif
