#include <iostream>
#include "Objetos.h"

using namespace std;

int main() {
    Objetos obj;
    Cilindro a(2, 2);
    Esfera b(2);
    Cilindro c(3, 3);
    Esfera d(3);
    obj.insEsfera(b);
    obj.insCilindro(a);
    obj.insEsfera(d);
    obj.insCilindro(c);
    cout << obj.totalSuperficie() << endl;
    cout << obj.totalVolume() << endl;
    return 0;
}
