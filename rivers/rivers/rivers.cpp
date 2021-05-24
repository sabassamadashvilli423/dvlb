#include "River.h"
#include <iostream>
#include<algorithm>
istream& operator >> (istream& in, River& s) {
    in >> s.name;
    in >> s.length;
    in >> s.location;
    return in;
}
ostream& operator << (ostream& out, River& s) {
    out << s.name << " ";
    out << s.length << " ";
    out << s.location << " ";
    return out;
}
void biggest(vector<River> &v) {
    for (int j = 0; j < v.size(); j++) {
        for (int i = 0; i < v.size() - 1; i++) {
            if (v[i].length > v[i + 1].length) {
                swap(v[i], v[i + 1]);
            }
        }
     }
}
int main()
{
    vector <River> v(3);
    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }
    cout << endl;
    biggest(v);
        v[v.size()-1].print();
}
