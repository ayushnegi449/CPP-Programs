#include <iostream>
using namespace std;

int main()
{   
    int c;
    char option;
    float num1, num2;
    void menu();

do{
	cout <<"Enter two numbers: \n";
    cin >> num1 >> num2;
	cout <<"\nMenu(Select any one option):";
	cout <<"\n\n1.Addition (+)";
	cout <<"\n2.Subtraction (-)";
	cout <<"\n3.Multiplication (*)";
	cout <<"\n4.Division (/)";
	cout <<"\n\nEnter your option:";
	cin >> c;
    switch(c) {
        case 1:
            cout <<"\n"<< num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case 2:
            cout <<"\n"<< num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case 3:
            cout <<"\n"<< num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case 4:
            if(num2==0)
			cout <<"\n"<<"cannot divide by zero";
			else
			cout <<"\n"<< num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            cout <<"\n\n*INVALID INPUT!*";
            break;
    }
    cout <<"\n\nEnter Q/q to quit or Y/y to continue\n";
    cin >> option;
}
    while (option == 'Y' || option == 'y');

return 0;
}

