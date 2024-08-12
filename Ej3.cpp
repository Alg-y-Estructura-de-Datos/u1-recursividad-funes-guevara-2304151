#include <iostream>
using namespace std;

void mostrarInvertido(int numero, int& invertido) { //inver pasa como referencia, en el main arranca como cero, la funcion lo modifica
                                                    //tmb se puede retornar normal, pero si lo hago x ref me deja retornar varias cosas
    /*Condición Base*/
    if (numero == 0) {
        return;
    } else {
        /*Código necesario*/
        invertido = invertido * 10 + numero % 10; //redefino el valor, lo mult y le sumo el resto div x 10
        /*Recursividad y Terminación*/
        mostrarInvertido(numero / 10, invertido);
    }
}

int main() {
    int numero;
    cout << "ingrese el numero para invertir:\n";
    cin >> numero;
    cout << "Numero original: " << numero << endl;

    if (numero < 0) {
        cout << "Error: Número negativo no permitido." << endl;
        return 1; // Salir del programa con error
    }

    int invertido = 0;
    mostrarInvertido(numero, invertido);

    cout << "Numero invertido: " << invertido << endl;
    return 0;
}
