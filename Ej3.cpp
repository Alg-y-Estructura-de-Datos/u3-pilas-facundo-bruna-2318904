#include <iostream>
using namespace std;
#include "Pila/Pila.h"
void eliminar(Pila<int>&pila,int n){
    Pila<int>aux;
    bool visto= false;
    bool repetido= false;
    int elemento;
    while (!pila.esVacia()){
        elemento=pila.pop();
        if(elemento==n&&visto==false){
            visto= true;
            aux.push(elemento);
        }
        else if(elemento==n&&visto== true){repetido= true;}else if(elemento!=n){aux.push(elemento);}

        }
    while (!aux.esVacia()){
        pila.push(aux.pop());
    }
    if(repetido== false){
        while (!pila.esVacia()){
           elemento=pila.pop();
           if(elemento!=n){aux.push(elemento);}
        }
        while (!aux.esVacia()){
            pila.push(aux.pop());
        }
    }
    }

int main() {
    Pila<int>pila1;
    pila1.push(2);
    pila1.push(5);
    pila1.push(3);
    pila1.push(9);
    int n;

    cout<<"ingrese el elemento a eliminar\n";
    cin>>n;
    eliminar(pila1,n);
    while (!pila1.esVacia()){
        cout<<pila1.pop();
    }
    return 0;
}