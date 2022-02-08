//
// Created by linco on 11/01/2022.
//

#ifndef POE2_GEOMETRICAS_H
#define POE2_GEOMETRICAS_H


#include <vector>

using namespace std;
class geometricas {
public:
    geometricas()= default;
    virtual float getArea() = 0;
};

class triangulo: public geometricas{
private:
    float area, altura, base;
public:
    triangulo(float h, float b): area(0), base(b), altura(h){area = (altura*base)/2; };
    float getArea() override{ return area; };
};
class quadrado: public geometricas{
private:
    float area, altura, base;
public:
    quadrado(float h, float b): area(0), base(b), altura(h){area = (altura*base); };
    float getArea() override{ return area; };
};
class circulo: public geometricas{
private:
    float area, raio;
public:
    explicit circulo(float r): area(0), raio(r){area = raio*raio*3.1416; };
    float getArea() override{ return area; };
};


#endif //POE2_GEOMETRICAS_H
