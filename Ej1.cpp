#include <iostream>
using namespace std;
#include "Pila/Pila.h"
int main() {
    Pila<char>Palabra;
    cout << "ingrese la palabra" << endl;
    string palabra;
    cin>>palabra;
    for (int i = 0; i < palabra.length() ;++i) {
       Palabra.push(palabra[i]);
    }
    while (!Palabra.esVacia()){
        cout<<Palabra.pop();
    }
    return 0;
}
