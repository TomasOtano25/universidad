/*
fraccion = fraccion
d = division
numerator = numerador
denominator = denominador
result = resultado
*/

#include <iostream>
using namespace std;

struct fraccion {
    double numerator;
    double denominator;
};

int main() {
    fraccion f1, f2, rf;
    cout << "Es" << endl;
    
    cin >> f1.numerator; cout << "--" << endl;
    cin >> f1.denominator;
    cout << "Division de 2"<< endl;
    cin >> f2.numerator;  cout << "--" << endl;
    cin >> f2.denominator;
    
    rf.numerator = (f1.numerator * f2.numerator);
    rf.denominator = (f1.denominator * f2.denominator);
    
    
    cout << rf.numerator << " / " << rf.denominator << endl;
}