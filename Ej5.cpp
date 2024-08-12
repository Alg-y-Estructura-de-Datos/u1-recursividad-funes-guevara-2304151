#include <iostream>
using namespace std;

bool contieneDigito(int n, int d){
    //caso base 1
    if (n == 0){
        return false;
    }

        // caso base 2, Si el dígito actual (n % 10) es igual a 'd', retornar verdadero
        if (n % 10 == d) {
            return true;
        }
        // Llamada recursiva con el número sin el último dígito
        return contieneDigito(n / 10, d);
}



int main(){
    int n, d;
    cout << "ingrese un numero\n";
    cin >> n;
    cout << "ingrese un digito\n";
    cin >> d;
    // Verificar si el dígito está en el número usando la función recursiva
    bool resultado = contieneDigito(n, d);
    if (resultado) {
        cout << "El digito " << d << " esta en el numero " << n << "." << endl;
    } else {
        cout << "El digito " << d << " no esta en el numero " << n << "." << endl;
    }

    return 0;
}


