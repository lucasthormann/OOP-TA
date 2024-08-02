#include "AirlinesIndustry.h"

AirlinesIndustry::AirlinesIndustry(string stockName, double initialStockPrice){
  this->setName(stockName);
  this->setInitialPrice(initialStockPrice);
  this->setCurrentPrice(0);

  this->setSoldPrice(0);
  this->priceChange();
  this->setBoughtPrice(0);
  this->setNumShares(0);
  this->setDescription("This class includes two airline stocks that can be purchased. These are American Airlines and United Airlines stock.");
}
