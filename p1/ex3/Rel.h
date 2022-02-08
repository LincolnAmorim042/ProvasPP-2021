//
// Created by linco on 20/07/2021.
//

#ifndef P1E3_REL_H
#define P1E3_REL_H

#include <iostream>

template <typename t1, typename t2>
class Rel{
private:
    t1 *p1 = new t1[2];
    t2 *p2 = new t2[2];
    int total=2;
    int ocp=0;

public:
    Rel(t1 a, t2 b){
        ocp++;
        p1[0] = a;
        p2[0] = b;
    }

    Rel(int size, t1 *pointer, t2 *pointer2){
        p1 = new t1[size];
        p2 = new t2[size];
        for (int i = 0; i < size; i++) {
            p1[i] = pointer[i];
            p2[i] = pointer2[i];
        }
        ocp = size;
        total = size*2;
    }

    ~Rel(){
        delete[] p1;
        delete[] p2;
    }

    void push(t1 a, t2 b){
        if (ocp == 0){
            ocp++;
            p1[0] = a;
            p2[0] = b;
        }else if (ocp + 1 > total){
            Rel aux(total, p1, p2);
            delete[] p1;
            delete[] p2;
            total *= 2;
            p1 = new t1[total];
            p2 = new t2[total];
            for (size_t i = 0; i < ocp; i++){
                p1[i] = aux.p1[i];
                p2[i] = aux.p2[i];
            }
            p1[ocp] = a;
            p2[ocp] = b;
            ocp++;
        }else{
            p1[ocp] = a;
            p2[ocp] = b;
            ocp++;
        }
    }

    t2 operator[](t1 a){
        for (int i = 0; i < ocp; i++){
            if (p1[i] == a)
                return p2[i];
        }
        return -1;
    }

};

#endif //P1E3_REL_H
