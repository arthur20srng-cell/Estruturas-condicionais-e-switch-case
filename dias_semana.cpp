#include <iostream>
using namespace std;

int main() {
    int dia;
    cout << "dgite um numero de 1 a 7: ";
    cin >> dia;
    
    switch (dia) {
    case 1:
        cout << "domingo";
    break;
    
    case 2:
        cout << "segunda";
    break;
    
    case 3:
        cout << "terca";
    break;
    
    case 4:
        cout << "quarta";
    break;
    
    case 5:
        cout << "quinta";
    break;
    
    case 6:
        cout << "sexta";
    break;
    
    case 7:
        cout << "sabado";
    break;
    
    default: cout << "dia invalido";
    }

    return 0;
}
