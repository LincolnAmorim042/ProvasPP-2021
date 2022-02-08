//
// Created by linco on 16/11/2021.
//

#ifndef P2E2_OBJETOS_H
#define P2E2_OBJETOS_H
#include "Esfera.h"
#include "Cilindro.h"
#include <vector>

using namespace std;

class Objetos : public Esfera, public Cilindro{
private:
    vector<Esfera> esferas;
    vector<Cilindro> cilindros;
public:
    void insEsfera(const Esfera&);
    void insCilindro(const Cilindro&);
    double totalVolume();
    double totalSuperficie();

    Objetos();

};


#endif //P2E2_OBJETOS_H
