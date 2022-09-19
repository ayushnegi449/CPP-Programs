//Overload prefix and postfix versions of ++, -- and - (negate) operators

#include <iostream>
using namespace std;
class Index
{
	int val;
		public:
		Index()
			{
			val = 0;
			}
			
		Index(int v)
			{
			val = v;
			}
			
		int getIndex()
			{
			return val;
			}
			
		Index operator++()
			{
			return Index(++val);
			}
			
		Index operator++(int)
			{
			return Index(val++);
			}
			
		Index operator--()
			{
			return Index(--val);
			}
			
		Index operator--(int)
			{
			return Index(val--);
			}
			
		Index operator-()
			{
			return Index(-val);
			}
};


int main()
{
	Index id1(2), id2(2), id3, id4;
	cout << "Increment Operator";
	cout << "\nValue in index 1= " << id1.getIndex();
	cout << "\nValue in index 2= " << id2.getIndex();
	cout << "\nValue in index 3= " << id3.getIndex();
	cout << "\nValue in index 4= " << id4.getIndex();
	id3 = id1++;
	cout << "\nindex 3= index 1++";
	cout << "\nIndex 1= " << id1.getIndex();
	cout << "\nIndex 3= " << id3.getIndex();
	id4 = ++id2;
	cout << "\nindex 4= ++index 2";
	cout << "\nIndex 2= " << id2.getIndex();
	cout << "\nIndex 4= " << id4.getIndex() << endl;
	cout << "\nDecrement Operator";
	cout << "\nValue in index 1= " << id1.getIndex();
	cout << "\nValue in index 2= " << id2.getIndex();
	cout << "\nValue in index 3= " << id3.getIndex();
	cout << "\nValue in index 4= " << id4.getIndex();
	id3 = id1--;
	cout << "\nindex 3= index 1--";
	cout << "\nIndex 1= " << id1.getIndex();
	cout << "\nIndex 3= " << id3.getIndex();
	id4 = --id2;
	cout << "\nindex 4= --index 2";
	cout << "\nIndex 2= " << id2.getIndex();
	cout << "\nIndex 4= " << id4.getIndex() << endl;
	cout << "\nNegate Operator";
	cout << "\nValue in index 1= " << id1.getIndex();
	cout << "\nValue in index 3= " << id3.getIndex();
	id1 = -id3;
	cout<<"\nindex1 = -index3";
	cout << "\nIndex 1= " << id1.getIndex();
	cout << "\nIndex 3= " << id3.getIndex();
	return 0;
}

