#include <iostream>

using namespace std;

double bytesAKilobytes(double bytes) {
    return bytes / 1024;
}

double terabytesAMegabytes(double terabytes) {
    return terabytes * 1024 * 1024;
}

double gigabytesAPetabytes(double gigabytes) {
    return gigabytes / (1024 * 1024);
}

int main() {
    int opcion;
    double valor, resultado;

    cout<<"Seleccione la conversión que desea realizar:"<<endl;
    cout<<"1. Bytes a Kilobytes"<<endl;
    cout<<"2. Terabytes a Megabytes"<<endl;
    cout<<"3. Gigabytes a Petabytes"<<endl;
    cout<<"Opcion: ";
    cin>>opcion;

    cout<<"Ingrese el valor a convertir: ";
    cin>>valor;

    switch (opcion) {
        case 1:
            resultado = bytesAKilobytes(valor);
            cout<<valor<<" Bytes son "<<resultado<<" Kilobytes.";
            break;
        case 2:
            resultado = terabytesAMegabytes(valor);
            cout<<valor<<" Terabytes son "<<resultado<<" Megabytes.";
            break;
        case 3:
            resultado = gigabytesAPetabytes(valor);
            cout<<valor<<" Gigabytes son "<<resultado<<" Petabytes.";
            break;
        default:
            cout<<"Opcion no valida.";
    }

    return 0;
}

