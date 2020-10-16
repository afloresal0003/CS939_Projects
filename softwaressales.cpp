//softwaresales.cpp
//This program computes the total
//costs of the software purchase.
//Needed to do C++ I/O
#include <iostream> 
//Needed by some compilers to perform decimal manipulation
#include <iomanip>
using namespace std;    
int main()  
{
    //Prepares all variables that
    //will be used to hold data
    double unitsPurchased,
           unitsSubTotal,
           unitsTotal;
    //Establishes price of each
    //package and the discounted
    //price 
    const double packagePrice = 199;
    const float  discountOne = 0.20,
                 discountTwo = 0.30,
                 discountThree = 0.40,
                 discountFour = 0.50;
    float discountAmt;
                 
    //TITLE and intro to program
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "Welcome to the Software Sales Calculator!\n";

    //DESCRIPTION of program
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "Regulations: \n";
    cout << "Enter the amount of units you purchased: \n";
    cout << "*Enter positive INTEGERS ONLY!*\n";
    
    //BEGINNING of the program 
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "Let's begin... \n";
    
    //Asks the user for the amount of units they purchased 
    cout << "Please enter the amount of units you would like to purchase: ";
    cin >> unitsPurchased;
    //Checks if the user entered a valid amount
    //and not a character or string
    while (!cin || unitsPurchased < 0) 
    {
        cout << "Error! Enter a valid amount: " ;
        //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that could've caused the read failure
        cin.ignore(1000,'\n');
        cin >> unitsPurchased;
    }

    //Calculates the total for
    //purchases of less than 10 units
    if (unitsPurchased < 10)
        {
            cout << "-------------------------------------------------------------------------------" << endl;
            cout << "Discount: None\n";
            unitsSubTotal = unitsPurchased * packagePrice;
            unitsTotal = unitsSubTotal;
        }
    //Calculates the total for
    //purchases of between 10-19 units
    if (unitsPurchased >= 10 && unitsPurchased <= 19)
        {
            cout << "-------------------------------------------------------------------------------" << endl;
            cout << "Discount: 20% \n";
            unitsSubTotal = unitsPurchased * packagePrice;
            discountAmt = unitsSubTotal * discountOne;
            unitsTotal = unitsSubTotal - discountAmt;
        }
    //Calculates the total for
    //purchases of between 20-49 units
    if (unitsPurchased >= 20 && unitsPurchased <= 49)
        {
            cout << "-------------------------------------------------------------------------------" << endl;
            //Let's the user know their discount
            cout << "Discount: 30% \n";
            unitsSubTotal = unitsPurchased * packagePrice;
            discountAmt = unitsSubTotal * discountTwo;
            unitsTotal = unitsSubTotal - discountAmt;
        }
    //Calculates the total for
    //purchases of between 50-99 units
    if (unitsPurchased >= 50 && unitsPurchased <= 99)
        {
            cout << "-------------------------------------------------------------------------------" << endl;
            //Let's the user know their discount
            cout << "Discount: 40% \n";
            unitsSubTotal = unitsPurchased * packagePrice;
            discountAmt = unitsSubTotal * discountThree;
            unitsTotal = unitsSubTotal - discountAmt;
        }
    //Calculates the total for
    //purchases of between 100 
    //or more units
    if (unitsPurchased >= 100)
        {
            cout << "-------------------------------------------------------------------------------" << endl;
            //Let's the user know their discount
            cout << "Discount: 50% \n";
            unitsSubTotal = unitsPurchased * packagePrice;
            discountAmt = unitsSubTotal * discountFour;
            unitsTotal = unitsSubTotal - discountAmt;
        }
    
    //RESULTS
    //Prints the subtotal to the user 
    cout << "Subtotal: $" << unitsSubTotal << endl;
    //Prints the amount saved, from the
    //discount, to the user
    cout << "Amount Saved: $" << discountAmt << endl;
    //Line printed to separate inputs from output results
    cout << "-------------------------------------------------------------------------------" << endl;
    //Manipulates the value to 2 spaces after the decimal point
    //of the total value
    cout << fixed << showpoint << "Total: $" << setprecision(2) << unitsTotal << endl;
    return 0;
}