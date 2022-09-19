//Demonstrate object within a class

#include <iostream>
using namespace std;

class Marks
{
	int rollno;
	float percentage;
	public:
		
		void get_Marks()
			{
				cout<<"Enter percentage: ";
				cin>>percentage;
				cout<<"Enter roll number: ";
				cin>>rollno;				
			}
			
		void show_Marks()
			{
				cout<<"\nRoll No.: "<<rollno;
				cout<<"\nPercentage Scored: "<<percentage<<"%";
			}
};

class Student
{
	Marks m;
	char name[30];
	public:
		void get_studentDetails()
			{
				cout<<"Enter name: ";
				cin>>name;
				m.get_Marks();
			}
			
		void show_studentDetails()
			{
				cout<<"\n\nName: "<<name;
				m.show_Marks();
			}
};

int main()
{
Student S;
S.get_studentDetails();
S.show_studentDetails();
return 0;
}

