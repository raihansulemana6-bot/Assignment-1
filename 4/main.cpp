#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    // Check if there is a remainder when dividing by 2
    if (num % 2 != 0) 
    {
        cout << "Odd number" << endl;
    } 
    else 
    {
        cout << "Even number" << endl;
    }

    return 0;
}