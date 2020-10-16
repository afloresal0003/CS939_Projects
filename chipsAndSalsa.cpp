//chipsAndSalsa.cpp
//This program obtains jar sales for each type of sauce
// and displays the sales for each sauce, total sales, 
// and which type of sauce grossed the most and least 
// amount of revenue
#include <string>
#include <iostream>

using namespace std;

int main() {
    //TITLE of program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                       Welcome to the Salsa Sales Tracker!" << endl;
    //DESCRIPTION of program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "RULES: " << endl;
    cout << "Enter the number of sold jars for each type of sauce." << endl;
    cout << "The amount of each type will be displayed as well as \n";
    cout << "the total sales and which type of sauce was the highest " << endl;
    cout << "and lowest sales contributor." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                        *Enter positive INTEGERS ONLY!*\n";
    //BEGINNING of the program 
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "PROCESS: " << endl;
    //Creates a constant integer variable that is assigned
    // the value of 5
    const int NUM_SALSAS = 5;
    // The previosuly defined constant integer variable 
    // is used to define how many elements are in the array
    // "names" which will hold the names of the salsas
    string salsaNames[NUM_SALSAS] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"}; 
    // {} Initializes int array to all zeros.
    int salsaSales[NUM_SALSAS] = {};
    // Loops through the array of names to ask the user for sales of each type
    // and stores the given sales into the sales array. 
    for (int i=0; i<NUM_SALSAS; i++) {
        cout << "Please enter the number of " << salsaNames[i] << " jars sold" << ": ";
        cin >> salsaSales[i];
    }
    cout << endl;
    // DISPLAY 
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                                   SALES REPORT" << endl;   
    cout << "--------------------------------------------------------------------------------" << endl;
    // initializes an integer variable sum to a value of zero
    int sum = 0;
    // Loops through the two arrays in order to display the 
    // name of the type of salsa and the corresponding sales value
    // while also incrementing the sum by each sales' value
    for (int i=0; i<NUM_SALSAS; i++) {
        cout << salsaNames[i] << " Sales: " << salsaSales[i] << endl;
        sum += salsaSales[i];
    }
    //Displays the total sales 
    cout << "\nTotal Sales: " << sum;
    //Initializes two integer variables as zero 
    int highestSalsaYield = 0;
    int lowestSalsaYield = 0;
    // Loops through the sales array in order to find the
    // highest and lowest grossing sales 
    for (int i=1; i<NUM_SALSAS; i++) {
        if (salsaSales[i] > salsaSales[highestSalsaYield]) {
            highestSalsaYield = i;
        }
        if (salsaSales[i] < salsaSales[lowestSalsaYield]) {
            lowestSalsaYield = i;
        }
    }
    cout << endl;
    //Displays the highest and lowest sales
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                                SALES CONTRIBUTERS" << endl;   
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Highest Yield Sauce: " << salsaNames[highestSalsaYield] << endl;
    cout << "Lowest Yield Sauce: " << salsaNames[lowestSalsaYield] << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    //Returns 0 to main function 
    return 0;
}