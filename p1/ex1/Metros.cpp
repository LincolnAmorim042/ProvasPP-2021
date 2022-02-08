//
// Created by linco on 20/07/2021.
//

#include "Metros.h"

Metros::Metros(float val) : val(val) {}

Metros::~Metros() {}

float Metros::getVal() const {
    return val;
}

void Metros::setVal(float val) {
    Metros::val = val;
}

Metros Metros::operator+(float x) {
    float y = val+x;
    return y;
}

float Metros::operator-(float x) {
    float y = val-x;
    return y;
}

float Metros::operator++() {
    return val++;
}

float Metros::operator++(int x) {
    return val++;
}

float Metros::operator--() {
    return val--;
}

float Metros::operator--(int x) {
    return val--;
}

bool Metros::operator==(float x) {
    if(val==x){
        return true;
    }else{
        return false;
    }

}

bool Metros::operator!=(float x) {
    if(val!=x){
        return true;
    }else{
        return false;
    }
}

bool Metros::operator>(float x) {
    if(val>x){
        return true;
    }else{
        return false;
    }
}

bool Metros::operator<(float x) {
    if(val<x){
        return true;
    }else{
        return false;
    }
}

bool Metros::operator>=(float x) {
    if(val>=x){
        return true;
    }else{
        return false;
    }
}

bool Metros::operator<=(float x) {
    if(val<=x){
        return true;
    }else{
        return false;
    }
}



