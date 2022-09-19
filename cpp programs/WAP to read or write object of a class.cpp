// WAP to read/write object of a class

#include <iostream>
#include <fstream>
using namespace std;

class student 
{
	int rollno;
	char name[20];
	float marks;
	
	public:
		student() {}
		void getData(); 
		void displayData(); 
};

void student ::getData()
{
	cout << "Enter Roll number : ";
	cin >> rollno;
	cin.ignore(); 
	
	cout << "Enter name : ";
	cin.getline(name, 30);
	
	cout << "Enter marks : ";
	cin >> marks;
}

void student ::displayData()
{
	cout << "Roll number = " << rollno ;
	cout << "\nName = " << name ;
	cout << "\nMarks = " << marks ;
}

int main()
{
	student s[3]; 
	fstream file;
	int i,j;
	file.open("students.dat", ios ::out); 
     cout << "----------Entering data of three students in the file----------" << "\n";
	for (i = 1; i <= 2; i++)
		{
			cout<<"\n\nEnter details for student "<<i<<"\n";						
				s[i].getData();
				file.write((char *)&s[i], sizeof(s[i]))	;    	
		}	
	file.close(); 
	
	file.open("students.dat", ios ::in); 
	cout << "\n----------Reading student data from file----------" <<"\n";
	
	for (i = 0; i < 2; i++)
		{
			cout<<"\n\n";
			file.read((char *)&s[i], sizeof(s[i])); 
			s[i].displayData();
		}
		
	file.close();
	return 0;
}

