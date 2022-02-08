//
// Created by linco on 20/07/2021.
//

#ifndef P1E2_CHARINT_H
#define P1E2_CHARINT_H


class charInt {
private:
    int* mais = new int[2]{0,0};
    unsigned char* menos = new unsigned char[2];
    int ocp = 0;
    int max = 2;
public:
    charInt();
    void sort();
    void push(int);
    void remI(int);
    void remC(unsigned char);
    void show();
};


#endif //P1E2_CHARINT_H
