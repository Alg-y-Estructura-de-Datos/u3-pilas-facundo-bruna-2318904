#include <iostream>
using namespace std;
#include "Pila/Pila.h"
void escribir(Pila<string>&acciones,Pila<string>&palabras,string accion,string palabra){
string accioncompleta=accion+" "+palabra;
acciones.push(accioncompleta);
palabras.push(palabra);
}
void deshacer(Pila<string>&acciones,Pila<string>&palabras){
    if(!acciones.esVacia()){
        string accion=acciones.pop();
        palabras.pop();
        cout<<"deshaciendo accion: "<<accion<<endl;
    } else{cout<<"no hay ninguna ccion a deshacer\n";}
}
int main(){
    Pila<std::string> pilaAcciones;
    Pila<std::string> pilaTexto;

    escribir(pilaAcciones, pilaTexto, "Escribir", "Hola");
    escribir(pilaAcciones,pilaTexto,  "Escribir", "Mundo");
   escribir(pilaAcciones,pilaTexto, "Borrar", "Mundo");
    deshacer(pilaAcciones,pilaTexto);
    deshacer(pilaAcciones,pilaTexto);

    cout << "Texto actual:" << endl;

    while(pilaTexto.esVacia()==0){
        cout << pilaTexto.pop() << endl;
    }
    return 0;
}