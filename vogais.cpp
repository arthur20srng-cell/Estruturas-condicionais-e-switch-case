#include <iostream>
using namespace std;

int main() {
    char letra;
    cout << "dgite uma letra: ";
    cin >> letra;
    
    switch (letra) {
    case 'a': cout << "vogal a";
    break;
    
     case 'e': cout << "vogal e";
    break;
    
     case 'i': cout << "vogal i";
    break;
    
     case 'o': cout << "vogal o";
    break;
    
     case 'u': cout << "vogal u";
    break;
    
    default: cout << "constante";
    }

    return 0;
}
