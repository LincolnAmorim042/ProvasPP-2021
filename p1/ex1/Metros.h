//
// Created by linco on 20/07/2021.
//

#ifndef P1E1_METROS_H
#define P1E1_METROS_H


class Metros {
private:
    float val;
public:
    Metros(float val);
    virtual ~Metros();
    float getVal() const;
    void setVal(float val);
    Metros operator+(float);
    float operator-(float);
    float operator++();
    float operator++(int);
    float operator--();
    float operator--(int);
    bool operator==(float);
    bool operator!=(float);
    bool operator>(float);
    bool operator<(float);
    bool operator>=(float);
    bool operator<=(float);

};


#endif //P1E1_METROS_H
