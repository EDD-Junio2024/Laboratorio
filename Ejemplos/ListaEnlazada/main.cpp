#include <iostream>
using namespace std;
#include "ListaSimple.h"

int main()
{
    ListaSimple miLista;
    miLista.insertarInicio(10);
    miLista.insertarInicio(5);
    miLista.insertarFinal(15);
    miLista.visualizarLista();
    cout << endl;
    //miLista.eliminarFinal();
    miLista.eliminarInicio();
    miLista.visualizarLista();
    return 0;
}