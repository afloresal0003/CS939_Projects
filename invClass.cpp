// invClass.cpp
// This program stores inventory item numbers, quantity, and cost
// then displays the total cost of the transaction
#include "inv.cpp" 
#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    //TITLE and intro to program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                        Welcome to the Inventory Class!" << endl;
    //DESCRIPTION of program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "REGULATIONS: " << endl;
    cout << "This program holds the information for an item in a retail store’s inventory." << endl;
    cout << "Enter your item’s information such as the item number, item quantity, and " << endl;
    cout << "item‘s cost." << endl;
    cout << "The program will calculate the total cost." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                     *Please enter positive numbers only!*" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    
    //BEGINNING of the program 
    cout << "PROCESS: " << endl;
    //Declares variables for inventory number, quantity, cost
    //within the main function
    int itemNumber;  
    int quantity;
    double cost;
    double totalCost;
    
    //Creates an Inventory object using the default constructor
    Inventory();       
    {
        double itemNumber = 0;
        double quantity = 0;
        double cost = 0;
        double totalCost = 0;
    }
        //Collects and validates the item number
        cout << "Please enter the item number: ";	
        cin >> itemNumber;
        while (itemNumber < 0 || !cin)
        {
            cout << "Error. Please enter a positive value for the item number: ";
            cin >> itemNumber;
        }
        //Collects and validates the item quantity
        cout << "Please enter the item quantity: "; 
        cin >> quantity;
        while (quantity < 0 || !cin)
        {
            cout << "Error. Please enter a positive value for the quantity: ";
            cin >> quantity;
        }
        //Collects and validates the item cost
        cout << "Please enter the item cost: $"; 
        cin >> cost;
        while (cost < 0 || !cin) 
        {
            cout << "Error. Please enter a positive value for the cost: ";
            cin >> cost;
        }
        //Passes all user-collected data into an information object
        Inventory information(itemNumber, quantity, cost);
        
        totalCost = information.getTotalCost();
        //Changes the inventory number using the setItemNumber() member function
        itemNumber = information.getItemNumber();   
        //Changes the quantity using the setQuantity() member function
        quantity = information.getQuantity();    
        //Changes the cost using the setCost() member function
        cost = information.getCost();  
        
        //DISPLAY 
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "                               Transaction Summary" << endl;   
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "Item Number: " << itemNumber << endl;
        cout << "Item Quantity: " << quantity << endl;
        cout << "Item Cost: " << cost << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
        // Displays the total cost with value two decimal spaces after the zero
        cout << fixed << showpoint << "Total Cost: $" << setprecision(2) << totalCost << endl;  
        cout << "--------------------------------------------------------------------------------" << endl;
        
        return 0;
    }