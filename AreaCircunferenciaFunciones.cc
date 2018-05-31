// Programa que determina el area de la circunferencia, utilizando funciones
#include <iostream>
#include <cmath>

using namespace std;

// doble es el parametro
// void
double area(double r) {
    return 3.14 * pow (r, 2);
}

int main(int argc, char *argv[]) { 
    double radio;
    cout << " Digite el radio: ";
    cin >> radio;
    cout << "EL area es: " << area(radio) << endl;
    
    return 0;
}