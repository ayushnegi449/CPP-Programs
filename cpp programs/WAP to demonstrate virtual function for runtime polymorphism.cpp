//WAP to demonstrate virtual function for runtime polymorphism

#include<iostream>
using namespace std;
class Base 
	{
	int a;
	public:
		virtual void display(int i)
		{
		a = i;
		cout << "Value Of 'a' Inside Base Class : " << a;
		}
		
		void show() 
		{
		cout << "\nBASE CLASS!";
		}
};


class Derived : public Base 
{
	int b;
	public:
		void display(int j) 
		{
			b = j;
			cout << "\n\nValue Of 'b' Inside Derived Class : " << b;
		}
	void show() 
		{
	    	cout << "\nDERIVED CLASS!";
		}
};

int main() 
{
Derived d;
Base *b;
b = new Base;
b -> display(1234);
b -> show();
b = &d;
b -> display(4321);
b -> show();
return 0;
}
