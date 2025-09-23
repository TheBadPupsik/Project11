#include "MyString.h"
#include <iostream>
using namespace std;

MyString::MyString()
{
	length = 80;
	str = new char[length];
	count1++;
}

MyString::MyString(int size)
{
	length = size;
	str = new char[length];
	count1++;
}

MyString::MyString(const char* s)
{
	length = strlen(s);
	str = new char[length + 1];
	strcpy_s(str, length + 1, s);
	count1++;
}

MyString::MyString(const MyString& obj)
{
	length = obj.length;
	str = new char[length + 1];
	strcpy_s(str, length + 1, obj.str);
	count1++;
}

MyString::~MyString()
{
	delete[] str;
	count1--;
}

void MyString::Print()
{
	cout << str << endl;
} 

void MyString::Input()
{
	cout << "Enter string: ";
	cin.getline(str, length);
}

bool MyString::MyStrStr(const char* s)
{
	char* temp = strstr(str, s);
	if (temp != nullptr) {
		return true;
	}
	else{
		return false;
	}
}

int MyString::MyChr(char c)
{
	char* temp = strchr(str, c);
	if (temp != nullptr) {
		return temp - str;
	}
	else {
		return -1;
	}
}

int MyString::MyStrLen()
{
	return strlen(str);
}

void MyString::MyStrcpy(MyString& obj)
{
	if (length < obj.length) {
		delete[] str;
		length = obj.length;
		str = new char[length + 1];
	}
	strcpy_s(str, length + 1, obj.str);
}

void MyString::MyStrCat(MyString& b)
{
	int newLength = length + b.length;
	char* temp = new char[newLength + 1];
	strcpy_s(temp, length + 1, str);
	strcat_s(temp, newLength + 1, b.str);
	delete[] str;
	str = temp;
	length = newLength;
}

void MyString::MyDelChr(char c)
{
    if (!str) return;
    int src = 0, dst = 0;
    int realLen = strlen(str);
    while (str[src]) {
        if (str[src] != c) {
            str[dst++] = str[src];
        }
        src++;
    }
    str[dst] = '\0';
    length = dst;
}

int MyString::MyStrCmp(MyString& b)
{
	return strcmp(str, b.str);
}

int MyString::ÑonstructorMove(MyString&& obj)
{
	str = obj.str;
	length = obj.length;
	obj.str = nullptr;
	obj.length = 0;
	return length;
}

int MyString::count1 = 0;
void MyString::getCount()
{
    cout << "Static: " << count1 << endl;
}
