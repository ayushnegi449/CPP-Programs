//Q47Program to demonstrate single inheritance when Base class has only public members and visibility mode while inheriting is private

#include <iostream>
using namespace std; 

class Vehicle {
	 public:
		 string model_name;
		 int model_number;
};

class Car : private Vehicle{
	 public :
	 		
	 	void Input_Details(string model_name,int model_number)
		 {
			 this->model_name = model_name;
			 this->model_number = model_number;
		 }
		
		void Output_Details()		 
		 {
			 cout<<"Vehicle's model name : "<<this->model_name;
			 cout<<"\nVehicle's model number : "<<this->model_number;
		 }
};	 
	
int main()
{
 Car c;
 c.Input_Details("Hyundai Verna",2019);
 c.Output_Details();
 return 0;
}
