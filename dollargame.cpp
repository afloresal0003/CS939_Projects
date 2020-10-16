//dollargame.cpp
//This program is a change-counting game
//Needed to do C++ I/O
#include <iostream> 
using namespace std;    
int main()  
{
    //Declares the appropiate constant value to each coin 
    const float pennyVal = 0.01,
                nickelVal = 0.05,
                dimeVal = 0.10,
                quarterVal = 0.25;
    
    //Declares the variables to hold the amount of each coin 
    double amtOfPens,
           amtOfNicks,
           amtOfDimes,
           amtOfQuarts;
    
    //TITLE and intro to game
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "                         Welcome to the Dollar Game!\n";

    //RULES of the game
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "RULES: \n";
    cout << "Enter what coins to use and how many of each, to make exactly one dollar.\n";
    cout << "If you get to one dollar, you win!\n";
    cout << "*Enter positive INTEGERS ONLY!*\n";
    
    //BEGINNING of the game 
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "Let's Begin... \n";
   
    //RECEIVING and CHECKING inputs from the user 
    //Recieves the amount of pennies from the user 
    cout << "Enter the amount of pennies: ";                                                                    
    cin >> amtOfPens;
    //Checks if the user entered a valid integer
    //and not a character or string
    while (!cin || amtOfPens < 0) 
    {
        cout << "Error! Enter a valid amount: " ;
        //Helps in clearing the error flags which are
        //set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that
        //could've caused the read failure
        cin.ignore(256,'\n');
        cin >> amtOfPens;
    }
    //Calculates total value made from pennies
    float totalPenVal = amtOfPens * pennyVal;  
    
    
    //Recieves the amount of nickels from the user
    cout << "Enter the amount of nickels: ";                                                                    
    cin >> amtOfNicks;
    //Checks if the user entered a valid integer
    //and not a character or string
    while (!cin || amtOfNicks < 0) 
    {
        cout << "Error! Enter a valid amount: " ;
        //Helps in clearing the error flags which
        //are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents
        //that could've caused the read failure
        cin.ignore(256,'\n');
        cin >> amtOfNicks;
    }
        //Calculates total value made from nickels
    float totalNickVal = amtOfNicks * nickelVal;
    
    
    //Recieves the amount of dimes from the user
    cout << "Enter the amount of dimes: ";                                                                      
    cin >> amtOfDimes;
    //Checks if the user entered a valid integer
    //and not a character or string
    while (!cin || amtOfDimes < 0) 
    {
        cout << "Error! Enter a valid amount: " ;
        //Helps in clearing the error flags which
        //are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents
        //that could've caused the read failure
        cin.ignore(256,'\n');
        cin >> amtOfDimes;
    }
        //Calculates total value made from dimes
    float totalDimeVal = amtOfDimes * dimeVal;
    
    
    //Recieves the amount of dimes from the user
    cout << "Enter the amount of quarters: ";
    cin >> amtOfQuarts;
    //Checks if the user entered a valid integer
    //and not a character or string
    while (!cin || amtOfQuarts < 0) 
    {
        cout << "Error! Enter a valid amount: " ;
        //Helps in clearing the error flags which are 
        //set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that 
        //could've caused the read failure
        cin.ignore(256,'\n');
        cin >> amtOfQuarts;
    }
        //Calculates total value made from quarters
    float totalQuartVal = amtOfQuarts * quarterVal;
    
    //USER-VALUE SUM
    //Adds up all the coins' totals to 
    //get the complete total of all the coins.  
    float sumOfCoins = totalPenVal + totalNickVal + totalDimeVal + totalQuartVal;
    
    
    //Line printed to separate inputs from output results
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "                                   RESULTS: \n";
    cout << "--------------------------------------------------------------------------" << endl;
    
    //WINNING RESULTS 
    //Checks to see if their combination's sum is equal to a dollar
    if (sumOfCoins == 1.00)
    {
        //If it is equal to a dollar, the user wins the game
        cout << "You reached a dollar!" << endl;
        cout << "\nCongratulations! You Win!  " << endl;
        
    }
    //LOSING RESULTS
    //Checks to see if their combination's sum is over a dollar 
    else if (sumOfCoins >= 1.00)
    {
        //If it is over a dollar, the user loses the game
        cout << "Oh No! You went OVER a dollar!  " << endl;
        cout << "Try again!" << endl;
    }
    //Checks to see if their combination's sum is under a dollar
    else if (sumOfCoins <= 1.00)
    {
        //If it is under a dollar, the user loses the game
        cout << "Oh No! You're SHORT of a dollar!  " << endl;
        cout << "Try again!" << endl;
    }
    //Returns 0 to the main function
    return 0;
}