//
// Created by linco on 16/11/2021.
//

#include "Cilindro.h"

float Cilindro::getR() const {
    return r;
}

void Cilindro::setR(float r) {
    Cilindro::r = r;
}

float Cilindro::getH() const {
    return h;
}

void Cilindro::setH(float h) {
    Cilindro::h = h;
}

double Cilindro::superficie() {
    return (2*3.14*r*h + 2*3.14*r*r);
}

double Cilindro::volume() {
    return (3.14*r*r*h);
}

Cilindro::Cilindro(float r, float h) : r(r), h(h) {}
