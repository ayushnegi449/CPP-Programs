//WAP to check input character is numeric or not using ASCII(Use of if-else)

#include <iostream>
using namespace std;

void check_input_character(char c)
{
   if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	   {
	 	cout << "\nThe character is an Alphabet\n ";
       }

   else 
	{
	if (c >= 48 && c <= 57)
		{
		cout << "\nThe character is a Number\n";
        }
	else
	     {
	     cout << "\nThe character is a Special Character\n";
         } 
  }
}

int main()
{
	char c;
    cout << "Enter a character :";
    cin >> c;
	check_input_character(c);
	cout << "\nThe ASCII value of " << c <<" is :"<<int (c);
	return 0;
}


