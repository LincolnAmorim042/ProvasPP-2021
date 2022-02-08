//
// Created by linco on 16/11/2021.
//

#include "Esfera.h"

double Esfera::superficie() {
    return (4*3.14*r*r);
}

double Esfera::volume() {
    return ((4*3.14*r*r*r)/3);
}

float Esfera::getR() const {
    return r;
}

void Esfera::setR(float r) {
    Esfera::r = r;
}

Esfera::Esfera(float r) : r(r) {}
