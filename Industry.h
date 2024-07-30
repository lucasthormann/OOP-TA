#ifndef _INDUSTRY_
#define _INDUSTRY_

#include "common.h"

class Industry {
    private:
    double initialStockPrice;
    double currentStockPrice;
    string stockName;
    double boughtPrice;
    double soldPrice;
    int numShares;
    string description;
    double netStockValue;

    public:
   
    double getCurrentPrice();                                       //returns current price at a particular instance of the trading day
    void setCurrentPrice(double currentStockPrice);

    void setInitialPrice(double initialStockPrice);
    double getInitialPrice();

    string getName();
    void setName(string stockName);

    void priceChange();             //price changing algorithm which changes the current price of the stock as trading day continues

    double getStockNetValue();      //gets the net profit/loss on each stock

    
     double getBoughtPrice();
     void setBoughtPrice(double boughtPrice);
     int getNumShares();
     void setNumShares(int numShares);

     double totalStockValue();      //returns the total market value of the stock at an instance i.e current price*number of shares

     void setDescription(string des);  
     string getDescription ();
     void printDescription();

     void setSoldPrice(double soldPrice);
     double getSoldPrice();

 



};


#endif
