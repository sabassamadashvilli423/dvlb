#pragma once
#include <iostream>
#include<string>
#include <vector>
using namespace std;
class River {
public:
	int a, b, c;
	River() {

	}
	void print() {
		cout << a << " " << b << " " << c << endl;
	}
	void fart() {
		int p = (a + b + c) / 2;
		cout<<sqrt(p * (p - a) * (p - b) * (p - c))<<endl;
	}
	friend istream& operator >> (istream& in, River& s);
	friend ostream& operator << (ostream& out, River& s);
	friend int perimeter(River a);
};
