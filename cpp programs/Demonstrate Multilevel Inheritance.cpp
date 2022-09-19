//Demonstrate Multilevel Inheritance

#include<iostream>
using namespace std;

class A
{
	public:
		string name;
		
		void get_name(string n)
		{
			name = n;
		}
		
		void display_name()
		{
			cout<<"Name : "<<name;
		}
};

class B : public A
{
	public:
		int age;
		
		void get_age(int a)
		{
			age = a;
		}
		
		void display_age()
		{
			cout<<"\nAge : "<<age;
		}
};

class C : public B
{
	public:
		string gender;
		
		void get_gender(string g)
		{
			gender = g;
		}
		
		void display_gender()
		{
			cout<<"\nGender : "<<gender;
		}
};

int main()
{
	C details;
	details.get_name("Nush");
	details.get_gender("Male");
	details.get_age(30);
	
	details.display_name();
	details.display_gender();
	details.display_age();
	
	return 0;
}	
