#include <iostream>
using namespace std;
#include "Pila/Pila.h"
void reemplazar(Pila<int>&pila,int nuevo,int viejo){
    Pila<int>aux;
    int elemento;
    while (!pila.esVacia()){
        elemento=pila.pop();
        if(elemento==viejo){
            aux.push(nuevo);
        } else{aux.push(elemento);
       }
    }
    while (!aux.esVacia()){
        pila.push(aux.pop());
    }
}
int main() {
Pila<int>pila1;
    pila1.push(9);
    pila1.push(3);
    pila1.push(5);
    pila1.push(2);
    pila1.push(3);
    pila1.push(3);
int n;

    cout<<"ingrese el elemento nuevo\n";
    cin>>n;
    int viejo;
    cout<<"ingrese el elemento que desea reemplazar\n";
    cin>>viejo;
    reemplazar(pila1,n,viejo);
    while (!pila1.esVacia()){
        cout<<pila1.pop();
    }
    return 0;
}
