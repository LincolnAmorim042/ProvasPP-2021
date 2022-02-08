#include <iostream>
#include "intOrd.h"

int main() {
    intOrd a;
    a.insert(1);
    a.insert(3);
    a.insert(2);
    for(int i = 0; i<a.getSize(); i++) {
        cout << a[i] << endl;
    }
    a.remove(2);
    for(int i = 0; i<a.getSize(); i++) {
        cout << a[i] << endl;
    }

    return 0;
}
