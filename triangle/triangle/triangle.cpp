#include "Triangle.h"
#include <iostream>
#include<algorithm>
using namespace std;
istream& operator >> (istream& in, River& s) {
    in >> s.a;
    in >> s.b;
    in >> s.c;
    return in;
}
ostream& operator << (ostream& out, River& s) {
    out << s.a << " ";
    out << s.b << " ";
    out << s.c << " ";
    return out;
}
int perimeter(River a) {
    return a.a + a.b + a.c;
}
int main()
{
    vector <River> v(3);
    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
        v[i].print();
        v[i].fart();
        perimeter(v[i]);
    }
}
// mas me es ise gavakete mgoni boloc titqmis zustad igive gamomividoda da barem agar gavakete anu gavaertiane
