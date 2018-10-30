// FunctionObject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

class Larger_than {
private:
	int v;
public:
	Larger_than(int vv) : v{ vv } {}
	bool operator()(int x) {
		return x > v;
	}
};

int main()
{
	Larger_than lt19{ 19 };
	cout << lt19(20) << endl;
	cout << lt19(19) << endl;
	cout << lt19(15) << endl;

    return 0;
}

