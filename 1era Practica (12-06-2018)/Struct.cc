/*  Variables
    
    @fraccion = fraccion con numerador  y denominador 
    @f1 = 1era fraccion
    @f2 = 2da fraccion
    @rf = fraccion resultante de la multiplicacion
*/

#include <iostream>
using namespace std;

struct fraccion {
    double numerador;
    double denominador;
};

int main() {
    fraccion f1, f2, rf;
    cout << "Escribe la 1era Fraccion" << endl;
    cin >> f1.numerador; 
    cout << "entre" << endl;
    cin >> f1.denominador;
    cout << "Escribe la 2da Fraccion "<< endl;
    cin >> f2.numerador;  
    cout << "entre" << endl;
    cin >> f2.denominador;
    
    rf.numerador = (f1.numerador * f2.numerador);
    rf.denominador = (f1.denominador * f2.denominador);
    
    cout << "El resultado de la multiplicacion es: ";
    cout << rf.numerador << " / " << rf.denominador << endl;
}