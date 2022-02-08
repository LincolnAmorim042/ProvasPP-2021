//
// Created by linco on 16/11/2021.
//

#ifndef P2E1_INTORD_H
#define P2E1_INTORD_H
#include <vector>

using namespace std;

class intOrd: vector<int> {
public:
    void insert(int);
    int operator[](int);
    void remove(int);
    int getSize();

};


#endif //P2E1_INTORD_H
