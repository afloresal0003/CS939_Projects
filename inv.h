// Prototypes/Headers of all functions and private member
// variables within the class, to let the compiler know 
// of the functions and variables being used
class Inventory
{
    //Private member variables that will be used
private:
    int _itemNumber;
    int _quantity;
    double _cost;
    double _totalCost;
    
public:
    //Default constructor 
    Inventory();
    //Constructor #2
    Inventory(int newItemNumber, int newQuantity, double newCost);
    //Class functions
    void setItemNumber(int);
    void setQuantity(int);
    void setCost(double);
    void setTotalCost(int, double);
    
    int getItemNumber();
    int getQuantity();
    double getCost();
    double getTotalCost();
};