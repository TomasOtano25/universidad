#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char *p;
    char cadena[999999];
    cout << "Escribe la cadena: ";
    cin.getline(cadena, sizeof(cadena));
    p = cadena;
    p = (p + strlen(cadena));
    
    cout << "Cadena inversa: ";
    for(int i = strlen(cadena);  i >= 0;i--) {
        p--;
        cout << *p;
    }
    return 0;
}