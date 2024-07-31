#ifndef _VGINDUSTRY_
#define _VGINDUSTRY_

#include "Industry.h"
// class makes video game stock

class VGIndustry: public Industry{
  public:
    VGIndustry(string stockName, double initialStockPrice);
};

#endif
