#ifndef _USER_
#define _USER_

#include "common.h"
#include "Industry.h"

class User{

private:
  string name;
  string email;
  double boughtPrice;
  double totalValue;
  double netValue;
  vector<Industry> purchasedStocks;
  vector<Industry> soldStocks;

public:
  void setName(string name);
  string getName();

  void setEmail(string email);
  string getEmail();

  friend void showUserStats(User user); // friend function used here which returns portfolio info
                                        //
  void adjustTotalValue();
  void adjustNetValue();

  double getTotalValue();
  void setTotalValue(double totalValue);
  void setNetValue(double netValue);

  double getNetValue();

  void priceChangeAllPurchasedStocks();

  friend User& operator += (User& user, Industry st);

  friend User& operator -= (User& user, Industry st);


  void printPurchasedStockList();

  void printSoldStockList();

  vector<Industry> getPurchasedStocks();
  vector<Industry> getSoldStocks();

};

#endif
