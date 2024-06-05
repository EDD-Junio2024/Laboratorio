#include <iostream>
using namespace std;

class Nodo
{
private:
    /* data */
    int dato;
    Nodo *siguiente;
public:
    Nodo(int dato);
    Nodo *getSiguiente();
    void setSiguiente(Nodo *siguiente);
    int getDato();
    void setDato(int dato);
    ~Nodo();
};

Nodo::Nodo(int dato)
{
    this->dato = dato;
    this->siguiente = nullptr;
}

Nodo* Nodo::getSiguiente(){
    return this->siguiente;
}

void Nodo::setSiguiente(Nodo *siguiente){
    this->siguiente = siguiente;
}

int Nodo::getDato(){
    return this->dato;
}


Nodo::~Nodo()
{
}
