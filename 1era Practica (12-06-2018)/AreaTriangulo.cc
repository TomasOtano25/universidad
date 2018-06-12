#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Triangulo {
    int lado1 = 0;
    int lado2 = 0;
    int lado3 = 0;
};

int leer(string mensaje) {
    int readed = 0;
    cout << mensaje << ": ";
    cin >> readed;
    return readed;
}

int resta(int valor1, int valor2) {
    return valor1 - valor2;
}

double raizCuadrada(double p, int a, int b, int c) {
    double result;
    result = p * resta(p, a) * resta(p, b) * resta(p, c);
    result = sqrt(result);
    return result;
}

int main() {
    Triangulo a;
    double p, total;
    
    a.lado1 = leer("Escribe el lado 1"); 
    a.lado2 = leer("Escribe el lado 2");
    a.lado3 = leer("Escribe el lado 3");
    
    p = (a.lado1 + a.lado2 + a.lado3)/2;
    cout << p << endl;
    total = raizCuadrada(p, a.lado1, a.lado2, a.lado3);
    cout << total << endl;
    
    cout << p;
    return 0;
}