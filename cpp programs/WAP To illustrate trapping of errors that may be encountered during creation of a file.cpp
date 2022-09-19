//WAP To illustrate trapping of errors that may be encountered during creation of a file
#include <iostream>
#include <fstream>
#include <process.h>
#include <string.h>
using namespace std;
int main()
{
ofstream outf;
char data[100];
outf.open("sample.txt"); //opens sample.txt in write mode
if (outf.bad()) //checks if open fails
{
	cout << "Error : sample.txt unable to open";
	exit(1);
}
cout<<"Enter content for file, type end to stop"<<endl;
while (1) 
{
	cin.getline(data, 100); //Read a line from keyboard
	if (strcmp(data, "end") == 0)
	break;
	outf << data << endl; //write to "sample.txt" file
	if (outf.fail())
	{
		cout << "Write operation failed\n";
		exit(1);
	} 
}
outf.close();
cout << "\nThe contents of the file are...\n";
ifstream inf;
inf.open("sample.txt");
if (inf.bad()) //open fails
{
	cout << "Error : sample.txt unable to open";
	exit(1);
}
while (inf.eof() == 0) 
{
	inf.getline(data, 80);
	cout << data << "\n"; 
}
inf.close();
return 0; 
}

