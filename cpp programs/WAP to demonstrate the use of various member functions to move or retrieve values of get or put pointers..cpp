// WAP to demonstrate the use of various member functions to move / retrieve values of get / put pointers.
#include <iostream>
#include <fstream>
using namespace std;
class student 
{
	int roll;
	char name[30];
	float marks;
	public:
	student() {}
	void getData(); 
	void displayData(); 
};
void student ::getData()
{
	cout << "\nEnter Roll No. : ";
	cin >> roll;
	cin.ignore(); 
	cout << "Enter Name : ";
	cin.getline(name, 30);
	cout << "Enter Marks : ";
	cin >> marks;
}
void student ::displayData()
{
	cout << "\nRoll No. : " << roll ;
	cout << "\nName : " << name ;
	cout << "\nMarks : " << marks ;
}
int main()
{
	student s[3];
	fstream file;
	file.open("students.dat", ios ::in); 
	file.seekg(0, ios::end); 
	int sizeof_file = file.tellg(); 
	int num_of_objects = sizeof_file / sizeof s[0];
	cout << "Size of one object is " << sizeof s[0] << " bytes";
	cout << "\nSize of file is " << sizeof_file << " bytes";
	cout << "\nNumber of objects in file is " << num_of_objects;
	file.close(); 
    return 0;
}

