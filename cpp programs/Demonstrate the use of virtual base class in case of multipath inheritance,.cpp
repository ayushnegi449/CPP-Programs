//Demonstrate the use of virtual base class in case of multipath inheritance

#include<iostream>
using namespace std;
class A
	{
	protected:
	int x;
	public:
		void inputA()
			{
				cout<<"Enter an integer to store in class A: ";
				cin>>x;
			}
		void outputA()
			{
		     	cout<<"Integer in class A is: "<<x<<"\n";
			}
};


class B: virtual public A
	{
	protected:
	int x;
	public:
		void inputB()
			{
			 	cout<<"Enter an integer to store in class B: ";
			 	cin>>x;
			}
		void outputB()
			{
			     cout<<"Integer in class B is: "<<x<<"\n";
			}
};
class C: virtual public A
	{
	protected:
	int x;
	public:
		void inputC()
			{
			 	cout<<"Enter an integer to store in class C: ";
			 	cin>>x;
			}
		void outputC()
			{
		     	cout<<"Integer in class C is: "<<x<<"\n";
			}
};

class D: public B,public C
{
	protected:
	int x;
	public:
	void inputD()
		{
			inputA();
			inputB();
			inputC();
			cout<<"Enter an integer to store in class D: ";
			cin>>x;
		}
	void outputD()
		{
			outputA();
			outputB();
			outputC();
			cout<<"Integer in class D is: "<<x<<"\n";
		}
};

int main()
{
D dobj;
dobj.inputD();
cout<<"\n";
dobj.outputD();
return 0;
}
