//WAP to create a class matrix to represent a 2-D array to be allocated memory dynamically, by using concept of array of array pointers. 
//Write suitable constructor, destructor and member functions to input and display elements of 2-D array.

#include<iostream>
using namespace std;

class Matrix 
{
	 int **matrix;
	 int rows,columns;
 
	 public:
		 Matrix(int , int );
		 void input();
		 void output();
		 ~Matrix();
};
 
void Matrix::input()
{
 cout<<"\nEnter a "<<rows<<"x"<<columns<<" Matrix\n";
 
 for(int i=0;i<rows;i++)
   {
	 for(int j=0;j<columns;j++)
		 {
		     cin>>matrix[i][j];
		 }  
		 cout<<"\n";
   }
}
  
void Matrix::output(){
 cout<<"\nEntered Matrix\n";
 
 for(int i=0;i<rows;i++)
	 {
		 for(int j=0;j<columns;j++)
		 {
		     cout<<matrix[i][j]<<" ";
		 }
	       cout<<"\n";
	 }
}

 Matrix::Matrix(int rows, int columns)
 {
 cout<<"Constructor called\n";
 this->rows =rows;
 this->columns =columns;
 
 matrix=new int*[rows];
 
 for(int i=0;i<columns;i++)
	 {
	     matrix[i] = new int[columns];
	 }
}
Matrix::~Matrix()
{ 
 cout<<"\nDestructor called\n";
	 for(int i=0;i<columns;i++)
		 {
		     delete []matrix[i];
		 }
	 delete []matrix;
}

int main()
{
 cout<<"Local block starting\n";
 {
	 Matrix enter(3,3);
	 enter.input();
	 enter.output();
 }
 cout<<"Local block ending\n";
 return 0;
}
