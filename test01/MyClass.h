#pragma once

#include <string>
#include <iostream>
#include <stdlib.h>

using std::string;

class MyClass
{
public:
	MyClass();
	~MyClass();

	void func();

private:
	int arg = 0;
	string str();
	string str1 = "hello world!";
};

