//arrowhead.cpp
//This program displys an arrow 
//pointing to the right
#include <iostream>
#include <string>
using namespace std;
int main()
{
  for (int row = 1; row <= 4; ++row)
    {
      for (int col = 5; col >= row; --col)
        {
            //Displays ascending plus signs 
            cout << "+";
            if (col >= 2)
            {
                cout << "+";
            }
        }
        cout << endl;
    }
}