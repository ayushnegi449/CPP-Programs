//To demonstrate multiple try-catch

#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
int n, d;
char c, choice;
do
{
cout << "Enter numerator: ";
cin >> n;
cout << "Enter denominator: ";
cin >> d;
try
{
if (cin.fail()) //if anything other than int is entered, input fails
{
cin.clear(); //to avoid infinite loop, clear buffer
throw c;
}
else
{
if (d == 0) //division by zero
throw d;
else
cout << n << " / " << d << " = " << n / d ;
}
}
catch (char c) 
{
cout << "\nPlease enter a number";
}
catch (int d)
{
cout << "\nDivision by zero invalid!";
}
cout << "\nWould you like to run the program again? Y/N ";
fflush(stdin); //flushing input buffer 
cin >> choice;
} while (choice == 'Y' || choice == 'y');
return 0;
}


