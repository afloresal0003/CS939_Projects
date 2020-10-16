//rainOrShine.cpp
//This programs calculates and displays the weather report
//for the months of June, July, and August using an external 
//data file
#include <iostream>
#include <string>
#include <fstream>

//Defines variable NUM_MONTH as having a value of 3
#define NUM_MONTH 3
//Defines variable NUM_DAY as having a value of 30
#define NUM_DAY 30

using namespace std;

// Function without a return value that reads the weather data from
// the data file 
void readDataFile(char data[NUM_MONTH][NUM_DAY], string fileName) 
{
    //Opens stream for data file
    ifstream infile(fileName);
    //Loop that transfers data from 
    //the data file into arrays
    for (int i=0; i<NUM_MONTH; i++) 
    {
        for (int j=0; j<NUM_DAY; j++) 
        {
            infile >> data[i][j];
        }
    }
    //Closes the data file stream
    infile.close();
}

// Function that counts how many of a specific weather condition
// is in each month
int weatherNumInMonth(char data[NUM_DAY], char weather) {
    int numOfWeather = 0;
    for (int i=0; i<NUM_DAY; i++) {
        if (data[i] == weather) {
            numOfWeather++;
        }
    }
    //Returns the value to main function
    return numOfWeather;
}

int main() 
{
    //TITLE of program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                     Welcome to the Weather Condition Tracker! " << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "RULES: " << endl;
    cout << "The weather conditions for the days within june, july, " << endl;
    cout << "and august will be displayed. Then, the total amount of " << endl;
    cout << "each type of weather condition will be displayed. " << endl;
    //BEGINNING of the program 
    //Initializes array of data
    char data[NUM_MONTH][NUM_DAY] = {0};
    //Calls function to read the data file
    readDataFile(data, "RainOrShine.dat");
    //Initializes an array of the names of the 3 months
    string monthNames[3] = {"JUNE", "JULY", "AUGUST"};
    
    //Initializes all variables that will be used
    int totalRainyDays = 0;
    int totalCloudyDays = 0;
    int totalSunnyDays = 0;
    //Loop that displays the weather report
    //for each month.
    for (int i=0; i<NUM_MONTH; i++) 
    {
        //Stores the amount of each weather condition
        //into variables in order to display it
        int numOfRainy = weatherNumInMonth(data[i], 'R');
        int numOfCloudy = weatherNumInMonth(data[i], 'C');
        int numOfSunny = weatherNumInMonth(data[i], 'S');
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << monthNames[i] << " WEATHER REPORT: \n" << numOfRainy << " Rainy Days \n" << numOfCloudy << " Cloudy Days \n" << numOfSunny << " Sunny Days\n";
        
        //Incrementation
        totalRainyDays += numOfRainy;
        totalCloudyDays += numOfCloudy;
        totalSunnyDays += numOfSunny;
    }
    //Displays total amount of weather conditions 
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "WEATHER CONDITIONS TOTAL: \n" << totalRainyDays << " Rainy Days \n" << totalCloudyDays << " Cloudy Days \n" << totalSunnyDays << " Sunny Days " << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    return 0;
}