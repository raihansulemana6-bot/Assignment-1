#include <iostream>
using namespace std;

int main()
{
    long long binaryNum;
    long long temp;
    int decimalNum = 0;
    int base = 1; 

    cout << "Enter a binary number: ";
    cin >> binaryNum;

    temp = binaryNum;

    while (temp > 0) 
    {
        
        int lastDigit = temp % 10;
        
        decimalNum += lastDigit * base;
        base = base * 2;
        temp = temp / 10;
    }

    cout << "The decimal equivalent of binary " << binaryNum << " is: " << decimalNum << endl;

    return 0;
}