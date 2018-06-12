//Ejemplo del uso de struct
#include <iostream> 
#include <string>

using namespace std;

struct fraccion {
    double numerator; // int
    double denominator; // int
    string name;
};

int main(int argc, char *argv[]) { 
    fraccion f1;
    cout << "Digite el numerador:";
    cin >> f1.numerator;
    cout << "Digite el denominador:";
    cin >> f1.denominator;
    cout << "Digite el nombre:";
    cin >> f1.name;
    
    cout << "La fraccion digital es " << f1.numerator << "/" << f1.denominator << endl;
    cout << f1.numerator / f1.denominator << endl;
    cout << "Name: ";
    cout << f1.name << endl;
    return 0;
}
