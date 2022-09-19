/*WAP to demonstrate the concept of function overloading to calculate and print the volume of a cone, cube, cuboid, sphere and a cylinder.
Make a menu driven programme, using while loop and within that switch-case.*/ 

#include<iostream>
using namespace std;

float vol(float r,int h)
	{
	    return ((3.14*r*r*h)/3);
	}

int vol(int s)
	{
	    return (s*s*s);
	}

int vol(int l,int b,int h)
	{
	    return(l*b*h);
	}

float vol(float r)
	{
	    return((4*3.14*(r*r*r))/3);
	}

float vol(float r,float ht)
	{
	    return(3.14*r*r*ht);
	}

int main()
{
    float r,h;
    int l,b,s,h1;
    int choice;
    do
    {
        cout<<"\n**********";
        cout<<"\n----------MENU------------";
        cout<<"\n1. Volume of Cone";
        cout<<"\n2. Volume of Cube";
        cout<<"\n3. Volume of Cuboid";
        cout<<"\n4. Volume of Sphere";
        cout<<"\n5. Volume of Cylinder";
        cout<<"\n6. Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;
        switch(choice)
        {
           case 1:  cout<<"\nEnter radius and height for cone: ";
                    cin>>r>>h;
                    cout<<"\nVolume of cone is: "<<vol(r,h);
                    break;
            case 2: cout<<"\nEnter side for cube: ";
                    cin>>s;
                    cout<<"\nVolume of cube is: "<<vol(s);
                    break;
            case 3: cout<<"\nEnter length, breadth and height for cuboid: ";
                    cin>>l>>b>>h;
                    cout<<"\nVolume of cuboid is: "<<vol(l,b,h);
                    break;
            case 4: cout<<"\nEnter radius for sphere: ";
                    cin>>r;
                    cout<<"\nVolume of sphere is: "<<vol(r);
                    break;
            case 5: cout<<"\nEnter radius and height for cylinder: ";
                    cin>>r>>h;
                    cout<<"\nVolume of cylinder is: "<<vol(r,h);
                    break;
            case 6: exit(0);
            default: cout<<"\nInvalid Choice!";

        }
        
    }
	while(choice!=0);
    return 0;
}
