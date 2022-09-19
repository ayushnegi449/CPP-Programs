//Create two classes pt_std and ft_std. There is a friend function which is friend of both the classes and it displays all the details of the student having greater marks.

#include <iostream>
using namespace std;

class pt_std
{
 char name[20];
 int ID;
 
 public:
 int totalmarks;
 void input()
 {
 cout<<"Enter details of the part time student\n";
 cout << "Enter student's name: ";
 cin >> name;
 cout << "Enter student's ID : ";
 cin >> ID;
 cout << "Enter student's total marks: ";
 cin >> totalmarks;
 }
 void output()
 {
 cout << "\nStudent's name: " << name;
 cout << "\nID: " << ID;
 cout << "\nTotal Marks obtained: " << totalmarks;
 }
};


class ft_std
{
 char name[20];
 int ID;
 
 public:
 int totalmarks;
 
	 void input()
	 {
	 cout<<"Enter details of the full time student";
	 cout << "\nEnter student's name: ";
	 cin >> name;
	 cout << "Enter student's ID: ";
	 cin >> ID;
	 cout << "Enter student's total marks: ";
	 cin >> totalmarks;
	 }
	 
		 void output()
		 {
		 cout << "\nStudent's name: " << name;
		 cout << "\nID: " << ID;
		 cout << "\nTotal Marks obtained: " << totalmarks;
		 }
		 
 friend void compare(ft_std s1, pt_std s2);
};

void compare(ft_std s1, pt_std s2)
{
	cout<<"Comparing the marks of both the students\n";
	 if (s1.totalmarks > s2.totalmarks)
	 {
	 cout << "Full time student scored more marks than the part time student\n"; 
	 s1.output();
     }
     
		else if (s1.totalmarks < s2.totalmarks)
		 {
		 cout << "Part time student scored more marks than the full time student\n";
	     s2.output();
		 }
		
		  else
			 {
		     cout << "Both full time student and part time student scored equal marks\n";
			 s1.output();
			 s2.output();
			 }
}


int main()
{
	
 pt_std pt;
 ft_std ft;
 pt.input();
 cout<<"\n";
 ft.input();
 cout<<"\n\n";
 compare(ft,pt);
 return 0;
 
}
