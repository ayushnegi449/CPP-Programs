//WAP to implement overloading of function template

#include <iostream>
using namespace std;
template <class T1, class T2>
void show(T1 a, T2 b)
{
cout << "Two Argument Template: " << a << "\t" << b ;
}

template <class T1>
void show(T1 a) 
{
cout << "\nOne Argument Template: "<< a ;
}
void show(int a) 
{
cout << "\nOne Argument (Int): "<< a ;
}

int main()
{
show(5, "Program");
show("Text");
show(22);
}
