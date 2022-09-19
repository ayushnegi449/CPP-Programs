//Define Box class. Data Function - Input, Output and calculateVolume
#include <iostream>
using namespace std;

class Box{
   private:
    double length;
    double breadth;
    double height;
    string colour;
   public:
    void input()
    {
    cout<<"The colour of the box is: ";
    cin >> colour;
    
    cout<<"\nEnter the dimensions of the box";
    cout <<"\nLength :";
    cin>>length;  
    
    cout<<"Breadth :";
    cin>>breadth;  
	 
    cout<<"Height :";
    cin>>height; 
    }
    
    void output()
    {
    	
    	cout<<"\n\nThe dimensions of the box are :";
    	cout<<"\nLength:"<<length;
		cout<<"\nBreadth:"<<breadth;
		cout<<"\nHeight:"<<height;
		
		cout<<"\n\nThe colour of the box is:"<<colour;
	}
    void volume() 
	{
	cout<<"\n\nVolume of the box = ";
    cout<<length*breadth*height;
    }

};

int main() {
    Box b1;
    b1.input();
	b1.output();
    b1.volume();

    return 0;
}
