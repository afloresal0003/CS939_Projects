//lowestScoreDrop.cpp
//This program  calculates the average of a group of test scores, 
//where the lowest score in the group is dropped.
#include <iostream>
#include <iomanip>
using namespace std;
//Function that asks the user to enter 5 test scores
//and validates each score. 
void getScore(double &score)
{
    //Asks the user to enter a test score
    cout << "Please enter a test score: ";
    //Stores the score into the reference parameter 
    //variable “score”.
    cin >> score;
    //Validator (Ensurs an integer score that‘s greater
    //than zero and less than 100)
    while (!cin || score < 0 || score > 100) 
    {
        //Prompts the user to enter a valid score
        cout << "Error! Enter a valid score(0-100): " ;
        //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that could've caused the read failure
        cin.ignore(1000,'\n');
        cin >> score;
    }
}
//Function that determines the lowest score to drop
//from the set of 5 via comparing the scores to the
//current lowest value while the function runs.

//If one score is less than the lowest current value
//(”lowest”, it becomes the lowest value.
int findLowest(int score1, int score2, int score3, int score4, int score5)
{
    //Sets the lowest as 101, to ensure
    //the first score is the initial
    //lowest value since any score the
    //user inputs is less than 101
    int lowest = 101;
    if(lowest > score1)
    {
        lowest = score1;
    }
    if(lowest > score2)
    {
        lowest = score2;
    }
    if(lowest > score3)
    {
        lowest = score3;
    }
    if(lowest > score4)
    {
        lowest = score4;
    }
    if(lowest > score5)
    {
        lowest = score5;
    }
    //Returns the lowest score to the function
    //that called it 
    return lowest;
}
//Function that calculates the average score,
//after the lowest score has been dropped, and
//displays it to the user along with what score
//was dropped. 
void calcAverage(double testScoreOne, double testScoreTwo, double testScoreThree, double testScoreFour, double testScoreFive)
{
    //Calls the findLowest function to retrieve the
    //lowest score, and stores it into “lowestScore”
    double lowestScore = findLowest(testScoreOne, testScoreTwo, testScoreThree, testScoreFour, testScoreFive);
    //Calculates the average score, ensuring to drop
    //the lowest score (by subtracting it from the 
    //scores’ sum) and stores it into “averageTestScore”
    double averageTestScore = (((testScoreOne + testScoreTwo + testScoreThree + testScoreFour + testScoreFive) - lowestScore) / 4);
    
    //RESULTS
    //Line printed to separate inputs from output results
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "RESULTS: " << endl;
    //Displays the score that was dropped
    cout << "Dropped Score: " << lowestScore << endl;
    //Displays the average test score, from the four
    //remaining scores.
    cout << fixed << showpoint << "Average Test Score: " << setprecision(1) << averageTestScore << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
}

//Main function
int main()
{
    //TITLE and intro to program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                   Welcome to the Average Score Calculator!" << endl;
    //DESCRIPTION of program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "REGULATIONS: " << endl;
    cout << "Enter FIVE test scores." << endl;
    cout << "The lowest score will be dropped!" << endl;
    cout << "The average score will be calculated using the remaining scores (4)." << endl;
    cout << "Test scores must be out of 100!\n";
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                       *Enter positive INTEGERS ONLY!*\n";
    
    //BEGINNING of the program 
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "PROCESS: " << endl;
    
    //Initializes all 5 variables that will
    //be used to store the user‘s score inputs
    //and calls the getScore function to retrieve
    //those scores. 
    
    //Inputted scores from the function, are passed
    //by reference and stored into variable that
    //was initialized before the function was called
    double scoreOne = 0;
    getScore(scoreOne);
    double scoreTwo = 0;
    getScore(scoreTwo);
    double scoreThree = 0;
    getScore(scoreThree);
    double scoreFour = 0;
    getScore(scoreFour);
    double scoreFive = 0;
    getScore(scoreFive);
    //Calls the calcAverage function and passes the
    //user’s scores to then calculate the average score
    calcAverage(scoreOne, scoreTwo, scoreThree, scoreFour, scoreFive);
}

