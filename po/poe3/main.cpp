#include <iostream>
#include "BaseNumerica.h"

using namespace std;
int main() {
    int n;
    cout << "n: ";
    cin >> n;
    cout << endl;

    BaseNumerica a(n);

    a.leEntradas();

    a.convert();
    return 0;
}
