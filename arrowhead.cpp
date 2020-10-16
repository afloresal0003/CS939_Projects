//arrowhead.cpp
//This program is a program that 
//displays an arrow
//Needed to do C++ I/O
#include <iostream>
using namespace std;
int main()
{
    //TITLE of program
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                     Welcome to the Arrow Head Program!" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;

    
    //TOP HALF OF ARROW
    for (int row = 1; row <= 4; ++row)
    {
        int column = 0;
        while (column < 6)
        {
            //MIDDLE OF ARROW
            //Will display arrow tail
            //once row 4 is reached
            if (row == 4)
            {
                cout << "+";
                column++;
                continue;
            }
            //Displays spaces on top-
            //left side of the arrow tail
            else 
            {
                cout << " ";
                column++; 
            }
        }
        //START of Arrow Head
        //Will determine how many plus signs
        //go on each row for top section
        //(INCREASES BY TWO SIGNS)
        for (int col = 1; col <= row; ++col)
        {
            //Displays ASCENDING plus signs 
            //No increment for row 1;
            //(1) = 1
            cout << "+";
            //Increments by two signs every
            //row, after row 1 (1 < 2), 
            //until reaching row 3
            if (col >= 2)
            {
                //row 2: (1 + (2)) = 3
                //row 3: (1 + (2 + 2)) = 5
                //row 4: (1 + (2 + 2 + 2)) = 7
                cout << "+";
            }
        }
        //Ensures a new line
        //for every row
        cout << endl;
    }
    
    //BOTTOM HALF ARROW/ ENDING 
    for (int row = 1; row <= 4; ++row)
    {
        //Sets columns of bottom section
        //to begin at ZERO
        int columns = 0;
        //Displays spaces on bottom-
        //left side of the arrow tail
        // until 5th column (5 < 6)
        while (columns < 6)
        {
            cout << " ";
            columns++;
        }
        //Will determine how many plus signs
        //go on each row for bottom section
        //(DECREASES BY TWO SIGNS)
        for (int colm = 3; colm >= row; --colm)
        {
            //Displays DESCENDING plus signs 
            cout << "+";
            //Begins at 5 signs and decreases
            //by 2 until it hits 1
            //THUS it will increment twice to 5 signs
            //at start: (1 + (2 + 2) = 5
            if (colm >= 2 && row == 1)
            {
                cout << "+";
            }
            //Once it gets to second row
            //it no longer increments twice;
            //only once for second row ( 1 + (2)) = 3
            //and no increment for third row (1) = 1
            if (row == 2)
            {
                if (colm <= 2)
                {
                    break;
                }
                else 
                {
                    cout << "+";
                }
            }
        }
        //Ensures a new line for every row
        cout << endl;
    }
    
    //CLOSING
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                             Have A Nice Day!" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    //Returns zero to main function
    return 0;
}