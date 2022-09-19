//WAP to implement class template with multiple generic parameters

#include <iostream>
using namespace std;

template <class T1, class T2>
class Sample
{
T1 a;
T2 b;
public:
	
	Sample(T1 x, T2 y)
		{
			cout << "Constructor Called\n";a = x;
			b = y;
		}

void display()
	{
		cout << "a= " << a;
		cout << "\tb= " << b;
	}
};

int main()
{
cout << "class template for int and float data types\n";
Sample<int, float> s1(2.5, 85);
s1.display();
cout << "\n\nclass template for char and int data types\n";
Sample<char, int> s2('X', 86);
s2.display();
return 0;
}

