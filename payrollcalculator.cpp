//payrollcalculator.cpp
//This program will calculate the amount of pay you will get from your paycheck
#include <iostream>     //Needed to do C++ I/O
#include <string>       //Needed by some compilers to use strings
using namespace std;

int main()
{
    float numOfHours;  //Sets the variables as floats to allow calculations to occur
    float hourlyRate;
    float numOfDays;
    float taxRate;
    
    //
    cout << "This program will calculate your pay!\n";
    
    
    //Get the user's hours worked 
    cout << "Please enter the number of hours you work per day (digits only)\n";
    cin >> numOfHours;
    
    
    //Get the number of days worked 
    cout << "Please enter the number of days you worked (digits only)\n";
    cin >> numOfDays;
    
    //Get the hourly rate 
    cout << "Please enter your pay per hour (hourly rate: digits only)\n";
    cin >> hourlyRate;
    
    float grossPay = numOfHours * hourlyRate * numOfDays;

    cout << "Please enter the percentage of tax reduction (tax rate: digits only)\n";
    cin >> taxRate;
    
    taxRate = taxRate/100*grossPay;
    float netPay = grossPay - taxRate;
    
    cout << "Hours Worked: " << numOfHours << endl;
    cout << "Days Worked: " << numOfDays << endl;
    cout << "Hourly Rate: $" << hourlyRate << " per hour" << endl;
    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Total Pay (after tax reduction): $" << netPay;
    
    
    return 0;
}

