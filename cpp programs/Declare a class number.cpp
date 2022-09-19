/*Declare a class number. Data members are I,j (2 integers). Member functions are get(), put()—both public.
Add one private function named return_larger().*/

#include <iostream>
#include <conio.h>
using namespace std;
class Number
{
private:
 int i, j;
 
 int return_Larger()
 {
 return (i > j ? i : j);
 }
public:
 void get()
 {
 cout << "Enter i: ";
 cin >> i;
 cout << "Enter j: ";
 cin >> j;
 }
 void put()
 {
 cout << "i: " << i;
 cout << "\nj: " << j;
 cout << "\nLarger: " << return_Larger();
 }
 
};
int main()
{
 Number N;
 N.get();
 N.put();
 return 0;
}
