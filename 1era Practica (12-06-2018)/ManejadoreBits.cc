/* Variables 
    
    @num = 8
    @num1 = 13
    @num2 = 2
*/

#include <iostream>
#include <iomanip>

using namespace std;

void mostrarBits(unsigned);

int main() {
    int num = 8, num1 = 13;
    short num2 = 2;
    
    mostrarBits(num);
    mostrarBits(num1);
    cout << "\tAl usar el operador AND (&)" << endl;
    mostrarBits(num & num1); cout << endl;
    
    mostrarBits(num);
    mostrarBits(num1);
    cout << "\tAl usar el operador OR (|)" << endl;
    mostrarBits(num | num1); cout << endl;
    
    mostrarBits(num);
    mostrarBits(num1);
    cout << "\tAl usar el operador OR-exclusivo (^)" << endl;
    mostrarBits(num ^ num1); cout << endl;
    
    mostrarBits(num2);
    cout << "\tAl usar el operador complemento a 1 (~)" << endl;
    mostrarBits(~num2); cout << endl;
    
    mostrarBits(num);
    cout << "\tAl usar el operador desplazamiento a la izquierda (<<)" << endl;
    mostrarBits(num << 1); cout << endl;
    
    mostrarBits(num);
    cout << "\tAl usar el operador desplazamiento a la derecha (>>)" << endl;
    mostrarBits(num >> 1); cout << endl;
    
    return 0;
}

void mostrarBits(unsigned value) {
    const int SHIFT = 8 * sizeof(unsigned) - 1;
    const unsigned MASK = 1 << SHIFT;
    
    cout << setw(10) << value << " = ";
    
    for(unsigned i = 1; i <= SHIFT + 1; i++) {
        cout << (value & MASK ? "1" : "0");
        value <<= 1;
        
        if(i % 8 == 0) {
            cout << " ";
        }
    }
    cout << endl;
}