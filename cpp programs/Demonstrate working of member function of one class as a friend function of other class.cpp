// Demonstrate working of member function of one class as a friend function of other class
#include <iostream>
using namespace std;

class B;
 class A
{
 public:
 int a;
	 void input()
	 {
	 cout<<"Enter the value of variable a : ";
	 cin>>a;
	 }
	 friend void great(A,B);
};

 class B
{
 public:
 int b;
	 void input()
	 {
	 cout<<"Enter the value of variable b: ";
	 cin>>b;
	 }
	 friend void great(A,B); 
};

 void great(A x,B y)
	{
	 if(x.a>y.b)
	 cout<<x.a;
	 else
	 cout<<y.b;
	}

 int main()
{
 A x;
 B y;
 x.input();
 y.input();
 cout<<"Greater number is: ";
 great(x,y);
 return 0;
}
