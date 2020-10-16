#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct SalesData
{
    string divisionName;       /* The division names             */
    double quarters[4];        /* Array for quaterly sales     */
    double total;                /* Sales total                         */
    double avgQtr;                /* The average quarterly sales */
};

void getSalesData(SalesData [], const int);
void getSalesResult(SalesData [], const int);
void displaySalesData(const SalesData [], const int);

int main()
{
    const int NUM_BRANCHES = 4;        /* Number of branches */

    /* Array of structures initialized with names,
        assigned to the 'divisionName' structure member. */
    SalesData divisions[NUM_BRANCHES] = { { "NORTH BRANCH" }, 
                                          { "SOUTH BRANCH" }, 
                                          { "EAST BRANCH"  }, 
                                          { "WEST BRANCH"  } };

    getSalesData(divisions, NUM_BRANCHES);
    getSalesResult(divisions, NUM_BRANCHES);
    displaySalesData(divisions, NUM_BRANCHES);

  
   return 0;
}

/* **********************************************************
   Definition: getSalesData

    This function accepts a pointer to an array of structures 
    as argument. It asks for the sales data for each quarter, 
    for each of the four branches, North, South, East, and 
    West. The data is stored in the structure member.
   ********************************************************** */

void getSalesData(SalesData divisions[], const int NUM_BRANCHES)
{
    int qtrs = 0;   
    int index = 0;       

    cout << "\n\tISHIKAWA FRUIT COMPANY SALES DATA SYSTEM\n";

    for (index = 0; index < NUM_BRANCHES; index++)
    {
        cout << "\n\tEnter sales for "
              << divisions[index].divisionName << "\n\n";

        for (qtrs = 0; qtrs < NUM_BRANCHES; qtrs++)
        {
            cout << "\tQuarter " << (qtrs + 1) << ":  $ ";
            cin >> divisions[index].quarters[qtrs];

            /* The input is validated in this loop */
            while (divisions[index].quarters[qtrs] <= 0.0)
            {
                cout << "\n\tInvalid input: The sales amount must be "
                      << "positive.\n"
                      << "\tPlease repeat your input.\n\n"
                     << "\tQuarter " << (qtrs + 1) << ":  $ ";
                cin >> divisions[index].quarters[qtrs];
            }
        }   
    }
}

/* **********************************************************
   Definition: getSalesResult

    This function uses two structure variables as parameters.
    It calculates the sales total and average quaterly sales
    for each of the four branches. The results are stored in 
    the members of each structure variable.
   ********************************************************** */

void getSalesResult(SalesData divisions[], const int NUM_BRANCHES)
{
    int index = 0;
    int qtrs = 0;

    for (index = 0; index < NUM_BRANCHES; index++)
    {
        for (qtrs = 0; qtrs < 4; qtrs++)
        {
            /* Calculate the sales total*/
            divisions[index].total += divisions[index].quarters[qtrs];
        }

        /* Calculate the quarterly average sales */
        divisions[index].avgQtr = divisions[index].total / 4.0;
    }   
}

/* **********************************************************
   Definition: displayData

    This function accepts an array of structs as argument. It
    displays the sales total and quarterly average achieved by
    each of the four branches.
   ********************************************************** */

void displaySalesData(const SalesData division[], const int NUM_BRANCHES)
{
    cout << "\n\n\n\tISHIKAWA FRUIT COMPANY ANNUAL SALES REPORT\n\n";

    for (int index = 0; index < NUM_BRANCHES; index++)
    {
        cout << fixed << showpoint << setprecision(2) << "\n\t";
        cout << division[index].divisionName 
              << "\n\n\tSales Total:"        << setw(9)    << "$ " 
              << division[index].total       << setw(25) << right 
             << "\n\tQuarterly Average:"    << setw(2)    << "$"   
                                                    << setw(10) << right
              <<  division[index].avgQtr << "\n";
    }
}