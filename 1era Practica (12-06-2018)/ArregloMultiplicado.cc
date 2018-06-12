/* Variables

    @ai = arreglo inicial
    @num = numero de elementos del arreglo
    @mult = numero por el que multiplicas cada elemento del arreglo
*/
#include <iostream>

using namespace std;

int main() {
    
    int *ai = NULL;
    int num, mult;
    cout << "Escribe la cantidad de numeros del arreglo: ";
    cin >> num;
    cout << "Escribe el numero a multiplicar: ";
    cin >> mult;
    ai = new int[num];
    
    cout << "-----------------------" << endl;
    for(int i = 0; i < num; i++) {
        cout << "Escribe el numero " << (i+1) << ": ";
        cin >> ai[i];
    }
    
    cout << "-------------------------" << endl;
    cout << "El arreglo resultante es:" << endl;
    cout << "[ ";
    for(int i = 0; i < num; i++) {
        cout << ai[i] * mult;
        if (i != num - 1) cout << ", ";
    }
    cout << " ]";
}