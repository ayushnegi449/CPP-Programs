//WAP To demonstrate the concept of command line arguments and
//storing the positive and negative integers separately in two files.
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{
cout << "You have entered " << argc
<< " arguments:"
<< "\n";
for (int i = 0; i < argc; ++i)
cout << "argv[" << i << "]"
<< " = " << argv[i] << "\n";
int num[10];
cout << "Please enter 10 integers...";
for (int i = 0; i < 10; i++)
cin >> num[i];
ofstream pos, neg;
pos.open(argv[1]);
neg.open(argv[2]);
for (int i = 0; i < 10; i++)
{
if (num[i] > 0)
pos << num[i] << " ";
else
neg << num[i] << " ";
}
pos.close();
neg.close();
ifstream file;
char ch;
file.open(argv[1]);
cout << "\nContents of " << argv[1] << " file are ..";
while (file)
{
file.get(ch);
cout << ch;
}
file.close();
file.open(argv[2]);
cout << "\nContents of " << argv[2] << " file are ..";
while (file)
{
file.get(ch);
cout << ch;
}
file.close();
return 0;
}

