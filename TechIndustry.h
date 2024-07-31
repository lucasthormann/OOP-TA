#ifndef _TECHINDUSTRY_
#define _TECHINDUSTRY_

#include "Industry.h"

// class used to make tech stock

class TechIndustry: public Industry{
  public:
    TechIndustry(string stockName, double initialStockPrice);
};

#endif
