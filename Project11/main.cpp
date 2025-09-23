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

	cout << "Length = " << obj.MyStrLen() << endl;
	cout << "Length = " << obj2.MyStrLen() << endl;

	MyString::getCount();
}