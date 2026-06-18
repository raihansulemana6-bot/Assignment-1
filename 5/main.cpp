#include <iostream>
using namespace std;

int main()
{
 string hello;
 cout << "Type in the secret code: ";
 cin >> hello;

 if (hello == "hello")
 {
  cout << hello << endl;
 }
 else {
    cout << "Goodbye" << endl;
 }

}