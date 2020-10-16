#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    string border = "-";
    string title = "Welcome to the Average Score Calculator!";
    cout << title << endl;
    for (int amount = 1; amount <= title.length(); amount++)
    {    cout << border;
    }
}