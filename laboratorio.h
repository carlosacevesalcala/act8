#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"

class Laboratorio
{
    Computadora arreglo[5];
    size_t cont;
public:
    Laboratorio();

    void agregaralfinal(const Computadora &c);
    void mostrar();
    friend Laboratorio& operator<<(Laboratorio &l, const Computadora &c)
    {
        l.agregaralfinal(c);

        return l;
    }
};


#endif