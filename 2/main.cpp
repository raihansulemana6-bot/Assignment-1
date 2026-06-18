#include <iostream>
#include <string>
using namespace std;

int main()
{
 string userInput;
 cout << "Enter a word or a sentence: ";
 getline(cin,userInput);


 if (userInput.find('a') != string::npos)
 {
  cout << "There is an a" << endl;

 }
 else

 {cout <<"Does not contain an a" << endl;}


}