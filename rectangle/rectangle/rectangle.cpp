#include "Rectangle.h"
#include <iostream>
#include<algorithm>
istream& operator >> (istream& in, Rectangle& s) {
    in >> s.a;
    in >> s.b;
    return in;
}
ostream& operator << (ostream& out, Rectangle& s) {
    out << s.a<<" ";
    out << s.b<<" ";
    return out;
}
int main()
{
    vector <Rectangle> v(3);
    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << v[i] << endl;
        v[i].fart();
    }
}
