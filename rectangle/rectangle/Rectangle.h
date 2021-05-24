#pragma once
#include <iostream>
#include<string>
#include <vector>
using namespace std;
class Rectangle {
public:
	int a,b;
	Rectangle() {

	}
	void fart() {

		cout << a * b << endl;
	}
	void print() {
		cout << a << " " << b << endl;
			 
	}
	friend istream& operator >> (istream& in, Rectangle& s);
	friend ostream& operator << (ostream& out, Rectangle& s);

};

