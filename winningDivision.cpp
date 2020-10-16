//lowestScoreDrop.cpp
//This program determines which of a company’s four divisions
//(Northeast, Southeast, Northwest, and Southwest) had the greatest sales for a quarter.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


//Function that is passed the divisions’ names,
//asks the user for the sales from each division, 
//validates it, and returns it to the main function.
double getSales(string divisionName)
{
    //Initializing the variable that will
    //store the users input (division sales)
    double quarterlySales;
    cout << "\nPlease enter the quarterly sales for the " << divisionName << " division: $";
    cin >> quarterlySales;
    //Validator (ensures number values that are
    //greater than zero)
    while (!cin || quarterlySales < 0) 
    {
        //Asks the user to enter a valid amount
        cout << "Error! Enter a valid amount: $" ;
        //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that could've caused the read failure
        cin.ignore(1000,'\n');
        cin >> quarterlySales;
    }
    //Returns the validated sales back to
    //the main function
    return quarterlySales;
}
//Function that is passed the divisions’ sale totals,
//determines which is the largest, and prints the name
//and sales figure of the highest grossing division.
void findHighest(double divisionOneSales, double divisionTwoSales, double divisionThreeSales, double divisionFourSales)
{
    //Compares all division sales to the Northeastern division
    //sales, to see if the Northeastern division yielded the 
    //biggest sales figure;
    if(divisionOneSales > divisionTwoSales && divisionOneSales > divisionThreeSales && divisionOneSales > divisionFourSales)
    {
        //RESULTS
        //Line printed to separate inputs from output results
        cout << "-------------------------------------------------------------------------------" << endl;
        cout << "RESULTS: " << endl;
        //If so, it is displayed to the user 
        cout << "Largest Yielding Division: Northeast" << endl;
        cout << fixed << showpoint << "Sales Figure: $" << setprecision(2) << divisionOneSales << endl;
       cout << "-------------------------------------------------------------------------------" << endl;
    }
    //Compares all division sales to the Northwestern division
    //sales, to see if the Northwestern division yielded the
    //biggest sales figure;
    if(divisionTwoSales > divisionOneSales && divisionTwoSales > divisionThreeSales && divisionTwoSales > divisionFourSales)
    {
        //RESULTS
        //Line printed to separate inputs from output results
        cout << "-------------------------------------------------------------------------------" << endl;
        cout << "RESULTS: " << endl;
        //If so, it is displayed to the user
        cout << "Largest Yielding Division: Northwest" << endl;
        cout << fixed << showpoint << "Sales Figure: $" << setprecision(2) << divisionTwoSales << endl;
        cout << "-------------------------------------------------------------------------------" << endl;
    }
    //Compares all division sales to the Southeastern division
    //sales, to see if the Southeastern division yielded the
    //biggest sales figure; 
    if(divisionThreeSales > divisionOneSales && divisionThreeSales > divisionTwoSales && divisionThreeSales > divisionFourSales) 
    {
        //RESULTS
        //Line printed to separate inputs from output results
        cout << "-------------------------------------------------------------------------------" << endl;
        cout << "RESULTS: " << endl;
        //If so, it is displayed to the user
        cout << "Largest Yielding Division: Southeast" << endl;
        cout << fixed << showpoint << "Sales Figure: $" << setprecision(2) << divisionThreeSales << endl;
        cout << "-------------------------------------------------------------------------------" << endl;
    }
    //Compares all division sales to the Southwestern division
    //sales, to see if the Southwestern division yielded the
    //biggest sales figure;
    if(divisionFourSales > divisionOneSales && divisionFourSales > divisionTwoSales && divisionFourSales > divisionThreeSales) 
    {
        //RESULTS
        //Line printed to separate inputs from output results
        cout << "-------------------------------------------------------------------------------" << endl;
        cout << "RESULTS: " << endl;
        //If so, it is displaued to the user
        cout << "Largest Yielding Division: Southwest" << endl;
        cout << fixed << showpoint << "Sales Figure: $" << setprecision(2) << divisionFourSales << endl;
        cout << "-------------------------------------------------------------------------------" << endl;
    }
    
}
//Main function
int main()
{
    //TITLE of program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                   Welcome to the Highest Grossing Division Calculator!" << endl;
    //DESCRIPTION of program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "RULES: " << endl;
    cout << "Enter the quarterly sales for the appropiate division.." << endl;
    cout << "Highest grossing division will be given!\n";
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                            *Enter positive INTEGERS ONLY!*\n";
    
    //BEGINNING of the program 
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "PROCESS: " << endl;
    //Initializing and calling the getSales function
    //to get the sales, for every division
    double northEastSales = getSales("Northeast");
    double northWestSales = getSales("Northwest");
    double southEastSales = getSales("Southeast");
    double southWestSales = getSales("Southwest");
    //Calls the findHighest function to find the highest
    //division sales using the sales data
    findHighest(northEastSales, northWestSales, southEastSales, southWestSales);
}