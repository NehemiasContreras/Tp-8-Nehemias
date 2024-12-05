#include <iostream>
using namespace std;
float sumar(float a,float b) {
    return a+b;
}

float restar(float a,float b) {
    return a-b;
}

float multiplicar(float a, float b) {
    return a*b;
}

float dividir(float a, float b) {
    if (b != 0) {
        return a/b;
    }
}

int main() {
    float num1,num2;
    char operacion;

    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;
    cout<<"Ingrese la operacion ( + , - , * , / ): ";
    cin>>operacion;

    switch (operacion) {
        case '+':
            cout<<"Resultado: " <<sumar(num1,num2)<<endl;
            break;
        case '-':
            cout<<"Resultado: " <<restar(num1,num2)<<endl;
            break;
        case '*':
            cout<<"Resultado: " <<multiplicar(num1,num2)<<endl;
            break;
        case '/':
            cout<<"Resultado: " <<dividir(num1,num2)<<endl;
            break;
        default:
            cout<<"Operacion no valida."<<endl;
            break;
    }

    return 0;
}

