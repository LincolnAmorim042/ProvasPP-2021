//
// Created by linco on 11/01/2022.
//

#ifndef POE2_FORMAS_H
#define POE2_FORMAS_H


#include "geometricas.h"
#include <vector>
#include <iostream>

using namespace std;
class Formas: private vector<geometricas*>{
private:
    float areaTotal;
public:
    Formas();
    ~Formas();

    void addFormas(triangulo geo);
    void addFormas(quadrado geo);
    void addFormas(circulo geo);

    float calculaArea();
};


#endif //POE2_FORMAS_H
