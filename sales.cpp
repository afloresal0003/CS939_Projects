using namespace std;
#include "sales.h"
// Declares a CorpData function, from the CorpData
// structure, that sets the division's information
// using the values that are passed. 
CorpData::CorpData(string divName, double sales1, double sales2, double sales3, double sales4)
    {
        _divName = divName;
        _sales1 = sales1;
        _sales2 = sales2;
        _sales3 = sales3;
        _sales4 = sales4;
    }

// Declares a calcTotal function, from the CorpData 
// structure, that calculates the division's total sales
// and returns the total  
double CorpData::calcTotal() const 
    {
        double total = _sales1 + _sales2 + _sales3 + _sales4;
        return total;
    }

// Declares a calcAverage function, from the CorpData
// structure, that calculates the division's average
// quarterly sales, and returns the average 
double CorpData::calcAverage() const 
    {
        double average = calcTotal() / 4;
        return average;
    }
    