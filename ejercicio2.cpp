#include <iostream>
#include <string>
using namespace std;

int main() {
    // Crear una cadena utilizando la clase string
    string miCadena = "Hola, mundo!";

    // Obtener y imprimir el tamaño de la cadena utilizando size()
    cout << "Tamaño de la cadena: " << miCadena.size() << endl;

    // Comprobar si la cadena está vacía utilizando empty()
    if (miCadena.empty()) {
        cout << "La cadena está vacía." << endl;
    } else {
        cout << "La cadena no está vacía." << endl;
    }

    return 0;
}
