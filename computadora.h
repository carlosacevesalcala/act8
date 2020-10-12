#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>

using namespace std;

class Computadora{
private:
    string marca;
    string so;
    int ram;
    int hdd;
public:
    Computadora();
    
    void setmarca(const string &v);
    string getmarca();
    void setso(const string &v);
    string getso();
    void setram(int v);
    int getram();
    void sethdd(int v);
    int gethdd();
};

#endif