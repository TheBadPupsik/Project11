#include<iostream>
#include "MyString.h"
using namespace std;


int main()
{
	MyString obj;
	obj.Input();
	obj.Print();

	MyString obj2("Hello World");
	obj2.Print();

	cout << endl;

	cout << "Length = " << obj.MyStrLen() << endl;
	cout << "Length = " << obj2.MyStrLen() << endl;

	cout << endl;


	//MyString rez = obj + obj2;
	//rez.Print();

	//MyString rez2 = obj + "!!!";
	//rez2.Print();

	//MyString rez3 = obj + '?';
	//rez3.Print();

	//cout << endl;

	//if (obj > obj2)
	//{
	//	cout << "First is bigger" << endl;
	//}
	//else
	//{
	//	cout << "Second  is bigger" << endl;
	//}

	//if (obj == obj2)
	//{
	//	cout << "They are both" << endl;
	//}

	//if (obj != obj2)
	//{
	//	cout << "First != second" << endl;
	//}

	//if (obj >= obj2)
	//{
	//	cout << "First >= Second" << endl;
	//}

	//if (obj < obj2)
	//{
	//	cout << "First < second" << endl;
	//}

	//if (obj <= obj2)
	//{
	//	cout << "First <= second" << endl;
	//}

	//MyString obj3 = ++obj2;
	//MyString obj4 = obj2++;

	//obj3.Print();
	//obj4.Print();

	//MyString obj5 = --obj2;
	//MyString obj6 = obj2--;
	//obj5.Print();
	//obj6.Print();

	obj = obj2;
	obj.Print();


	cout << endl;

	MyString::getCount();
}