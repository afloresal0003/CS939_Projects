//savingsacc.cpp
//This program is a savings account balance calculator. 
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    //Declare all the variables
    //that will be used to hold
    //data
    double totalIntAmt = 0,
         totalWithdraw = 0,
         totalDeposits = 0,
         startBalance,
         initialBalance,
         endBalance = 0,
         monthDeposit,
         monthWithdraw,
         monthlyIntRate;
    double annualIntRate;
    
    //TITLE and intro to program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                   Welcome to the Savings Account Calculator!" << endl;
    //DESCRIPTION of program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "REGULATIONS: " << endl;
    cout << "This program calculates the balance of a savings account at the end of a three " << endl;
    cout << "month period." << endl;
    cout << "Enter your initial balance first." << endl;
    cout << "Then, enter your annual interest rate percentage." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                     *Please enter positive integers only!*" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    
    //BEGINNING of the program 
    cout << "PROCESS: " << endl;
    //Asks for the starting balance
    cout << "Enter your initial balance: $";
    cin >> startBalance;
    //VALIDATES user input
    //(Ensures they didn't enter a character
    //or negative number)
    while (!cin || startBalance < 0) 
    {
        cout << "Error! Enter a valid amount: $" ;
        //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that could've caused the read failure
        cin.ignore(1000,'\n');
        cin >> startBalance;
    }
    //Allows for displayal of the starting balance
    initialBalance = startBalance;
    //Asks for annual interest rate
    cout << "Enter the annual interest rate: ";
    cin >> annualIntRate;
    //VALIDATES user input
    //(Ensures they didn't enter a character
    //or negative number)
    while (!cin || annualIntRate < 0) 
    {
        cout << "Error! Enter a valid amount: " ;
        //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that could've caused the read failure
        cin.ignore(1000,'\n');
        cin >> annualIntRate;
    }
    //Calculates the monthly interest rate
    monthlyIntRate = (annualIntRate / 12);
    
    //BODY OF PROGRAM
    //Continously asks the user for the 
    //deposits and withdraws made each month
    for (int count = 1; count <= 3; count++)
    {
        //Asks for deposit totals
        cout << "\nEnter month " << count << "'s total amount deposited: $";
        cin >> monthDeposit;
        //VALIDATES user input
        //(Ensures they didn't enter a character
        //or negative number)
        while (!cin || monthDeposit < 0) 
        {
            cout << "Error! Enter a valid amount: " ;
            //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
            cin.clear();
            //Helps in removing the input contents that could've caused the read failure
            cin.ignore(1000,'\n');
            cin >> monthDeposit;
        }
        //Calculates the Pre-Balance
        //(BEFORE WITHDRAWALS)
        endBalance = startBalance + monthDeposit;
        //Asks for withdraw totals
        cout << "Enter month " << count << "'s total amount withdrawn: $";
        cin >> monthWithdraw;
        //VALIDATES user input
        //(Ensures they didn't enter a character
        //or negative number)
        while (!cin || monthWithdraw < 0) 
        {
            cout << "Error! Enter a valid amount: " ;
            //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
            cin.clear();
            //Helps in removing the input contents that could've caused the read failure
            cin.ignore(1000,'\n');
            cin >> monthWithdraw;
        }
        //Calculates subtotal end balance for 
        //that particular month (BEFORE INTEREST)
        endBalance = endBalance - monthWithdraw;
        //Calculates the average monthly balance
        //for that particular month
        double avgMonthBal = ((endBalance + startBalance) / 2);
        //Calculates the interest for that month
        double monthIntAmt = (avgMonthBal * monthlyIntRate);
        //Calculates the full total end balance for
        //that particular month
        cout << fixed << showpoint << "Month " << count << "’s Interest: $" << setprecision(2) <<  monthIntAmt << endl;
        endBalance = (endBalance + monthIntAmt);
        //Sets a new starting balance for the
        //following month (previous end balance)
        startBalance = endBalance;
        //Continuously adds up all the deposits
        //made for all three months
        totalDeposits = totalDeposits + monthDeposit;
        //Continuously adds up all the withrdraws
        //made for all three months
        totalWithdraw = totalWithdraw + monthWithdraw;
        //Continuously adds up all the interest 
        //made for all three months
        totalIntAmt = totalIntAmt + monthIntAmt;
        
    //RESULTS FOR REPORT
    }    
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                           THREE-MONTH FINANCIAL REPORT: " << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "RESULTS: " << endl;
    cout << "Initial Balance: $" << initialBalance << endl;
    cout << "Total Amount Deposited: $" << totalDeposits << endl;
    cout << "Total Amount Withdrawn: $" << totalWithdraw << endl;
    cout << fixed << showpoint << "Total Interest Amount: $" << setprecision(2) << totalIntAmt << endl;
    cout << "Final Balance: $" << endBalance << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "STATUS: " << endl;
    //Classifies if there was an increase,
    //decrease, or no change in the 
    //savings account balance
    
    //INCREASED BALANCE
    if (endBalance > initialBalance)
    {
        //Calculates difference
        endBalance = endBalance - initialBalance;
        cout << "Balance Status: Increase" << endl;
        cout << "Amount: +$" << endBalance << endl;
    }
    //NO CHANGE BALANCE
    else if (endBalance == initialBalance)
    {
        cout << "Balance Status: No Change" << endl;
    }
    //DECREASED BALANCE
    else if (endBalance < initialBalance)
    {
        //Calculates difference
        endBalance = ((endBalance - initialBalance) * -1);
        cout << "Balance Status: Decrease" << endl;
        cout << "Amount: -$" << endBalance << endl;
    }
    //CLOSING 
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                                HAVE A NICE DAY! " << endl;
    cout << "--------------------------------------------------------------------------------" << endl;

    return 0;
    
    
}