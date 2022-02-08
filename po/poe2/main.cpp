#include <iostream>
#include "geometricas.h"
#include "Formas.h"

using namespace std;
int main() {
    Formas teste;
    teste.addFormas(triangulo(5,2));
    teste.addFormas(quadrado(2,2));
    teste.addFormas(circulo(15));

    cout<< teste.calculaArea() <<endl;
    return 0;
}
