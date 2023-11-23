#include <iostream>
#include <string>
using namespace std;
int main() {
    // Crear una cadena utilizando la clase string
    string cadena = "Este es un ejemplo de cadena";

    // Utilizar la función find() para buscar una subcadena
    size_t indiceInicio = cadena.find("ejemplo");

    // Imprimir el índice de inicio de la subcadena
    cout << "Índice de inicio de la subcadena: " << indiceInicio << endl;

    // Utilizar la función replace() para reemplazar la subcadena
    cadena.replace(indiceInicio, 7, "caso");

    // Imprimir la cadena resultante
    cout << "Cadena resultante: " << cadena << endl;

    return 0;
}
