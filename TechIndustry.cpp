#include "TechIndustry.h"

TechIndustry::TechIndustry(string stockName, double initialStockPrice){
  this->setName(stockName);
  this->setInitialPrice(initialStockPrice);
  this->setCurrentPrice(0);

  this->setSoldPrice(0);
  this->priceChange();
  this->setBoughtPrice(0);
  this->setNumShares(0);
  this->setDescription("This class includes two tech stocks that can be purchased. These are Facebook and Apple stock.");
}
