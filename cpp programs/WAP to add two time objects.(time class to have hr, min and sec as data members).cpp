//WAP to add two time objects.(time class to have hr, min and sec as data members)
#include<iostream>
using namespace std;

class Time{
	private : 
	int hr,min,sec;
	public:
		void input()
		{
			cout <<"Enter time:\n";
			cout <<"Hour(s) : ";
            cin >> hr;
            cout <<"Minute(s) : ";
            cin>>min;
            cout<<"Second(s) : ";
            cin>>sec;
		}
		
		void add(Time t1,Time t2)
		{
			sec = t1.sec + t2.sec;
            min = t1.min + t2.min;
            hr = t1.hr + t2.hr;
            if (sec > 59)
            {
               sec = sec - 60;
               min = min + 1;
            }
            
			if (min > 59)
            {
              min = min - 60;
              hr = hr + 1;
            }

		}
		
		void output()
        {
          cout << "Sum of time: ";
          cout << hr << ":" << min << ":" << sec;
        }

};

int main()
{
 Time t1, t2, t3;
 t1.input();
 cout<<"Time 2\n";
 t2.input();

 t3.add(t1, t2);
 t3.output();
return 0;
}
