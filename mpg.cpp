//milespergallon.cpp
//This program will  calculates a car’s gas mileage
//Needed to do C++ I/O
#include <iostream>  
//Needed by some compilers to use strings
#include <string>       
//Needed by some compilers to perform decimal manipulation
#include <iomanip>
using namespace std;    

int main()      
{
    //declares the number of gallons as a float for future use in calculations
    float numOfGals;   
    //declares the number of miles on one tank as a float for future use in calculations
    float milesPerTank;        
    
    cout << "-------------------------------------------------------------------------------" << endl;
    //Let's the user know what this program will do.
    cout << "Welcome to the Mileage Calculator!\n";       
    //Separates the title from the input coding 
    cout << "-------------------------------------------------------------------------------" << endl;
    
     //Gets the user's car's gallons in one tank
    cout << "Please enter the amount of gallons your car can hold: ";      
    cin >> numOfGals;
    //Checks if the user entered a valid integer
    //and not a character or string
    while (!cin || numOfGals < 0) 
    {
        cout << "Error! Enter a valid amount: " ;
        //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that could've caused the read failure
        cin.ignore(1000,'\n');
        cin >> numOfGals;
    }
    
    //Gets the user's car's amount of miles driven on one tank
    cout << "Please enter the amount of miles your car can travel on a full tank: ";     
    cin >> milesPerTank;
    //Checks if the user entered a valid integer
    //and not a character or string
    while (!cin || milesPerTank < 0) 
    {
        cout << "Error! Enter a valid amount: " ;
        //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that could've caused the read failure
        cin.ignore(1000,'\n');
        cin >> milesPerTank;
    }
    
    //calculates the milage
    float mileage = milesPerTank/numOfGals;                                         
   
    //Prints a line on the output screen 
    cout << "-------------------------------------------------------------------------------" << endl;
    //Prints all the user inputs and the results for the user, onto the screen
    cout << "Gallons per tank: " << numOfGals << endl;                     
    cout << "Miles per tank: " << milesPerTank << endl;
    cout << fixed << showpoint << "Car Mileage: " << setprecision(2) << mileage << endl;
    
    //Returns zero to main function
    return 0;
}   