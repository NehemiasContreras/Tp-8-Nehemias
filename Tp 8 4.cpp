#include <iostream>
#include <string>

using namespace std;

bool buscarPalabra(const string &cadena, const string &palabra) {
    return cadena.find(palabra) != string::npos;
}

void imprimirResultado(bool encontrado) {
    if (encontrado) {
        cout << "La palabra se encuentra en la cadena.";
    } else {
        cout << "La palabra no se encuentra en la cadena.";
    }
}

int main() {
    string cadena, palabra;

    cout << "Ingresa una cadena: ";
    getline(cin, cadena);
    cout << "Ingresa la palabra a buscar: ";
    cin >> palabra;

    bool resultado = buscarPalabra(cadena, palabra);
    imprimirResultado(resultado);

    return 0;
}

