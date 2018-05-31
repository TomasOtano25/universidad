#include <iostream>

using namespace std;

int main() {
    int a[10][10];
    // int * a = NULL;
    int n, m, i, j;
    double sumatoria = 0, media;
    cout << "Especifique la cantidad de filas: ";
    cin >> n;
    cout << "Especifique la cantidad de columnas: ";
    cin >> m;
    // a = new int[n][m];
    for(i=0; i < n;i++) {
        for(j=0; j < m;j++) {
            cout << "Digite elemento " << i << ", " << j << ": ";
            cin >> a[i][j];
            sumatoria += a[i][j];
        }
    }
    cout << "Matriz capturada: " << endl;
    for(i=0; i < n;i++) {
        for(j=0; j < m;j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    
    media = sumatoria / (n*m);
    
    cout << "La media es: " <<media << endl;
    cout << "La sumatoria es: " << sumatoria << endl;
    return 0;
}