/*Define Student class.
Data Members – enrollno, Name, float marks[5],float perc
Member Function – input(), calculatePerc(), output
[Calculate percentage of two students]*/

#include<iostream>
using namespace std;

class Student{
	private:
	int	enrollno; 
	char name[20];
	float marks,sub1,sub2,sub3,sub4,sub5;
	float perc;
	
	public:
		void input()
		{
			cout<<"Enter the enrollment number of the student :";
			cin>>enrollno;
			cout<<"Enter the name of the student :";
			cin>>name;
			cout<<"Enter the marks of the student(out of 100) :\n";
			cin>>sub1>>sub2>>sub3>>sub4>>sub5;
			
		}
		
		void output()
		{
			cout<<"\nDETAILS";
			cout<<"\nThe enrollment number of the student is :"<<enrollno;
			cout<<"\nThe name of the student is :"<<name;
			cout<<"\nThe marks of the student are as follows : "<<sub1<<" "<<sub2<<" "<<sub3<<" "<<sub4<<" "<<sub5;
		}
		
		void calculate_percentage()
		{
			marks = sub1+sub2+sub3+sub4+sub5;
			perc = (marks/5);
			cout<<"\n\nThe percentage of the student is :"<<perc;
		}
};

int main()
{
Student s1;

s1.input();
s1.output();
s1.calculate_percentage();
cout<<"\n\n";
s1.input();
s1.output();
s1.calculate_percentage();

return 0;
}





