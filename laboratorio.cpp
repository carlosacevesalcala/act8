#include "laboratorio.h"

Laboratorio::Laboratorio(){
    cont=0;
}

void Laboratorio::agregaralfinal(const Computadora &c){
    if(cont<5){
        arreglo[cont] = c;
        cont++;
    }
    else{
        cout<<"arreglo lleno"<<endl;
    }
}

void Laboratorio::mostrar(){
    cout<<left;
    cout<<setw(10)<<"marca";
    cout<<setw(20)<<"sistema operativo";
    cout<<setw(10)<<"ram";
    cout<<setw(10)<<"almacenamiento";
    cout<<endl;
    for(size_t i = 0; i<cont; i++){
        Computadora &c = arreglo[i];
        cout<<c;

    }
}