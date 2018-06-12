/* Variables

    @x = numero de inicio del rango
    @y = numero final del rango
*/
#include <iostream>

using namespace std;

int main() {
    double x, y;
    
    cout << "Introduzca el numero de inicio: ";
    cin >> x;
    cout << "Introduzca el numero final: ";
    cin >> y;
    
    cout << endl;
    cout << "Los primos desde " << x << " hasta " << y << " es/son: "<< endl;
    cout << "------------------" << endl;
    for(int i = x; i <= y;i++) {
        int a = 0;
        for(int j = 1; j <= i;j++) {
            if(i%j==0) {
                a++;
            }
        }
        if(a != 2) {
            /*cout << "| "  << i << " | No es primo" << " |" <<  endl ;*/
        } else {
            cout << "| " << i << " | Es primo" << " |" << endl;
        }
    }
}