#include <iostream>
using namespace std;
#include "Pila/Pila.h"
void suma(Pila<int>enteros,int n){
   bool encontrado= false;
   int suma=0,actual;

    cout<<"lista original:\n";
    while (!enteros.esVacia()){
        actual=enteros.pop();
        if(actual==n){
            encontrado= true;
        } else if(encontrado== false){suma=suma+actual;}

       cout<<actual<<endl;
    }
    cout<<"la suma es: "<<suma;

}
int main(){
Pila<int>pila;
pila.push(3);
    pila.push(5);
    pila.push(2);
    pila.push(8);
    pila.push(7);
    suma(pila,1);
}