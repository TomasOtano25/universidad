// Programa de la tabla de mutiplicacion por los valores del 1 al 12
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) { 
    int n, i; 
    cout << "Digite un numero: ";
    cin >> n;
    for (i = 1; i <= 12; i++) {
        cout << n << "x"  << i << "=" << n*i << endl;
    }
    
    return 0;
}