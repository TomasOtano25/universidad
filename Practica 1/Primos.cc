#include <iostream>

using namespace std;

int main() {
    double n1, n2;
    
    cin >> n1;
    cin >> n2;
    
    cout << "------------------" << endl;
    for(int i = n1; i <= n2;i++) {
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