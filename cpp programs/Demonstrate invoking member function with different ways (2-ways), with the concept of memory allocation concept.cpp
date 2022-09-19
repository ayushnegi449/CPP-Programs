//Demonstrate invoking member function with different ways (2-ways), with the concept of memory allocation concept

#include <iostream>
using namespace std;

class Students
{
 char name[20];
 int ID;
	 public:
		 void input()
			 {
				 cout << "Enter the student's name: ";
				 cin >> name;
				 cout << "Enter the student's ID: ";
				 cin >> ID;
			 }
			 
			 
		 void output()
			 {
				 cout << "Details of the student are: \n";
				 cout << "Name: "<< name <<"\n";
				 cout << "ID: "<< ID <<"\n";
			 }
};


int main()
{
 Students *p = new Students;
  cout << "Using dot operator to call functions\n";
 (*p).input();
 (*p).output();
 cout << "\nUsing arrow operator to call functions\n";
 p->input();
 p->output();
 delete p;
 return 0;
}
