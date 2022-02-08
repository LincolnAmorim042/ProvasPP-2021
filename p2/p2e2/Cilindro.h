//
// Created by linco on 16/11/2021.
//

#ifndef P2E2_CILINDRO_H
#define P2E2_CILINDRO_H
#include "Rrr.h"

class Cilindro : public Rrr{
private:
    float r, h;
public:
    double superficie() override;
    double volume() override;
    float getR() const;
    void setR(float r);
    float getH() const;
    void setH(float h);

    Cilindro(float r, float h);
};


#endif //P2E2_CILINDRO_H
