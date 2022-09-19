//Demonstrate Destructuring of static objects
#include<iostream>
using namespace std;
class Demo
{
 string a;
 int length;
 
 public:
 	
  Demo()
	  {
		 a ="";
		 length=0;
      }
		  
  Demo(string a)
	 {
		 cout<<"Constructor called\n";
		 this->a=a;
		 length = a.length();
	 }
 
 void output()
	 {
	     cout<<"\nString = "<<a<<" ,Length = "<<length<<"\n";
	 }
 
 ~Demo();
};

Demo::~Demo()
{
 cout<<"\nDestructor called\n";
}

int main()
{
 cout<<"Main block starting\n";
	 {
		 Demo Vehicle("Yamaha");
		 cout<<"\nDisplaying Vehicle";
		 Vehicle.output();
	 }
 cout<<"Main block Ending\n";
 return 0;
}
