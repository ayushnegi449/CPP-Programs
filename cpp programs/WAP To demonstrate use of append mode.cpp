// WAP To demonstrate use of append mode
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream outf;
	char data[25];
	outf.open("data1.txt", ios::out);
	cout << "Enter some text: ";
	cin.getline(data, 25);
	outf << data << "\n";
	outf.close();
	cin.clear();
	outf.open("data1.txt", ios::app);
	cout << "Enter some more text: ";
	cin.getline(data, 25);
	outf << data << "\n";
	outf.close();
	ifstream inf;
	inf.open("data1.txt", ios::in);
	cout << "Contents of the file:\n";
	while (inf.eof() == 0)
	{
	inf.getline(data, 25);
	cout << data << "\n";
	}
	return 0;
}

