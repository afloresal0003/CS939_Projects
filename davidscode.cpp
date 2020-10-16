#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    ofstream outputFile;
    int numberOfDays;
    double sales;
    
    
    
    cout << "For how many days do you have sales?: ";
    cin >> numberOfDays;
    //To place data into a file do
    //outputFile.open and the name of the file
    //in parenthesis 
    outputFile.open("Sales.txt");
    
    
    
    for (int count = 1; count <= numberOfDays; count++)
    {
        cout << "Enter the sales day: " << count;
        outputFile >> sales;
       cout << sales << endl;
    }

    outputFile.close();
    
    
    cout << "\n Data written into file \n ";
    return 0;
}