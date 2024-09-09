/*#include <iostream>
using namespace std;
#include "Pila/Pila.h"
void reemplazar(Pila<int>&enteros,int viejo,int nuevo){
    Pila<int>aux;
    while (!enteros.esVacia()){
        int actual=enteros.pop();
        if(actual==viejo){
            aux.push(nuevo);
        } else{aux.push(actual);}
    }
    while(!aux.esVacia()){
        enteros.push(aux.pop());
    }
}
void mostrarpila(Pila<int>&pila){
    Pila<int>aux;
    while (!pila.esVacia()){
    int elemento=pila.pop();
    cout<<elemento<<endl;
    aux.push(elemento);}
    while (!aux.esVacia()){
        pila.push(aux.pop());
    }
}

int main(){
    Pila<int> pila;
    pila.push(3);
    pila.push(3);
    pila.push(2);
    pila.push(5);
    pila.push(3);
    pila.push(9);
cout<<"pila antes del reemplazo\n";
    mostrarpila(pila);
    reemplazar(pila,3,1);
    mostrarpila(pila);
}*/
/* #include <iostream>
using namespace std;
#include "Pila/Pila.h"
void eliminar(Pila<int>&pila,int n){
    bool visto= false;
    bool repetido= false;
    Pila<int>aux;
    while (!pila.esVacia()){
        int actual=pila.pop();
        if(actual==n&&visto== false){
         visto= true;
         aux.push(actual);
        } else if(actual!=n){aux.push(actual);} else if (actual==n&&visto== true){
            repetido= true;
        }
    }
    if (repetido== false){
        while (!aux.esVacia()){
            int actual=aux.pop();
            if(actual!=n){pila.push(actual);}
        }
    } else{ while (!aux.esVacia()){
        pila.push(aux.pop());
    }}
}
void mostrarpila(Pila<int>&pila){
    Pila<int>aux;
    while (!pila.esVacia()){
        int elemento=pila.pop();
        cout<<elemento<<endl;
        aux.push(elemento);}
    while (!aux.esVacia()){
        pila.push(aux.pop());
    }
}
int main(){
    Pila<int> pila;
    pila.push(3);
    pila.push(3);
    pila.push(2);
    pila.push(5);
    pila.push(3);
    pila.push(9);
    cout<<"pila antes de eliminar\n";
    mostrarpila(pila);
    eliminar(pila,2);
    mostrarpila(pila);
}*/
/* #include <iostream>
using namespace std;
#include "Pila/Pila.h"
int suma(Pila<int>&enteros,int n){
    int suma=0;
    while (!enteros.esVacia()){
        int actual=enteros.pop();
        if(actual==n){
            return suma;
        } else{suma=suma+actual;}
    }
    return suma;
}
void mostrarpila(Pila<int>&pila){
    Pila<int>aux;
    while (!pila.esVacia()){
        int elemento=pila.pop();
        cout<<elemento<<endl;
        aux.push(elemento);}
    while (!aux.esVacia()){
        pila.push(aux.pop());
    }
}

int main(){
    Pila<int> pila;
    pila.push(3);
    pila.push(5);
    pila.push(2);
    pila.push(8);
    pila.push(7);

    cout<<"pila original: \n";
    mostrarpila(pila);
  cout<<"la suma de los elemento hasta el numero ingresado es: "<<  suma(pila,1);
    return 0;
}*/