//Demonstrate Constructor Overloading

#include <iostream>
using namespace std;

class student
{
 int rollno, marks;
 public:
 student()
 {
	 cout << "Default Constructor\n";
	 rollno = 22;
	 marks = 90;
 }
 
 student(int r, int m)
 {
	 cout << "Parameterized constructor\n";
	 rollno = r;
	 marks = m;
 }
 
 student(student &s)
 {
	 cout << "Copy constructor\n";
	 rollno = s.rollno;
	 marks = s.marks;
 }
 
 void output()
 {
	 cout << "Roll Number: " << rollno;
	 cout << "\nMarks obtained: " << marks << "\n";
 }
};

int main()
{
 student s1;
 s1.output();
 cout<<"\n";
 student s2(34,78);
 s2.output();
 cout<<"\n";
 student s3(s1);
 s3.output();
 return 0;
}
