// salesClass.cpp
// This program stores quarterly sales and average 
// for a company's four branches and displays each
// branch's information
#include <string>
#include <iostream>
#include <iomanip>
#include "sales.cpp"
using namespace std;

// Declares a function that will display the division information 
// with values that are passed by reference:

//      -The calcTotal function is called to calculate
//       the total and then display it afterwards
//       by using the passed information/values

//      -The calcAverage function is called to calculate
//       the average quarterly sales and then display it
//       by using the passed information/values
void displayData(const CorpData &divisionInfo) 
{
    
    cout << divisionInfo._divName << "BRANCH" << endl;
    cout << fixed << showpoint << "Sales Total: $" << setprecision(2) << divisionInfo.calcTotal() << endl;
    cout << fixed << showpoint << "Quarterly Average: $" << setprecision(2) << divisionInfo.calcAverage() << endl;
    cout << "----------------------------" << endl;
}

// MAIN FUNCTION 
int main() 
{
    //TITLE and intro to program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                    Welcome to the Cloud 9 Corporate Sales!" << endl;
    //DESCRIPTION of program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "REGULATIONS: " << endl;
    cout << "This program stores the company's division information: " << endl;
    cout << "     -Name" << endl;
    cout << "     -Sales Total" << endl;
    cout << "     -Quarterly Average" << endl;
    cout << "The program will diplay each division's information." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                                   DIVISION" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    
    // Creates an information object for each of the
    // divisions that will be passed to the CorpData
    // function.
    CorpData divisionInfo1("NORTH ", 2, 75, 163, 34);
    CorpData divisionInfo2("WEST ", 65, 88, 77, 781);
    CorpData divisionInfo3("EAST ", 156, 25, 2, 10);
    CorpData divisionInfo4("SOUTH ", 344, 4, 65, 9);
    
    // Calls the displayData function to display each
    // division's information, by passing the 
    // info within each division's information object
    displayData(divisionInfo1);
    displayData(divisionInfo2);
    displayData(divisionInfo3);
    displayData(divisionInfo4);
     
    // Returns 0 to main function
    // which terminates the program
    return 0;
}
