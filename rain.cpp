//rain.cpp
//This program will calculate the average monthly rainfall for three months
//Needed to do C++ I/O
#include <iostream> 
//Needed by some compilers to use strings
#include <string>     
//Needed by some compilers to perform decimal manipulation
#include <iomanip>
using namespace std;    

int main()  
{
    //declares the names of months as strings
    //and the monthly rainfall as double
    string monthOneName;                     
    double monthOneRainAmt;                 
    string monthTwoName;
    double monthTwoRainAmt;
    string monthThreeName;
    double monthThreeRainAmt;
    
    //Let's the user know what the program will do
    cout << "This program will calculate the average monthly rainfall for three months!\n";
    
    //Separates the title from the input coding 
    cout << "-------------------------------------------------------------------------------" << endl;
    
    //Asks for the months and the rainfall for each, 
    //then puts it into individual variables
    cout << "Please enter the name of the first month: ";
    cin >> monthOneName;
    
    cout << "Please enter the amount of rainfall that fell (in inches): ";
    cin >> monthOneRainAmt;
    //Checks if the user entered a valid integer
    //and not a character or string
    while (!cin || monthOneRainAmt < 0) 
    {
        cout << "Error! Enter a valid amount: " ;
        //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that could've caused the read failure
        cin.ignore(1000,'\n');
        cin >> monthOneRainAmt;
    }
    
    cout << "Please enter the name of the second month: ";
    cin >> monthTwoName;
    
    cout << "Please enter the amount of rainfall that fell (in inches): ";
    cin >> monthTwoRainAmt;
    //Checks if the user entered a valid integer
    //and not a character or string
    while (!cin || monthTwoRainAmt < 0) 
    {
        cout << "Error! Enter a valid amount: " ;
        //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that could've caused the read failure
        cin.ignore(1000,'\n');
        cin >> monthTwoRainAmt;
    }
    
    cout << "Please enter the name of the third month: ";
    cin >> monthThreeName;

    cout << "Please enter the amount of rainfall that fell (in inches): ";
    cin >> monthThreeRainAmt;
    //Checks if the user entered a valid integer
    //and not a character or string
    while (!cin || monthThreeRainAmt < 0) 
    {
        cout << "Error! Enter a valid amount: " ;
        //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that could've caused the read failure
        cin.ignore(1000,'\n');
        cin >> monthThreeRainAmt;
    }
    
    //Adds all the monthly rainfalls together, 
    double monthAmtSum = monthOneRainAmt + monthTwoRainAmt + monthThreeRainAmt;
    
    //Determines the average monthly rainfall
    double averageMonthRain = monthAmtSum/3;

    //Prints a line on the output screen
    cout << "-------------------------------------------------------------------------------" << endl;
    //Prints the output (average monthly rainfall ) to the user
    cout << fixed << showpoint << "The average monthly rainfall for " << monthOneName << ", " << monthTwoName << ", and " << monthThreeName << " was " << setprecision(2) << averageMonthRain << " inches.\n" << endl;
    //Returns zero to main function 
    return 0;
}