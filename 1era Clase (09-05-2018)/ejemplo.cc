// Arreglo de n elementos
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) { 
    int a[100], i, n, suma=0;
    cout << "Especifica la cantidad de numeros." <<endl;
    cin >> n;
    for (i = 0; i < n;i++) {
        cout << "Digite elemento: ";
        cin >> a[i];
    }
    cout << " Los numeros digitados." << endl;
    for (i = 0; i < n;i++) {
        cout << a[i] << ", ";
        suma += a[i];
    }
    cout << "\nLa sumatoria es: " << suma << endl;
    
}