//WAP to find absolute value using function template

#include <iostream>
using namespace std;

template <class T> 
T abs(T n) 
{
    return (n < 0) ? -n : n; 
}

int main()
{
int i = -55;
float f = 41.78;
cout << "Absolute value of -55 = " << abs(i);
cout << "\nAbsolute value of 41.78 = " << abs(f);
return 0;
}
