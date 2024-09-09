#include <iostream>
using namespace std;
#include "Pila/Pila.h"
void sumanro(Pila<int>enteros,int n){
    Pila<int>aux;
    int actual;
    cout<<"pila original:\n";
    while (!enteros.esVacia()){
        actual=enteros.pop();
        aux.push(actual+n);
        cout<<actual<<endl;
    }
    while (!aux.esVacia()){
        enteros.push(aux.pop());
    }
    cout<<"pila despues de sumar: \n";
    while (!enteros.esVacia()){
        cout<<enteros.pop()<<endl;
    }
}
int main(){
    Pila<int>pila;
    int cnumeros;
    cout<<"ingrese la cantidad de elementos de la lista\n";
    cin>>cnumeros;
    cout<<"ingrese el numero que desea sumar a los elementos de la lista\n";
    int n;
    cin>>n;
    cout<<"a continuacion ingrese los elementos de la pila\n";
    int num;
    for (int i = 0; i < cnumeros; ++i) {
        cin>>num;
        pila.push(num);
    }
    sumanro(pila,n);

    return 0;
}
