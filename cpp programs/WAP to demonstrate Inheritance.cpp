//WAP to demonstrate Inheritance

#include<iostream>
using namespace std;

class A
{
	int x;
	protected :
		int y;
		
		public:
			int z;
			
			void input()
			{
				cout<<"Enter value of x : ";
				cin>>x;
				cout<<"Enter value of y : ";
				cin>>y;
				cout<<"Enter value of z : ";
				cin>>z;
			}
			
			void display()
			{
				cout << "x = "<<x;
				cout <<"\ny = "<<y;
				cout<<"\nz = "<<z;
			}
}; 

class B : public A
{
	int a;
	
	public :
		void value()
		{
			cout << "Enter the value of a : ";
			cin >> a;
		}
		
		void output()
		{
			float o ;
			o = a * z * y;
			cout <<"\na * x * y = "<<o<<"\n";
		}
};

int main()
{
    B b;
    b.input();
    b.value();
    b.display();
    b.output();

	return 0;
}
