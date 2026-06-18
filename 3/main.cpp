#include <iostream>
#include <cctype>;
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if((ch >= 'A' && ch <= 'Z') && isupper(ch) )
    {
     cout << "It is an uppercase letter";
    }
    else 
    {
     cout <<"It is not an uppercase letter";
    }
} 