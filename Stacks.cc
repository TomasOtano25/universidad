// Pilas LIFO (Last-in First-out)
// Evaluacion de expresiones algebraicas
// Pila (Stack)
/* Operaciones 
    Push =  Insertar
    Pop = Quitar
    */
// desbordamiento negativo (underflow) = cuando intento sacar un elemento de una pila vacia
// debordamiento o rebosamiento (overflow) = cuando intento poner elementos en una pila llena
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> num;
    
    for(int i = 0; i < 100;i++) num.push(i);
    
    while(!num.empty()) {
        cout << num.top() << endl;
        num.pop();
    }
    
    return 0;
}