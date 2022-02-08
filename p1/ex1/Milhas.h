//
// Created by linco on 20/07/2021.
//

#ifndef P1E1_MILHAS_H
#define P1E1_MILHAS_H

#include "Metros.h"

class Milhas {
private:
    float val;
public:
    Milhas(float val);

    virtual ~Milhas();

    float getVal() const;
    void setVal(float val);
    operator Metros();
};


#endif //P1E1_MILHAS_H
