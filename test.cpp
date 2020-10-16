//testaverage.cpp
//This program is a test scoring program 
//that displays the average score and letter grade
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    //Declares all variables
    //that will be used to hold
    //test scores and the initial
    //test score number.
    double amtOfTestScores,
           testScore;
    double scoreSum = 0;
    double testScoreNumber = 1;
    
    //TITLE and intro to program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                   Welcome to the Average Score Calculator!" << endl;
    //DESCRIPTION of program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Regulations: " << endl;
    cout << "Enter the amount test scores to determine the average score of those test scores." << endl;
    cout << "Test scores must be out of 100!\n";
    cout << "*Enter positive INTEGERS ONLY!*\n";
    
    //BEGINNING of the program 
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "PROCESS: " << endl;
    
    //RECEIVING AND VALIDATING INPUTS
    //Asks the user for the test scores 
    cout << "Enter the amount of test scores: ";
    cin >> amtOfTestScores;
    //Checks if the user entered a valid integer
    //and not a character or string
    while (!cin || amtOfTestScores < 0) 
    {
        cout << "Error! Enter a valid amount: " ;
        //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that could've caused the read failure
        cin.ignore(1000,'\n');
        cin >> amtOfTestScores;
    }
    //Asks for all the test scores until
    //it reaches the set limit of test scores
    while (testScoreNumber <= amtOfTestScores)
    {
        //Asks for test scores
        cout << "Enter Test Score " << testScoreNumber << ": ";
        cin >> testScore;
        //Checks if the user entered a valid integer
        //and not a character or string
        while (!cin || testScore < 0 || testScore > 100) 
            {
                cout << "Error! Enter a valid score: " ;
                //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
                cin.clear();
                //Helps in removing the input contents that could've caused the read failure
                cin.ignore(10000,'\n');
                cin >> testScore;
            }
        //Sums up all the scores,
        //as it continues to ask for them.
        scoreSum = scoreSum + testScore;
        testScoreNumber++;
    }
    //AVERAGE CALCULATIONS
    //Calculates the average score
    float averageScore = scoreSum/amtOfTestScores;
    
    //LETTER GRADE DETERMINATION
    //Categorizes the average test score
    //with a letter grade
    string letterGrade;
    if (averageScore <= 100 && averageScore >= 90)
    {
        letterGrade = "A";
        
    }
    if (averageScore <= 89 && averageScore >= 80)
    {
        letterGrade = "B";
    }
    if (averageScore <= 79 && averageScore >= 70)
    {
        letterGrade = "C";
    }
    if (averageScore <= 69 && averageScore >= 60)
    {
        letterGrade = "D";
    }
    if (averageScore <= 59)
    {
        letterGrade = "F";
    }
    //RESULTS
    //Line printed to separate inputs from output results
    cout << "-------------------------------------------------------------------------------" << endl;
    //Prints the averge test score to the user
    //Manipulates the value to 2 spaces after the decimal point 
    //of the average test score
    cout << fixed << showpoint << "                        Average Test Score: " << setprecision(2) << averageScore << "% " << letterGrade << endl;
    //Returns zero to main function
    return 0;
}