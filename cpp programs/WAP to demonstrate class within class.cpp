//WAP to demonstrate class within class

#include<iostream>
using namespace std;
class X
{
	public:
		int x;
		public:
			
		void input_X()
			{
			    cout<<"OUTER CLASS";
				cout<<"\nEnter a number: ";
				cin>>x;
			}
		void output_X()
			{
		    	cout<<"Entered number is : "<<x;
			}
	class Y
	{
		int y;
		public:
			
		void input_Y()
			{
			   	cout<<"\n\nINNER CLASS";
				cout<<"\nEnter a number: ";
				cin>>y;
			}
		void output_Y()
			{
		    	cout<<"Entered number is : "<<y;
			}
	};
};

int main()
{
X object;
X::Y obj;
object.input_X();
object.output_X();
obj.input_Y();
obj.output_Y();
return 0;
}
