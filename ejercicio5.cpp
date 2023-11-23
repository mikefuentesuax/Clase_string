#include <iostream>
#include <string>
using namespace std;

int main() {
    // Crear una cadena utilizando la clase string
    string cadena = "Ejemplo de manipulacion de strings";

    // Utilizar la función substr() para obtener una subcadena
    string subcadena = cadena.substr(0, 7);  // Obtener los primeros 7 caracteres

    // Utilizar la función insert() para insertar otra cadena en la cadena
    cadena.insert(7, " extra");

    // Imprimir la cadena resultante
    cout << "Cadena resultante: " << cadena << endl;

    return 0;
}
