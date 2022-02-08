#include <iostream>
#include "Rel.h"

using namespace std;

int main() {
    Rel<char,float>a('a',2.14);
    a.push('b',42.20);
    a.push('c',24.69);
    cout << a['a'] << endl;
    cout << a['b'] << endl;
    cout << a['c'] << endl;

    Rel<string,int>b("Cleber",24);
    b.push("Ademir", 69);
    b.push("Lincoln",20);
    cout << b["Cleber"] << endl;
    cout << b["Ademir"] << endl;
    cout << b["Lincoln"] << endl;
    return 0;
}
