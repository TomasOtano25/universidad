// Programa que determina si u numero es positivo, negativo o cero
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int n;
    double a;
    cout << "Digite un numero: ";
    cin >> n;
    
    if(n > 0) cout << "Es positivo" << endl;
    else if (n < 0)cout << "Es negativo" << endl;
    else cout << "Es cero" << endl;
    
    return 0;
}
