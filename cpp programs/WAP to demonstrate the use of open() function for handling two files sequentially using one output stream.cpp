// WAP to demonstrate the use of open() function for handling two files sequentially using one output stream

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//create two files
	ofstream outf; //create output stream.
	outf.open("vehicle.txt"); //connect monument.txt file to it.
	outf << "Maruti suzuki zen\n";
	outf << "Porsche cayenne\n";
	outf << "BMW 530d\n";
	outf.close(); // disconnect monument.txt file
	outf.open("city.txt"); //connect place.txt to the output stream
	outf << "New Delhi\n";
	outf << "Dehradun\n";
	outf << "Hyderabad\n";
	outf.close(); // disconnect place.txt file
	//Read both files one by one
	char str[25];
	ifstream inf; // create input stream
	inf.open("vehicle.txt"); //connect monument.txt to it.
	cout << "The contents of vehicle.txt file are as follows:- ";
	while (inf)
	{
	inf.getline(str, 25);
	cout << "\n"
	<< str;
	}
	inf.close(); //disconnect monument.txt file
	inf.open("city.txt"); //connect place.txt file
	cout << "\nThe contents of city.txt file are as follows:- ";
	while (inf)
	{
	inf.getline(str, 25);
	cout << "\n"
	<< str;
	}
	inf.close(); //disconnect place.txt file
	return 0;
}

