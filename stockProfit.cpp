//stockProfit.cpp
//This program calculates the average of a group of test scores, 
//where the lowest score in the group is dropped.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//Function that is passed the number of shares,
//sale price per share, sale commission paid,
//purchase price per share, and purchase 
//commission paid from the main function,
//calculates the profit, and returns it back to
//the main function.
double getprofit(double numberOfShares, double saleSharePrice, double saleShareCommission, double stockPurchasePrice, double stockPurchaseCommission)
{
    //Calculates the profit using the passed data, and
    //stores it into “profit”
    double profit = ((numberOfShares * saleSharePrice) - saleShareCommission) - ((numberOfShares * stockPurchasePrice) + stockPurchaseCommission);
    //Returns the profit, to the main function
    return profit;
}
//Main function
int main()
{
    //TITLE and intro to program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                   Welcome to the Stock Profit Calculator!" << endl;
    //DESCRIPTION of program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "REGULATIONS: " << endl;
    cout << "Enter the number of shares, sale price per share, sale commission paid,." << endl;
    cout << "purchase price per share, and purchase commission paid." << endl;
    cout << "The sale of stock’s yield and status will be prompted.\n";
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                       *Enter positive NUMBERS ONLY!*\n";
    
    //BEGINNING of the program 
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "PROCESS: " << endl;
    //Initializes the variables that will hold
    //the user’s data.
    double numOfShares,
           salePrice,
           saleCommission,
           purchasePrice,
           purchaseCommission;
    //Prompts the user to enter the number of
    //shares the stock had
    cout << "Please enter the number of shares of the stock: ";
    //Stores it into “numOfShares”
    cin >> numOfShares;
    //Validator (Ensures a number value that’s
    //greater than zero)
    while (!cin || numOfShares < 0) 
    {
        cout << "Error! Enter a valid amount: " ;
        //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that could've caused the read failure
        cin.ignore(1000,'\n');
        cin >> numOfShares;
    }
    //Prompts the user to enter the sale price
    //per share.
    cout << "Please enter the sale price per share: $ ";
    //Stores it into “salePrice”
    cin >> salePrice;
    //Validator (Ensures a number value that’s
    //greater than zero)
    while (!cin || salePrice < 0) 
    {
        cout << "Error! Enter a valid price: " ;
        //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that could've caused the read failure
        cin.ignore(1000,'\n');
        cin >> salePrice;
    }
    //Prompts the user to enter the sale commission paid
    cout << "Please enter the sale commission paid: $";
    //Stores it into ”saleCommission”
    cin >> saleCommission;
    //Validator (Ensures a number value that’s
    //greater than zero)
    while (!cin || saleCommission < 0) 
    {
        cout << "Error! Enter a valid amount: " ;
        //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that could've caused the read failure
        cin.ignore(1000,'\n');
        cin >> saleCommission;
    }
    //Prompts the user to enter the purchase price per share
    cout << "Please enter the purchase price per share: $";
    //Stores it into ‘purchasePrice’
    cin >> purchasePrice;
    //Validator (Ensures a number value that’s
    //greater than zero)
    while (!cin || purchasePrice < 0) 
    {
        cout << "Error! Enter a valid price: " ;
        //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that could've caused the read failure
        cin.ignore(1000,'\n');
        cin >> purchasePrice;
    }
    //Prompts the user to enter the purchase commission paid
    cout << "Please enter the purchase commission paid: $";
    //Stores it into “purchaseCommission”
    cin >> purchaseCommission;
    //Validator (Ensures a number value that’s
    //greater than zero)
    while (!cin || purchaseCommission < 0) 
    {
        cout << "Error! Enter a valid amount: " ;
        //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that could've caused the read failure
        cin.ignore(1000,'\n');
        cin >> purchaseCommission;
    }
    //Calls the getProfit function, passes the user‘s data,
    //and stores the returned profit into “stockYield”
    double stockYield = getprofit(numOfShares, salePrice, saleCommission, purchasePrice, purchaseCommission);
    //RESULTS
    //Line printed to separate inputs from output results
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "RESULTS: " << endl;
    //Checks if the stockYield was negative (less than zero)...
    if (stockYield < 0)
    {
        //...if it is, the stock sale status is displayed as
        //a loss, to the user, along with the stock’s yield. 
        stockYield = stockYield * -1;
        cout << "Stock Sale Status: Loss " << endl;
        cout << fixed << showpoint << "Stock Sale Yield: -$" << setprecision(2) << stockYield << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
    }
    //If the stockYield isn’t negative, then it’s automatically
    //positive and thus...
    else
    {
        //the stock sale status is displayed as a profit
        //to the user, along with the stock’s yield
        cout << "Stock Sale Status: Profit" << endl;
        cout << fixed << showpoint << "Stock Sale Yield: +$" << setprecision(2) << stockYield << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
    }
}