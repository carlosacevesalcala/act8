#include <iostream>
#include <string>
#include "laboratorio.h"
using namespace std;

int main(){

    Laboratorio l1;
    Computadora c1;
    Computadora c2;
    
    c1.setmarca("acer");
    c1.setso("windows");
    c1.setram(8);
    c1.sethdd(1000);

    c2.setmarca("hp");
    c2.setso("windows");
    c2.setram(12);
    c2.sethdd(2000);

    l1.agregaralfinal(c1);
    l1.agregaralfinal(c2);
    
    //cout << c1;
    Computadora c3;
    cin>>c3;
    l1 << c3;
    l1.mostrar();

    return 0;
}