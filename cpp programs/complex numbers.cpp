/*WAP to create a class names complex
Data members- real and imag of int type, member functions - input(), output(), add(), subtract(), multiply(). 
Make a menu driven program by taking choice from the user to add, subtract or multiply.
The functions should be to add, subtract , multiply two complex numbers and return the complex number object as result of operation.*/

#include <iostream>
using namespace std;
class Complex
{	
 private:
 int imaginary,real;
 
 public:
   void input()
	 {
	 cout<<"Enter the real number : ";
	 cin>>real;
	 cout<<"Enter the imaginary number : ";
	 cin>>imaginary;
	 }
	 
    void output()
	 {
	   cout<<"The complex number entered is "<<real<<" + "<<imaginary<<"i";
	 }
	void addition(Complex c1, Complex c2)
	 {
	 real = c1.real + c2.real;
	 imaginary = c1.imaginary + c2.imaginary;
	 cout<<"\n";
	 cout << "SUM = " << real << " + " << imaginary << "i";
	 }
	 
   void subtraction(Complex c1, Complex c2)
	 {
	 real = c1.real - c2.real;
	 imaginary = c1.imaginary - c2.imaginary;
	 cout << "\nDIFFERENCE = " << real << " + " << imaginary << "i";
	 }
   void multiplication(Complex c1, Complex c2)
	 {
	 real = (c1.real * c2.real) - (c1.imaginary * c2.imaginary);
	 imaginary = (c1.real * c2.imaginary) + (c1.imaginary * c2.real);
	 cout << "\nPRODUCT = " << real << " + " << imaginary << "i";
	 }
};

int main()
{
 Complex c1, c2, c3;
 int choice;
 char option;
 do
 {
	 c1.input();
	 c1.output();
	 cout<<"\n\nComplex number 2:\n";
	 c2.input();
	 c2.output();
		cout << "\n\nMENU\n1.Add\n2.Subtract\n3.Multiply\n";
		cout << "Enter your choice: ";
		cin >> choice;
	 
	 
		 switch (choice)
		 {
		 case 1:c3.addition(c1, c2);
		 break;
		 case 2:c3.subtraction(c1, c2);
		 break;
		 case 3:c3.multiplication(c1, c2);
		 break;
		 default:"Wrong Input";
		 }
		 
	 cout << "\n\nDo you want to continue?";
	 cout<<"\nEnter Y/N";
	 cin >> option;
	 cout<<"\n\n";
 } 
 
 while (option == 'y' || option == 'Y');
 return 0;
 
}




