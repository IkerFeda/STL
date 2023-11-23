#include <iostream>
#include <string>

int main() {
    std::cout << "Ingrese una cadena: ";
    std::string cadenaUsuario;
    std::getline(std::cin, cadenaUsuario);

    std::string cadena1 = "Hola";
    std::string cadena2 = " mundo";
    std::string cadena3 = cadena1 + cadena2 + " " + cadenaUsuario;

    std::cout << "Cadena resultante: " << cadena3 << std::endl;

    return 0;
}