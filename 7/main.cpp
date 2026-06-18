#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 const double PI = 3.14159;
 double area;
 double radius;

 cout << "Enter the radius: ";
 cin >> radius;
 area = PI * pow(radius,2);

 cout << "The area is: "<< area;
 return 0;
}
