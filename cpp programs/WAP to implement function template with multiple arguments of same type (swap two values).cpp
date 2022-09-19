//WAP to implement function template with multiple arguments of same type (swap two values)

#include <iostream>
using namespace std;
template <class T>
void Swap(T &n1, T &n2)
{
T temp = n1;
n1 = n2;
n2 = temp; 
}

int main()
{

int a = 50, b = 60;
float c = 66.43f, d = 32.56f;
double e = 23.7, f = 78.8;
cout << "Initially, a = " << a << " & b= " << b ;
Swap(a, b);
cout << "\nAfter swap int a = " << a << " & b= " << b ;
cout << "\n\nInitially, c= " << c << " & d= " << d ;
Swap(c, d);
cout << "\nAfter swap c = " << c << " & d = " << d ;
cout << "\n\nInitially, e= " << e << " & f= " << f ;
Swap(e, f);
cout << "\nAfter swap e= " << e << " & f= " << f ;
return 0; 
}
