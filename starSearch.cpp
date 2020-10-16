//starSearch.cpp
//This program calculate a contestant’s score based on
//scores from five judges, where the highest and lowest
//are dropped.
#include <iostream>
#include <iomanip>
using namespace std;
//Function that asks the user to enter the judge’s
//score and validates each score, passing the score
//back to the function that called it, by reference.
void getJudgeData(double &judgeScore)
{
    //Asks the user for the judge’s score
    cout << "Please enter the judge's score: ";
    //stores the score in the reference parameter
    //variable “judgeScore”
    cin >> judgeScore;
    //Validator
    while (!cin || judgeScore < 0 || judgeScore > 10) 
    {
        //Prompts the user to enter a valid score
        cout << "Error! Enter a valid score(0-10): " ;
        //Helps in clearing the error flags which are set when std::cin fails to interpret the input.
        cin.clear();
        //Helps in removing the input contents that could've caused the read failure
        cin.ignore(1000,'\n');
        cin >> judgeScore;
    }
}
 //Function that determines the lowest score to drop
 //from the set of 5 via comparing the scores to the
 //current lowest value while the function runs.

 //If one score is less than the lowest current value
 //(”lowest”), it becomes the lowest value.
 int findLowest(double judgeScore1, double judgeScore2, double judgeScore3, double judgeScore4, double judgeScore5)
 {
    //Sets the lowest as 11, to ensure
    //the first score is the initial
    //lowest value since any score the
    //user inputs is less than 11
    int lowest = 11;
    if(lowest > judgeScore1)
    {
        lowest = judgeScore1;
    }
    if(lowest > judgeScore2)
    {
        lowest = judgeScore2;
    }
    if(lowest > judgeScore3)
    {
        lowest = judgeScore3;
    }
    if(lowest > judgeScore4)
    {
        lowest = judgeScore4;
    }
    if(lowest > judgeScore5)
    {
        lowest = judgeScore5;
    }
    //Returns the lowest score to the function
    //that called it 
    return lowest;
 }
//Function that determines the highest score to drop
//from the set of 5 via comparing the scores to the
//current highest value while the function runs.

//If one score is greater than the highest current value
//(”highest”), it becomes the highest value.
int findHighest(double Score1, double Score2, double Score3, double Score4, double Score5)
{
    double highest = 0;
    if(highest < Score1)
    {
        highest = Score1;
    }
    if(highest < Score2)
    {
        highest = Score2;
    }
    if(highest < Score3)
    {
        highest = Score3;
    }
    if(highest < Score4)
    {
        highest = Score4;
    }
    if(highest < Score5)
    {
        highest = Score5;
    }
    //Returns the highest value to
    //the function that called it
    return highest;
}
//Function that calculates the average score,
//after the lowest and highest score have been 
//dropped, and displays it to the user along 
//with what scores were dropped. 
void calcScore(double judgeScoreOne, double judgeScoreTwo, double judgeScoreThree, double judgeScoreFour, double judgeScoreFive)
{
    //Calls the findLowest function to retrieve the
    //lowest score, and stores it into “lowestScore”
    double lowestScore = findLowest(judgeScoreOne, judgeScoreTwo, judgeScoreThree, judgeScoreFour, judgeScoreFive);
    //Calls the findHighest function to retrieve the
    //highest score, and stores it into “highestScore”
    double highestScore = findHighest(judgeScoreOne, judgeScoreTwo, judgeScoreThree, judgeScoreFour, judgeScoreFive);
    //Calculates the average score, ensuring to drop
    //the highest and lowest score (by subtracting them
    //from the scores’ sum) and storing the final sum
    //into “averageJudgeScore”
    double averageJudgeScore = ((judgeScoreOne + judgeScoreTwo + judgeScoreThree + judgeScoreFour + judgeScoreFive) - (lowestScore + highestScore)) / 3;
    
    //RESULTS
    //Line printed to separate inputs from output results
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "RESULTS: " << endl;
    //Displays the lowest score that was dropped
    cout << "Lowest Dropped Score: " << lowestScore << endl;
    //Displays the highest score that was dropped
    cout << "Highest Dropped Score: " << highestScore << endl;
    //Displays the average judge score, from the 
    //three remaining scores.
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << fixed << showpoint << "                          Average Judge Score: " << setprecision(1) << averageJudgeScore << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
}

int main()
{
    //TITLE and intro to program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                           Welcome to Star Search!" << endl;
    //DESCRIPTION of program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "REGULATIONS: " << endl;
    cout << "Enter the FIVE judges’ scores." << endl;
    cout << "The lowest and highest score will be dropped!" << endl;
    cout << "The average score will be calculated using the remaining scores (3)." << endl;
    cout << "Scores must be out of 10!\n";
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                       *Enter positive INTEGERS ONLY!*\n";
    
    //BEGINNING of the program 
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "PROCESS: " << endl;
    double judgeOne = 0;
    getJudgeData(judgeOne);
    double judgeTwo = 0;
    getJudgeData(judgeTwo);
    double judgeThree = 0;
    getJudgeData(judgeThree);
    double judgeFour = 0;
    getJudgeData(judgeFour);
    double judgeFive = 0;
    getJudgeData(judgeFive);
    calcScore(judgeOne, judgeTwo, judgeThree, judgeFour, judgeFive);
}