#include <iostream>
#include "charInt.h"

using namespace std;

int main() {
    charInt a;
    a.push(257);
    a.show();
    a.push(1000);
    a.show();
    a.push(500);
    a.show();
    a.push(400);
    a.show();

    a.remC(244);
    a.show();
    a.remI(400); //esse tá com problema
    a.show();
    return 0;
}
