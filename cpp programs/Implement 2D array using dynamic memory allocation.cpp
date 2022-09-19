//Implement 2D array using dynamic memory allocation

#include <iostream>
using namespace std;

int main()
{
	 int m,n;
	 cout<<"Dynamic 2D Array\n";
	
	 cout<<"Enter size of 2D Array (mxn): ";
	 
	 cout<<"\nEnter the number of rows : ";
	 cin>>m;
	 
	 cout<<"Enter the number of columns : ";
	 cin>>n;
 
 int **array=new int*[n];
 
 
 cout<<"\nEnter The Input\n";
 for(int i=0; i<n; i++)
 {
     array[i]=new int[m];
     cout <<"Enter elements of row "<<i+1<<"\n";
     
     for(int j=0; j<m; j++)
		 {
		 	 cin>>array[i][j];
		 }
		 
   cout<<"\n";
 }
 
 
 cout<<"The 2D Array is :\n";
 for(int i=0; i<n; i++)
 {
	 for(int j=0; j<m; j++)
		 {
		  cout<<array[i][j]<<" ";
		 }
		 
   cout<<"\n";
 }

 for (int i = 0; i < n; i++)
 delete []array[i];
 delete []array;

 
 return 0;
}
