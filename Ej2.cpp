#include <iostream>
#include <cmath>
using namespace std;

int sumaRecursiv(int n){
    int resul;
    if (n == 0){
        cout << n; // Imprimir el primer número sin el signo "+"
        return 0;
    } else{
        cout << n << " + "; //son estrategicos para ir mostrando el proceso de la funcion
        /*Recursividad y Terminación*/
        return n + sumaRecursiv(n-1);
    }
}

int main() {
    int n = 3;
    cout << "Suma de los primeros " << n << " numeros naturales: ";
    int suma = sumaRecursiv(n);
    cout << " = " << suma << endl;
    return 0;
    return 0;
}
