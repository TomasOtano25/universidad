#include <iostream>

using namespace std;

char *invertir(char *puntero_i);

int main() {
    char cadena[] = "";
    cin >> cadena;
    cout << invertir(cadena);
}

char *invertir(char *puntero_i) {
   char *result;
   char *puntero_f;
   char temporal;
   result = puntero_i;
   for (puntero_f = puntero_i; *puntero_f != '\0'; puntero_f++);
   if (puntero_f - puntero_i > 1)
      for (puntero_f--; puntero_i < puntero_f; puntero_i++, puntero_f--){
         temporal = *puntero_i;
         *puntero_i = *puntero_f;
         *puntero_f = temporal;
      }
   
   return result;
}