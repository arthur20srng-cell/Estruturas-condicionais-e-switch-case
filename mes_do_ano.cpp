#include <iostream>
using namespace std;

int main() {
    int mes;
    cout << "dgite um mes: ";
    cin >> mes;
    
    switch (mes) {
    case 1: 
        cout << "janeiro";
    break;
    
     case 2: 
        cout << "fevereiro";
    break;
    
     case 3: 
        cout << "marco";
    break;
    
     case 4: 
        cout << "abril";
    break;
    
     case 5: 
        cout << "maio";
    break;
    
    case 6: 
        cout << "junho";
    break;
    
    case 7: 
        cout << "julho";
    break;
    
    case 8: 
        cout << "agosto";
    break;
    
    case 9: 
        cout << "setembro";
    break;
    
    case 10: 
        cout << "outubro";
    break;
    
    case 11: 
        cout << "novembro";
    break;
    
    case 12: 
        cout << "dezembro";
    break;
    
    default: 
        cout << "mes inexistente";
    }

    return 0;
}
