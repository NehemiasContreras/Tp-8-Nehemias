#include <iostream>
#include <string>

using namespace std;

int contarpalabras(const string &cadena) {
    int contador = 0;
    bool enpalabra = false;

    for (size_t i = 0; i < cadena.size(); i++) {
        if (cadena[i] != ' ') {
            if (!enpalabra) {
                contador++;
                enpalabra = true;
            }
        } else {
            enpalabra = false;
        }
    }
    return contador;
}

int main() {
    string cadena;
    cout<<"Ingresa una cadena de texto: "<<endl;
    getline(cin, cadena);

    int totalpalabras = contarpalabras(cadena);
    cout<<"La cantidad de palabras es: "<<totalpalabras<<endl;

    return 0;
}

