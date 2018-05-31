#include <iostream>

using namespace std;

int main() {
    int n = 0, p = 0, k;
    int fn = 1, fp = 1, fnp = 1;
    double cb = 0;
    
    cout << "Escribe el valor de n: ";
    cin >> n;
    cout << "Escribe el valor de p: ";
    cin >> p;
    
    for(k = 1; k <= n; k++) fn = fn * k; // fn *= k
    for(k = 1; k <= p; k++) fp = fp * k;
    for(k = 1; k <= (n - p); k++) fnp = fnp * k;
    cb = (double)fn / (fp * fnp);
    cout << fn << endl;
    cout << "EL coeficiente binominal: " << cb << endl;
    
    return 0;
}