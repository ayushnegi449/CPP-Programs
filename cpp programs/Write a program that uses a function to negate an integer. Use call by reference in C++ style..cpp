//Write a program that uses a function to negate an integer. Use call by reference in C++ style.
#include<iostream>
using namespace std;

void negative(int &m)
{
 m=-m;
}

int main()
{
 int n;
 cout<<"Enter an integer: ";
 cin>>n;
 negative(n);
 cout<<"Negate of the entered integer is : "<<n<<"\n";
 return 0;
}

