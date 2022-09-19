//WAP To restrict a function to throw only a specified types of exceptions.

#include<iostream>
using namespace std;

void myHandler(int i) throw(char, int) 
{ 
//dynamic exception specification
if(i==0)
throw 1; //throw int
else if(i==1)
throw '1'; //throw char
else if(i==2)
throw 1.1; 
//throw double
cout << "\nEnd Of Check Function";
}

int main() 
{
int num;
cout << "\--Start Of Main--";
try {
cout << "\nTest Throw Restrictions";
cout << "\nEnter 0, 1 or 2 : ";
cin >> num;
myHandler(num);
}
catch(int i) {
cout << "\nCaught An Integer";
}
catch(char ch) {
cout << "\nCaught a Character";
}
catch(double d) {
cout << "\nCaught a Double";
}
cout << "\n--End Of Main--";
return 0;
}

