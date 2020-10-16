//sumloop.cpp
//This program computes the sum of 
//all the integers from 1 up to the number entered.
//Needed to do C++ I/O
#include <iostream> 
//Needed by some compilers to perform decimal manipulation
#include <iomanip>
using namespace std;    
int main()
{
    //Declares the variables that will
    //be used to hold the user's limit,
    //integers less than the limit,
    //and the sum of all those integers
    double intLimit;    
    double integers = 1;
    double sumOfInts = 0;
    
    //TITLE and intro to program
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "                       Welcome to the Sum Loop Calculator!\n";

    //DESCRIPTION of program
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "REGULATIONS: \n";
    cout << "Enter an integer limit. \n";
    cout << "I will give you the sum of all the integers from 1 up to the number entered.\n";
    cout << "*Please enter positive integers only!*" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    
    //BEGINNING of the program 
    //Asks the user for the amount of units they purchased 
    cout << "\nPlease enter the limit you would like: ";
    cin >> intLimit;
    //Checks if the user entered a valid integer
    //and not a character or string
    while (!cin || intLimit < 0) 
    {
        cout << "Error! Enter a valid amount: " ;
        //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that could've caused the read failure
        cin.ignore(1000,'\n');
        cin >> intLimit;
    }
    //TITLE OF SECTION
    cout << "\n-------------------------------------------------------------------------------" << endl;
    cout << "                                     RESULTS: " << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Integers: ";
    //Repeadedly calculates the sum of all the integers
    //less than the limit and the limit
    while (integers <= intLimit)
        {
            //Places a comma after every integer
            cout << integers << ",";
            //Accumulates the sum of the integers
            sumOfInts = sumOfInts + integers;
            integers++;
            
        }
    
    //RESULTS
    //Displays the limit entered in by the user
    cout << "\nLimit: " << intLimit << endl;
    //Displays the sum of all the integers
    cout << "Total: " << sumOfInts << endl;

}