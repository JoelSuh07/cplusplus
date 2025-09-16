/*
 * TaxTableTools.h
 *
 *  Created on: Sep 16, 2025
 *      Author: student
 */

#ifndef TAXTABLETOOLS_H_
#define TAXTABLETOOLS_H_

#include <iostream>
#include <vector>
using namespace std;

class TaxTableTools {
   public:
      TaxTableTools();
      double GetValue(int searchArgument);
      void SetValue();
   private:
      vector<int> search;
      vector<double> value;
      int nEntries;
};



#endif /* TAXTABLETOOLS_H_ */
