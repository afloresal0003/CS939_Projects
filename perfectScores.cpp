// perfectScores.cpp
// This program asks for 20 scores, stores them in an array, 
// and checks to see how many perfect scores there were (scores of 100)
#include <iostream>
#include <string>
using namespace std;

// Validator that checks to see if inputs are
// integers less than 100, and greater than -1
int scoreValidator() 
{
    int score;
    cin >> score;
    while (!cin || score < 0 || score > 100) 
    {
        cout << "Error! Enter a valid amount: $" ;
        //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that could've caused the read failure
        cin.ignore(1000,'\n');
        cin >> score;
    }
    //Returns score value to the function that called it
    return score;
}
// Function that counts how many scores are 
// perfect(equal to 100)
int perfectScoreCounter(int testScores[], const int numOfScores) 
{
    int numOfPerfects = 0;
    //For loop that runs through the function
    //and searches for perfect scores
    for (int i = 0; i < numOfScores; i++) 
    {
        if (testScores[i] == 100) 
        {
            numOfPerfects++;
        }
    }
    return numOfPerfects;
}

// MAIN Function
int main() {
    
    //TITLE of program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                   Welcome to the Perfect Scores Counter!" << endl;
    //DESCRIPTION of program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "RULES: " << endl;
    cout << "Enter 20 test scores." << endl;
    cout << "The amount of perfect test scores will be displayed!\n";
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                            *Enter positive INTEGERS ONLY!*\n";
    //BEGINNING of the program 
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "PROCESS: " << endl;
    //Initializes variable that will represent the
    //size of the array of scores
    const int NUM_SCORES = 20;
    // Initializes the arry of test scores
    // to contain zeros 
    int testScores[NUM_SCORES] = {}; 
    //For loop that prompts the user to enter
    //the test scores and calls the validator
    //to ensure the inputs are valid
    for (int &score: testScores) 
    {
        cout << "Enter test score: ";
        score = scoreValidator();
    }
    
    // DISPLAY 
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                                   REPORT" << endl;   
    cout << "--------------------------------------------------------------------------------" << endl;
    // Displays the amount of perfect scores from
    // the scores entered by the user
    cout << "Number of perfect scores: " << perfectScoreCounter(testScores, NUM_SCORES) << endl;
    // Returns ZERO to main function which 
    // terminates the program
    return 0;
}