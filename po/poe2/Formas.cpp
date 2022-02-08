//
// Created by linco on 11/01/2022.
//

#include "Formas.h"
Formas::Formas(): areaTotal(0) {

}

Formas::~Formas() {
    vector<geometricas*>::iterator it;
    for (it = begin(); it != end(); ++it) {
        delete *it;
    }
}
void Formas::addFormas(triangulo geo) {
    push_back(new triangulo(std::move(geo)));
}
void Formas::addFormas(quadrado geo) {
    push_back(new quadrado(std::move(geo)));
}
void Formas::addFormas(circulo geo) {
    push_back(new circulo(std::move(geo)));
}
float Formas::calculaArea() {
    vector<geometricas*>::iterator it;
    for (it = begin(); it != end(); ++it) {
        areaTotal = (*it)->getArea() + areaTotal;
    }
    return areaTotal;
}