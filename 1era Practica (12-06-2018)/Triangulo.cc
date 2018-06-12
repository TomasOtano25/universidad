/* Variable 

    @a = lado 1
    @b = lado 2
    @c = lado 3
    
    @Perimetro = funcion que calcula el perimetro
    @Area = funcion que calcula el area
*/
#include <iostream>
#include <cmath>

using namespace std;

double Perimetro(double a, double b, double c) {
    return (a + b + c ) / 2;
}

void Area(double a, double  b, int c) {
    double p = Perimetro(a, b, c);
    cout << "El area del triangulo (" << a << ", " << b << ", " << c << ") es: ";
    cout << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
}

int main() {
    double a, b, c;
    double area;
    cout << "Introduzca el lado 1: ";
    cin >> a;
    cout << "Introduzca el lado 2: ";
    cin >> b;
    cout << "Introduzca el lado 3: ";
    cin >> c;
    
    Area(a, b, c);
    
    return 0;
}


