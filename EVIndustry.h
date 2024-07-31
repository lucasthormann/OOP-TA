#ifndef _EVINDUSTRY_
#define _EVINDUSTRY_

#include "Industry.h"

// class is used to make EV stock

class EVIndustry: public Industry{
  public:
    EVIndustry(string stockName, double initialStockPrice);
};

#endif
