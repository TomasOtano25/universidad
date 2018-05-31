#include <iostrean>
#include <cmath>

double Perimetro(double a, double b, double c);
double Area(double a, double b, double c);

int main() {
    double a, b, c;
    
    cout << "Introduzca el primer numero: ";
    cin >> a;
    cout << "Introduzca el segundo numero: ";
    cin >> b;
    cout << "Introduzca el tercer numero: ";
    cin >> c;
    
    Area(a, b, c);
    
    return 0;
}

double Area(double a, double  b, int c) {
    double p = Perimetro(a, b, c);
    return sqrt(p * (p - a) * (p - b) * (p -c)
}
double Perimetro(double a, double b, double c) {
    return (a + b + c ) / 2;
}