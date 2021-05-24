#pragma once
#include <iostream>
#include<string>
#include <vector>
using namespace std;
class River {
public:
	string name,location;
	int length;
	River() {

	}
	void print() {
		cout << name << " " << length <<" "<<location<< endl;

	}
	friend istream& operator >> (istream& in, River& s);
	friend ostream& operator << (ostream& out, River& s);

};

