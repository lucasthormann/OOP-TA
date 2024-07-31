#ifndef _AIRLINESINDUSTRY_
#define _AIRLINESINDUSTRY_

#include "Industry.h"

// class used to make airlines stock

class AirlinesIndustry: public Industry {
  public:
    AirlinesIndustry(string stockName, double initialStockPrice);
};

#endif
