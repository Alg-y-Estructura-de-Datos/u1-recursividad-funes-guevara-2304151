#include <iostream>
using namespace std;

// Función recursiva para contar dígitos pares en posiciones impares
int contarParesEnPosicionesImpares(int n, int tamNro ) {
    // Caso base: si n es 0, no hay más dígitos que revisar
    if (n == 0) {
        return 0;
    }
    // Verificar si la posición actual es impar y el dígito es par
    int digitoActual = n % 10;
    if (tamNro % 2 != 0 && digitoActual % 2 == 0) {
        // Incrementar el contador y realizar la llamada recursiva
        return 1 + contarParesEnPosicionesImpares(n / 10, tamNro - 1); //si pasa que true y true suma 1,
    } else {
        // Realizar la llamada recursiva sin incrementar el contador
        return contarParesEnPosicionesImpares(n / 10, tamNro - 1);
    }
}

int main(){
    int n, d;
    cout << "Ingrese la cantidad de digitos\n";
    cin >> d;
    cout << "Ingrese un numeros entero positivo:\n";
    cin >> n;

    // Contar dígitos pares en posiciones impares usando la función recursiva
    int resultado = contarParesEnPosicionesImpares(n,d);

    cout << "Cantidad de digitos pares en posiciones impares: " << resultado << endl;
}

