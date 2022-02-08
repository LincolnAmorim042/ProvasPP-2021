//
// Created by linco on 11/01/2022.
//

#ifndef POE3_BASENUMERICA_H
#define POE3_BASENUMERICA_H

#include <string>
#include <vector>
using namespace std;

class BaseNumerica: private vector<string>{
private:
    int n;
public:
    BaseNumerica(int);
    void leEntradas();
    void convert();
    string dectoBin(string);
    string dectoHex(string);
    string dectoOct(string);
    string bintoDec(string);
    string hextoDec(string);
    string octtoDec(string);
};


#endif //POE3_BASENUMERICA_H
