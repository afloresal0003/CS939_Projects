
using namespace std;
#include "inv.h"
//Declares an inventory object using the default constructor
Inventory::Inventory()     
    {
        _itemNumber = 0;
        _quantity = 0;
        _cost = 0;
        _totalCost = 0;
        
    }
// Creates an inventory object for the user information 
Inventory::Inventory(int newItemNumber, int newQuantity, double newCost) 
    {
        _itemNumber = newItemNumber;
        _quantity = newQuantity;
        _cost = newCost;
        setTotalCost(_quantity, _cost);
    }
// Sets all the user-entered values to 
// the private member variables
void Inventory::setItemNumber(int itemNumber)   
    {
        _itemNumber = itemNumber;
    }

void Inventory::setQuantity(int quantity)	
    {
        _quantity = quantity;
    }

void Inventory::setCost(double cost)  
    {
        _cost = cost;
    }
// Calculates the total cost and then assigns the total
// calculated cost to the private member variable of 
// total cost
void Inventory::setTotalCost(int quantity, double cost)
    {
        _totalCost = quantity * cost;
    }
// Returns the values within the private member 
// variables after the setters assign all the 
// values to them. (does this through ”getters”)
int Inventory::getItemNumber()
    {
        return _itemNumber;
    }
int Inventory::getQuantity()
    {
        return _quantity;
    }
double Inventory::getCost()
    {
        return _cost;
    }
double Inventory::getTotalCost()
    {
        return _totalCost;
    }
