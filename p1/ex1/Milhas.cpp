//
// Created by linco on 20/07/2021.
//

#include "Milhas.h"

Milhas::Milhas(float val) : val(val) {}

Milhas::~Milhas() {}

float Milhas::getVal() const {
    return val;
}

void Milhas::setVal(float val) {
    Milhas::val = val;
}

Milhas::operator Metros() {
    return Metros(val*1609.34);
}

