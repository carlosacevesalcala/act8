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
    for(size_t i = 0; i<5; i++){
        cout<<"La marca es: "<<arreglo[i].getmarca()<<endl;
        cout<<"El sistema operativo es: "<<arreglo[i].getso()<<endl;
        cout<<"La cantidad de ram es: "<<arreglo[i].getram()<<"gb"<<endl;
        cout<<"La cantidad de almacenamiento es: "<<arreglo[i].gethdd()<<"gb"<<endl;
        cout<<endl;

    }
}