#include <iostream>
using namespace std;
#include "Estatico.h"

int main(){
    Estatico d1, d2; //Declaración estatica, el objeto se almacena en stack
    Estatico *d3 = new Estatico(); //Declaración dinamica, el objeto se almacena en heap
    cout << d1.cuenta << endl;
    cout << d3->cuenta << endl;


}