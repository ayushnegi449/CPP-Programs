//Program to illustrate multiple inheritance of class student,sports_test and result
#include <iostream>
using namespace std;

class Student
{
	protected:
		int rollno,marks1,marks2,marks3;
		char name[20];
	public:
		void input_student()
			{
				cout<<"Enter name: ";
				cin>>name;
				cout<<"Enter roll number: ";
				cin>>rollno;
				cout<<"Enter marks out of 100\n";
				cout<<"Enter marks in subject 1: ";
				cin>>marks1;
				cout<<"Enter marks in subject 2: ";
				cin>>marks2;
				cout<<"Enter marks in subject 3: ";
				cin>>marks3;
			}
};


class Sports_test
{
protected:
	int sports_marks;
	public :
		void input_test()
			{
				cout<<"Enter the marks scored by student in sports test : ";
				cin>>sports_marks;
			} 
};


class Result : public Student, public Sports_test
{
	protected:
        int totalmarks;
	public:
		void output()
			{
		    	totalmarks = marks1 + marks2 + marks3 +sports_marks;
		    	cout<<"\n\n------------------------------------";
				cout<<"\nRoll Number: "<<rollno;
				cout<<"\nName: "<<name;
				cout<<"\nTotal Marks: "<<totalmarks;
			}
};

int main()
{
Result r;
r.input_student();
r.input_test();
r.output();
return 0;
}

