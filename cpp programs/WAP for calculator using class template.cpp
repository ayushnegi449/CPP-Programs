//WAP for calculator using class template

#include <iostream>
using namespace std;

template <class T>
class Calculator
{ 
T n1, n2;
public:
    Calculator(T a, T b) 
		{
			n1 = a;
			n2 = b;
		}

void displayresult()
{
	cout << "For numbers " << n1 << " and " << n2 << "\n";
	cout << "Addition= " << add() << "\n";
	cout << "Subtraction= " << subtract() << "\n";
	cout << "Multiplication= " << multiply() << "\n";
	cout << "Division=" << divide() << "\n"; 
}

T add()
{
    return n1 + n2; 
}

T subtract()
{
    return n1 - n2; 
}

T multiply()
{
    return n1 * n2;
}

T divide()
{
    return n1 / n2; 
}
};

int main()
{

Calculator<int> CInt(36, 18);
Calculator<float> CFloat(68.50,34.25);
CInt.displayresult();
cout <<"\n";
CFloat.displayresult();
return 0; }
