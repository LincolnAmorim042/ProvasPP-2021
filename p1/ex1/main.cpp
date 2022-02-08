#include <iostream>
#include "Metros.h"
#include "Milhas.h"

using namespace std;

int main() {
    Metros a(100);
    Milhas b(100);
    Metros c(b);
    cout << a.getVal() << endl;
    a=a+1;
    cout << a.getVal() << endl;
    c=c-1;
    cout << c.getVal() << endl;
    a++;
    cout << a.getVal() << endl;
    ++a;
    cout << a.getVal() << endl;
    a--;
    cout << a.getVal() << endl;
    --a;
    cout << a.getVal() << endl;
    cout << (a==100) << endl;
    cout << (a!=100) << endl;
    cout << (a>100) << endl;
    cout << (a<100) << endl;
    cout << (a>=100) << endl;
    cout << (a<=100) << endl;
    return 0;
}
