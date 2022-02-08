//
// Created by linco on 16/11/2021.
//

#include "intOrd.h"

int intOrd::operator[](int x) {
    return this->at(x);
}

void intOrd::insert(int x) {
    this->push_back(x);
    if(this->size()>2) {
        for (size_t i = (this->size() - 1); i > 0; i--) {
            if (i - 1 != 0) {
                if (this->at(i) < this->at(i-1)) {
                    int aux = this->at(i);
                    this->at(i) = this->at(i-1);
                    this->at(i-1) = aux;
                }
            }
        }
    }
}

void intOrd::remove(int num) {
    for (auto i = this->begin(); i < this->end(); i++) {
        if (num == *i) {
            this->erase(i);
        }
    }
}

int intOrd::getSize() {
    return this->size();
}
