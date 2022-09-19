// WAP to implement function template with multiple arguments of multiple types(input into array and find sum) Void input(T *array, const int size)

#include <iostream>
using namespace std;

template <class T>
void input(T *ar, const int size) 
{
	for (int i = 0; i < size; i++)
	cin >> ar[i];
}

template <class T> T sum(T *ar, const int size)
{ 
	T sum = 0;
	for (int i = 0; i < size; i++)
	sum += ar[i];
	return sum; 
}
int main()
{
const int size = 5;
int ar1[size];
float ar2[size];
cout << "Enter 5 integers: \n";
input(ar1, size);
cout << "Sum of integers= " << sum(ar1, size);
cout << "\n\nEnter 5 floating numbers: \n";
input(ar2, size);
cout << "Sum of floating numbers=" << sum(ar2, size);
return 0;
}
