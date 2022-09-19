#include<iostream>
using namespace std;

class Server{
	public:
		static int no_of_clients;
		static int view_no_of_users();
};
 
int Server::no_of_clients;
int Server::view_no_of_users()
{
	return no_of_clients;
}

int main()
{
	cout<<"Intitial values of variable and method";
	cout<<"\nVariable - Number of clients connected : "<<Server::no_of_clients;
	cout<<"\nMethod - Number of clients connected : "<<Server::view_no_of_users();
	
	cout<<"\n\nAfter changing value of static variable";
	Server::no_of_clients = 7;
	cout<<"\nVariable - Number of clients connected :"<<Server::no_of_clients;
	cout<<"\nMethod - Number of clients connected : "<<Server::view_no_of_users();
	
}
