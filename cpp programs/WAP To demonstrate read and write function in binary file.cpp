//WAP To demonstrate read and write function in binary file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("BinaryFile.bin", ios::binary);
	int x = 20;
	double y = 36.34;
	fout.write((char *)&x, sizeof(x));
	fout.write((char *)&y, sizeof(y));
	fout.close();
	ifstream fin;
	fin.open("BinaryFile.bin", ios::binary);
	x = 0;
	y = 0;
	fin.read((char *)&x, sizeof(x));
	fin.read((char *)&y, sizeof(y));
	cout << "x = " << x << "\n"<< "y = " << y;
	return 0;
}

