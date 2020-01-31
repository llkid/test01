#include "MyClass.h"

using namespace::std;

MyClass::MyClass()
{
	cout << "构造函数";
	arg = 10 * 10;
	cout << arg << endl;
}

void MyClass::func()
{
	std::cout << (arg = 10) << std::endl;
	string tempStr = str();
	cout << tempStr << endl;
}

string MyClass::str()
{
	return string("hello world +++++++++++");
}

MyClass::~MyClass()
{
	cout << "析构函数";
}