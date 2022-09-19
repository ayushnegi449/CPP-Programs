// C++ program to compare two Strings
// using Operator Overloading
 
#include <cstring>
#include <iostream>
#include <string.h>
 
using namespace std;
 

class CompareString 
{
public:
    char str[25];
 
    CompareString(char str1[])
	    {
	        strcpy(this->str, str1);
	    }
 
    int operator==(CompareString s2)
	    {
	        if (strcmp(str, s2.str) == 0)
	            return 1;
	        else
	            return 0;
	    }
};
 
void compare(CompareString s1, CompareString s2)
{
 
    if (s1 == s2)
        cout << s1.str << " is equal to "<< s2.str << "\n";
   
}
 
void casec()
{
    
    char str1[] = "ayush";
    char str2[] = "ayush";
 
    CompareString s1(str1);
    CompareString s2(str2);
 
    cout << "Comparing "<< s1.str << " and "<<s2.str << "\n";
 
    compare(s1, s2);
}
 
int main()
{
    casec();
    return 0;
}
