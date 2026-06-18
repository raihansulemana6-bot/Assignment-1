#include <iostream>
using namespace std;

int main()
{
    
    double num1, num2;

    cout << "Enter first decimal number: ";
    cin >> num1;
    cout << "Enter second decimal number: ";
    cin >> num2;

    
    double larger = (num1 > num2) ? num1 : num2;

    cout << "The larger number is: " << larger << endl;

    return 0;
}