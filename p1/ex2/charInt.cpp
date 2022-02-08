//
// Created by linco on 20/07/2021.
//
#include <iostream>
#include "charInt.h"

using namespace std;

charInt::charInt() = default;

void charInt::sort() {
    int aux1;
    unsigned char aux2;
    for (int i = 0; i < ocp - 1; i++) {
        for (int j = ocp - 1; i < j; j--) {
            if (mais[j] < mais[j-1]) {
                aux1=mais[j];
                aux2=menos[j];
                mais[j]=mais[j-1];
                menos[j]=menos[j-1];
                mais[j-1]=aux1;
                menos[j-1]=aux2;
            }else if (mais[j] == mais[j-1] && menos[j] < menos[j-1]) {
                aux1 = mais[j];
                aux2 = menos[j];
                mais[j] = mais[j - 1];
                menos[j] = menos[j - 1];
                mais[j - 1] = aux1;
                menos[j - 1] = aux2;

            }
        }
    }
}
void charInt::push(int v) {
    ocp++;
    if(ocp>max){
        max=max*2;
        mais[ocp-1]=v/256;
        menos[ocp-1]=(char)(v%256);
        for(int i=ocp; i<max; i++){
            mais[i]=0;
        }
    }else{
        mais[ocp-1]=v/256;
        menos[ocp-1]=(char)(v%256);
    }
    sort();
}

void charInt::remI(int v) {
    v=v/256;
    for(int j=0;j<max;j++) {
        for (int i = j; i < ocp; i++) {
            if (mais[i] == v) {
                mais[i] = mais[i + 1];
                menos[i] = menos[i + 1];
                ocp--;
                if (ocp < (max / 2)) {
                    max = max / 2;
                }
            }
        }
    }
}

void charInt::remC(unsigned char v) {
    for(int i=0;i<ocp; i++) {
        if(menos[i]==v){
            mais[i]=mais[i+1];
            menos[i]=menos[i+1];
            ocp--;
            if(ocp<(max/2)){
                max=max/2;
            }
        }
    }
}

void charInt::show() {
    for(int i=0;i<ocp; i++) {
        cout << "bit mais significativo: " << mais[i] << endl;
        cout << "bit menos signitficativo: " << (int)menos[i] << endl;
    }
    cout << endl;
}


