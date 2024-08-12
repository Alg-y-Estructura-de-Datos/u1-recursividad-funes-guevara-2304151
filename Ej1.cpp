#include <iostream>
#include <cmath>
using namespace std;

int potenciaRecursiva(int base, int exponente){
    //B = 3 A LA EXPO = 2
    // Caso base: cualquier número elevado a la potencia 0 es 1
    if (exponente == 0) { //if sirve de control, es el qeu pregunta el caso base
        return 1;
    } else { //para recursividad y cond de ter, es opcional--->buena pract de prog
        // Llamada recursiva: multiplica la base por la base elevada al exponente menos uno
        return base * potenciaRecursiva(base, exponente - 1); //exp-1 es la condicion de terminacion del programa
    }
}



int main() {

    int base = 3;
    int exponente = 2;

    // Imprimir la base y el exponente
    cout << base << " elevado a la potencia " << exponente << " es: ";
    // Llamar a la función recursiva para calcular la potencia
    int resultado = potenciaRecursiva(base, exponente);
    // Imprimir el resultado de la potencia
    cout << resultado << endl;

    return 0;
}
