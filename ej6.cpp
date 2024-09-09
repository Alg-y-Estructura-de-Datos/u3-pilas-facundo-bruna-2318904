#include <iostream>
using namespace std;
#include "Pila/Pila.h"
void registrarmovimiento(Pila<string>&registrodemovimiento,bool movimiento,string area){
    if(movimiento== true){
        registrodemovimiento.push(area);
    } else{registrodemovimiento.pop();}
}
int main(){
    Pila<std::string> pilaMovimientos;

    registrarmovimiento(pilaMovimientos, 1, "Recepcion");
    registrarmovimiento(pilaMovimientos, 1, "Oficina");
    registrarmovimiento(pilaMovimientos, 1, "Sala de Reuniones");
    registrarmovimiento(pilaMovimientos, 0, "Sala de Reuniones");
    registrarmovimiento(pilaMovimientos, 1, "GYM");
    cout<<"el recorrido invertido es: \n";
    while (!pilaMovimientos.esVacia()){
        cout<<pilaMovimientos.pop()<<endl;
    }
}
