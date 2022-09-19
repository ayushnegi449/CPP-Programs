//Program to illustrate hybrid inheritance of different class student,sports, academics and result

#include<iostream>
using namespace std;
class Student
{
	protected:
	int rollno;
	char name[20];
	public:
		void input_student()
			{
				cout<<"Enter roll number: ";
				cin>>rollno;
				cout<<"Enter name: ";
				cin>>name;
			}
		void output_student()
			{
				cout<<"\n\nName: "<<name;
				cout<<"\nRoll No: "<<rollno<<"\n";
			}
};

class Academics : public Student
{
	protected:
	int marks[5];
	public:
		void input_academics()
		{
			cout<<"Enter the marks in subjects (out of 100): \n";
			for(int i=0;i<5;i++)
			{
				cout<<"Enter the marks of Subject "<<i+1<<": ";
				cin>>marks[i];
			}
		}
		
		void output_academics()
		{
			cout<<"\nMarks are:\n";
			for(int i=0;i<5;i++)
				{
					cout<<"Subject "<<i+1<<": ";
					cout<<marks[i];
					cout<<"\n";
				}
		}
};

class Sports
{
	protected:
	int sports_marks;
	public:
		void input_sports()
			{
				cout<<"Enter the marks in sports test: ";
				cin>>sports_marks;
			}
			
	void out_sports()
		{
	    	cout<<"Marks scored in sports test : "<<sports_marks<<"\n";
		}
};


class Result : public Academics, public Sports
{
	protected:
	int total;
	public:
		void total_marks()
		{
			for(int i=0;i<5;i++)
			{
			    total+=marks[i];
			}
			
			total+=sports_marks;
		}
		
	    void out_total()
			{
			    cout<<"Total Marks scored by the student: "<<total<<"\n";
		    }
};


int main()
{
Result r;
r.input_student();
r.input_academics();
r.input_sports();
r.total_marks();
r.output_student();
r.output_academics();
r.out_sports();
r.total_marks();
return 0;
}

