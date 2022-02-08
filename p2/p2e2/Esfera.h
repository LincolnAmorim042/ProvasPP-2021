//
// Created by linco on 16/11/2021.
//

#ifndef P2E2_ESFERA_H
#define P2E2_ESFERA_H
#include "Rrr.h"

class Esfera: public Rrr {
private:
    float r;
public:
    float getR() const;
    void setR(float r);
    double superficie() override;
    double volume() override;

    explicit Esfera(float r);
};


#endif //P2E2_ESFERA_H
