// Transpuesta de una matriz
#include <iostream>

// a = matriz original
// b = matriz transpuesta
// n contidad de filas
// m cantidad de columnas

using namespace std;

int main(int argc, char *argv[]) { 
    int a[10][10], b[10][10], i, j, n, m;
    
    cout << "Cantidad de filas: ";
    cin >> n;
    cout << "Cantidad de columnas: ";
    cin >> m;
    
    for (i=0;i < n;i++) {
        for (j=0;j<m;j++) {
            cout << "Digite elemento " << i << " fila, " << j << " columna: ";
            cin >> a[i][j];
        }
    }
    
    cout << "\nMatriz digita" << endl;
    for (i=0;i < n;i++) {
        for (j=0;j<m;j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
   
    for (i=0;i < n;i++) {
        for (j=0;j<m;j++) {
            b[j][i] = a[i][j];
        }
        cout << endl;
    }
    
    cout << "\nMatriz transpuesta" << endl;
    for (j=0;j < m;j++) {
        for (i=0;i < n;i++) {
            cout << b[j][i] << " ";
        }
        cout << endl;
    }
} 