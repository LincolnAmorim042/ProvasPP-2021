//
// Created by linco on 16/11/2021.
//

#include "Objetos.h"

double Objetos::totalVolume() {
    double volume = 0;
    for (int i=0; i<esferas.size(); i++){
        volume += esferas.at(i).volume();
    }
    for (int i=0; i<cilindros.size(); i++){
        volume += cilindros.at(i).volume();
    }
    return volume;
}

double Objetos::totalSuperficie() {
    double superficie = 0;
    for (int i=0; i<esferas.size(); i++){
        superficie += esferas.at(i).superficie();
    }
    for (int i=0; i<cilindros.size(); i++){
        superficie += cilindros.at(i).superficie();
    }
    return superficie;
}

void Objetos::insEsfera(const Esfera& x) {
    esferas.push_back(x);
}

void Objetos::insCilindro(const Cilindro& x) {
    cilindros.push_back(x);
}

Objetos::Objetos() : Esfera(0), Cilindro(0, 0) {}

