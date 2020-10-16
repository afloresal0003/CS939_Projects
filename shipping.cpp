//shipping.cpp
//This program calculates your gas mileage after two fill ups. 
#include <iostream>
#include <iomanip>
using namespace std;
double weightVal,
       distanceVal,
       shippingPrice,
       ratePerMile;
        //Prototype
        int calculateCharge(int);
        //Header of function that calculates the shipping price
        int calculateCharge(int weight, int distance)
        {
            if (weight <= 2)
            {
                ratePerMile = (3.10 / 500);
                shippingPrice = (distance * ratePerMile);
            }
            //Bracket for packages over 2 kilos and under 7
            if (weight > 2 && weight <= 6)
            {
                ratePerMile = (4.20 / 500);
                shippingPrice = (distance * ratePerMile);
            }
            //Bracket for packages over 6 kilos and under 11
            if (weight > 6 && weight <= 10)
            {
                ratePerMile = (5.30 / 500);
                shippingPrice = (distance * ratePerMile);
            }
            //Bracket for packages over 10 kilos
            if (weight > 10)
            {
                ratePerMile = (6.40 / 500);
                shippingPrice = (distance * ratePerMile);
            }
            //Returns the shipping price to the main function
            //to display it to the user
            return shippingPrice;
        }
int main()
{
    //TITLE and intro to program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                   Welcome to The Fast Freight Shipping Company!" << endl;
    //DESCRIPTION of program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "REGULATIONS: " << endl;
    cout << "This program calculates the shipping charge:" << endl;
    cout << "First, enter the weight of your package." << endl;
    cout << "Then, enter the distance it is to be shipped." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                     *Please enter positive integers only!*" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "PROCESS: " << endl;
    //Asks the user for the weight of the package
    cout << "\nPlease enter the weight of your package in kilos (Enter 0 to exit): ";
        cin >> weightVal;
            //Validator
            while (!cin || weightVal < 0) 
            {
                cout << "Error! Enter a valid amount: $" ;
                //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
                cin.clear();
                //Helps in removing the input contents that could've caused the read failure
                cin.ignore(1000,'\n');
                cin >> weightVal;
            }
            //Exits program if 0 is entered
            if (weightVal == 0)
            {
                cout << "Thank you for choosing The Fast Freight Shipping Company!" << endl;
                return 0;
            }
            //Asks the user for the distance it'll be shipped
        cout << "Please enter the distance it'll be shipped, in miles (Enter 0 to exit): ";
        cin >> distanceVal;
            //Validator
            while (!cin || distanceVal < 0) 
            {
                cout << "Error! Enter a valid amount: $" ;
                //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
                cin.clear();
                //Helps in removing the input contents that could've caused the read failure
                cin.ignore(1000,'\n');
                cin >> distanceVal;
            }
            //Exits program if 0 is entered
            if (distanceVal == 0)
            {
                cout << "Thank you for choosing The Fast Freight Shipping Company!" << endl;
                return 0;
            }
            //Calls the function
        calculateCharge(weightVal, distanceVal);
        //Displays the price 
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << fixed << showpoint << "Price: $" << setprecision(2) << shippingPrice << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
    //Loops the main function
    while (weightVal > 0)
    {
        cout << "\nPlease enter the weight of your package (Enter 0 to exit): ";
        cin >> weightVal;
            while (!cin || weightVal < 0) 
            {
                cout << "Error! Enter a valid amount: $" ;
                //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
                cin.clear();
                //Helps in removing the input contents that could've caused the read failure
                cin.ignore(1000,'\n');
                cin >> weightVal;
            }
            if (weightVal == 0)
            {
                cout << "--------------------------------------------------------------------------------" << endl;
                cout << "           Thank you for choosing The Fast Freight Shipping Company!" << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                return 0;
            }
        cout << "Please enter the distance it'll be shipped: ";
        cin >> distanceVal;
            while (!cin || distanceVal < 0) 
            {
                cout << "Error! Enter a valid amount: $" ;
                //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
                cin.clear();
                //Helps in removing the input contents that could've caused the read failure
                cin.ignore(1000,'\n');
                cin >> distanceVal;
            }
        calculateCharge(weightVal, distanceVal);
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << fixed << showpoint << "Price: $" << setprecision(2) << shippingPrice << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
        
    }   
}