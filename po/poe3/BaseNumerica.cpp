//
// Created by linco on 11/01/2022.
//

#include "BaseNumerica.h"
#include <iostream>
#include <cmath>

using namespace std;

BaseNumerica::BaseNumerica(int n) : n(n) {}

void BaseNumerica::leEntradas() {
    for (int i = 0;  i < n; i++) {
        string a;
        cout << "Bi: ";
        cin >> a;
        push_back(a);
        cout << "Xi: ";
        cin >> a;
        push_back(a);
        cout << endl;
    }
}

void BaseNumerica::convert() {
    for (int i=0; i<2*n; i+=2){
        for(int j=1; j<2*n; j+=2){
            string a = this->at(i);
            if(a == "01"){

            }else if(a == "0123456789"){

            }else if(a == "0123456789ABCDEF"){

            }else if(a == "012345678"){

            }
        }
    }
    for(int i=0; i<2*n; i++){
        cout << this->at(i) << endl;
    }
}

string BaseNumerica::dectoBin(string b) {
    int num = stoi(b);
    long long valor_binario = 0;
    int resto, sequencial = 1;
    while (num != 0){
        resto = num % 2;
        num /= 2;
        valor_binario += resto * sequencial;
        sequencial *= 10;
    }
    char* a;
    itoa(valor_binario, a, 2);
    return a;
}

string BaseNumerica::dectoHex(string b) {
    int num = stoi(b);
    string a;
    return a;
}

string BaseNumerica::dectoOct(string b) {
    int num = stoi(b);
    int valor_octal = 0, sequencia = 1;
    while (num != 0){
        valor_octal += (num % 8) * sequencia;
        num /= 8;
        sequencia *= 10;
    }
    char* a;
    itoa(valor_octal,a,8);
    return a;
}

string BaseNumerica::bintoDec(string b) {
    int valor_decimal = 0, sequencial = 0, resto;
    int num = stoi(b);
    while (num != 0){
        resto = num % 10;
        num /= 10;
        valor_decimal += resto * pow(2, sequencial);
        ++sequencial;
    }
    char *a;
    itoa(valor_decimal, a, 10);
    return a;
}

string BaseNumerica::hextoDec(string b) {
    char *a;
    int num;
    itoa(num, a, 10);
    return a;
}

string BaseNumerica::octtoDec(string b) {
    char *a;
    int num = stoi(b);
    int valor_decimal = 0, sequencia = 0;
    while(num != 0){
        valor_decimal += (num % 10) * pow(8, sequencia);
        ++sequencia;
        num /= 10;
    }
    itoa(valor_decimal, a, 10);
    return a;
}
