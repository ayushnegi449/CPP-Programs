// WAP To demonstrate creating a file, writing name, age and marks into and then reading all three attributes

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream outf("file.txt"); //connects file.txt to outf stream and opens file in write mode.
	float score = 85.50;
	
	outf << "Ayush\n"; //writes Ayush to the file data.txt
	outf << 19 <<"\n";//writes 19 to the file file.txt
	outf << score <<"\n"; //writes value of score to the file file.txt
	outf.close(); // disconnects the file stream object from file.txt
	
	char name[15];
	int age;
	float marks;
	
	ifstream inf("file.txt"); //connects file.txt to inf stream and opens file in read mode.
	inf >> name; //reads the contents into name till end of line
	inf >> age; // reads the contents into age till end of line
	inf >> marks; // reads the contents into marks till end of line
	
	cout << "Data read from file.txt is as follows \n";
	cout << "\nName= " << name ;
	cout << "\nAge= " << age ;
	cout << "\nMarks= " << marks ;
	
	inf.close(); //disconnects the file stream object from file.txt
	return 0;
}
