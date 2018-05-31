// Puntero es una direccion de memoria, apunta al primer elemento de un array 
// * declaracion del puntero
// Contenido de las variables
// con el * se el valor
// Numero hexadecimal
#include <iostream> 

using namespace std; 


int main(int argc, char *argv[]) { 
    int *p;
    int a = 100;
    p = &a; // &
    cout << "Direccion de memoria del puntero: " << p << endl;
    cout << "Direccion de memoria del puntero: " << *p << endl;
    
    // delete p;
} 