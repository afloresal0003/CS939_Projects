//gasmileage.cpp
//This program calculates your gas mileage after two fill ups. 
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    //Declares all the variables that
    //will be used for holding user
    //data, or calculation totals
    //to be displayed to the user
    double numOfFilledGals,
           totalGals = 0,
           oldOdometerVal,
           newOdometerVal,
           totalOdometerVal1 = 0,
           totalOdometerVal2 = 0,
           milesPerGal;

    //TITLE and intro to program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                   Welcome to the Gas Mileage Calculator!" << endl;
    //DESCRIPTION of program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "REGULATIONS: " << endl;
    cout << "This program calculates your gas mileage after two fill ups. " << endl;
    cout << "Enter your previous odometer reading to precisely calculate your mileage." << endl;
    cout << "Next, enter your current odometer reading during a specific fill-up." << endl;
    cout << "Then, enter the amount of gallons you filled up during a specific fill-up" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                     *Please enter positive integers only!*" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    //BEGINNING of program
        //Let's the user know they're on fill-up
        //one.
    cout << "FILL UP #1: " << endl;
    cout << "Enter your previous odometer reading: ";
        cin >> oldOdometerVal;
        //Validates if the user inputted
        //a positive number
        if (!cin || oldOdometerVal < 0)
        {
            //IF they enter a negative number ot character,
            //it will close the program and tell them it's
            //invalid.
            cout << "You entered an invalid amount!";
            return 0;
        }
    //Loops the statements within the
    //"for loop" twice
    for (int count = 1; count <  3; count++)
    {
        //Let's the user know they're on fill-up
        //two, after it loops once
        if (count == 2)
        {
            cout << "\nFILL UP #2: " << endl;
        }
        //For FILL-UP #2, their previous odometer reading
        //was whatever value they input for their odometer
        //reading for FILL-UP #1, thus there is no need to
        //ask for it
        
        //Asks the user for their odometer reading
        //during a certain fill-up
        cout << "Enter your odometer reading for (fill-up #" << count << "): ";
        cin >> newOdometerVal;
        //Validates if the user inputted
        //a positive number or an
        //odometer value that's greater
        //than the previous odometer value
        if (!cin || newOdometerVal < 0 || newOdometerVal < oldOdometerVal)
        {
            //IF they enter a negative number, character,
            //or an odometer value less than the previous,
            //it will close the program and tell them it's
            //invalid.
            cout << "You entered an invalid amount!";
            return 0;
        }
        //Asks the user for the number of gallons
        //they filled up for a certain fill-up
        cout << "Enter the number of gallons you filled up for (fill-up #" << count << "): ";
        cin >> numOfFilledGals;
        //Validates if the user inputted
        //a positive number
        if (!cin || numOfFilledGals < 0)
        {
            //IF they enter a negative number ot character,
            //it will close the program and tell them it's
            //invalid.
            cout << "You entered an invalid amount!";
            return 0;
        }
        //Sums up all the miles that have
        //been driven for the two fill-ups
        totalOdometerVal1 = newOdometerVal - oldOdometerVal;
        totalOdometerVal2 = totalOdometerVal2 + totalOdometerVal1;
        //Replaces the old odometer value
        //with the new value to enable
        //correct calculation of the miles driven
        oldOdometerVal = newOdometerVal;
        //Sums up the gallons filled for
        //the two fill ups
        totalGals = totalGals + numOfFilledGals;
    }
    
    //Determines gas mileage
    milesPerGal = totalOdometerVal2 / totalGals;
    //Displays the results
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                                    RESULTS: " << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Total Miles Driven: " << totalOdometerVal2 << endl;
    cout << "Total Amount of Gallons: " << totalGals << endl;
    //Ensures a value rounded up to the tenths place after the decimal
    cout << fixed << showpoint << "Gas Mileage: " << setprecision(2) << milesPerGal << " miles/gallon" << endl;
    
    //CLOSING REMARK
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                                HAVE A NICE DAY! " << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
}