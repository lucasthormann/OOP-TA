#include <Industry.h>

//currentPrice getter
double Industry::getCurrentPrice(){
  return currentStockPrice;
}

//currentPrice setter
void Industry::setCurrentPrice(double currentStockPrice){
  this->currentStockPrice=currentStockPrice;
}

//initialPrice setter
void Industry::setInitialPrice(double initialStockPrice){
  this->initialStockPrice=initialStockPrice;
}

//initialPrice getter
void Industry::getInitialPrice(){
  return initialStockPrice;
}

//stockName getter method
void Industry::getName(){
  return stockName;
}

//stockName setter method
void Industry::setName(string stockName){
  this->stockName=stockName;
}

// Price Changing Algorithm
// This application can reflect a stock market where the maximum delta in the price of a stock can be 10%

void Industry::priceChange(){
  int choice=rand()%2+1;

  if(choice==1){
    double x = this->initialStockPrice * ((rand()%10+1)+100)/ (double) 100;
    this->currentStockPrice = x;
    return;
  }

  double x = this->initialStockPrice*(100-(rand()%10+1))/ (double) 100;
  this->currentStockPrice = x;
}

//setter for stock description
void Industry::setDescription(string des){
  this->descritption=des;
}

//getter for stock description
void Industry::printDescription(){
  cout << this->descritption << endl;
}

//getter for bought price
double Industry::getBoughtPrice(){
  return this->boughtPrice;
}

//setter for bought price
void Industry::setBoughtPrice(double boughtPrice){
  this->boughtPrice = boughtPrice;
}

//getter for number of shares
int Industry::getNumShares(){
  return this->numShares;
}

//setter for number of shares
void Industry::setNumShares(int numShares){
  this->numShares=numShares;
}

//total stock value getter
double Industry::totalStockValue(){
  return getCurrentPrice()*numShares;
}

//stock net value getter
double Industry::getStockNetValue(){
  return totalStockValue()-getBoughtPrice()*numShares;
}

//sold price setter
void Industry::setSoldPrice(double soldPrice){
  this->soldPrice=soldPrice;
}

//sold price getter
double Industry::getSoldPrice(){
  return this->soldPrice;
}

//description getter
string Industry::getDescription(){
  return this->description;
}

