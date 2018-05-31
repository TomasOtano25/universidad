// Programa que determina el area de una circunferencia
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) { 
    double radio, area;
    cout << " Digite el radio: ";
    cin >> radio;
    area = 3.14 * pow (radio, 2);
    cout << "EL area es: " << area << endl;
    
    return 0;
}