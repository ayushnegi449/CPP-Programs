// To demonstrate exceptions thrown by functions invoked from within try block

#include <iostream>
using namespace std;

void divide(int numerator, int denominator)
{
cout << "\nInside divide function";
if (denominator == 0)
{
throw denominator;
}
else
cout << "\nThe result of division is:" << numerator / denominator;
}
int main()
{
cout << "In main function";
try
{
divide(23, 5); //first call
divide(78, 0); //second call
divide(44, 4); //third call
}
catch (int n)
{
cout << "\nDivide by 0 exception caught";
}
cout << "\nEnd of program";
return 0;
}
