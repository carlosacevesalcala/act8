#include "laboratorio.h"
#include <fstream>

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

void Laboratorio::respaldar_tabla()
{
    ofstream archivo("computadoras_tabla.txt");
    if (archivo.is_open()){
        archivo<<left;
        archivo<<setw(10)<<"marca";
        archivo<<setw(20)<<"sistema operativo";
        archivo<<setw(10)<<"ram";
        archivo<<setw(10)<<"almacenamiento";
        archivo<<endl;
        for(size_t i = 0; i<cont; i++){
            Computadora &c = arreglo[i];
            archivo<<c;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar()
{
    ofstream archivo("computadoras.txt");
    if (archivo.is_open()){
        for(size_t i = 0; i<cont; i++){
            Computadora &c = arreglo[i];
            archivo<<c.getmarca()<<endl;
            archivo<<c.getso()<<endl;
            archivo<<c.getram()<<endl;
            archivo<<c.gethdd()<<endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");
    if (archivo.is_open()){
        string temp;
        int ram;
        int hdd;
        Computadora c;

        while(true)
        {
            getline(archivo, temp);
            if(archivo.eof()){
                break;
            }
            c.setmarca(temp);
            getline(archivo, temp);
            c.setso(temp);
            getline(archivo, temp);
            ram = stoi(temp);
            c.setram(ram);
            getline(archivo, temp);
            hdd = stoi(temp);
            c.sethdd(hdd);

            agregaralfinal(c);
        }
    }
    archivo.close();
}