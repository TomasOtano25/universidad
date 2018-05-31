#include <iostream>

using namespace std;

int calcularFactorial(int n) {
    int factorial = 1;
    for(int i = 1; i <= n;i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int n = 0, p = 0;
    int factorialN = 0, factorialP = 0, factorialResta = 0;
    double respuesta = 0;
    
    cout << "Escribe el valor de n: ";
    cin >> n;
    cout << "Escribe el valor de p: ";
    cin >> p;
    
    factorialN = calcularFactorial(n);
    factorialP = calcularFactorial(p);
    factorialResta = calcularFactorial((n - p));
    
    respuesta  = factorialN / (factorialP * factorialResta);
    
    cout << "La respuesta de:" << respuesta << endl;
    cout << factorialN << endl;
    cout << factorialP << endl;
    cout << factorialResta << endl;
    
    return 0;
}