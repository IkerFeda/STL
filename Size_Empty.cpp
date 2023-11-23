#include <iostream>
#include <string>

int main() {
    std::string sentence = "OpenAI es un laboratorio líder en investigación de IA.";
    std::cout << "Tamaño de la cadena: " << sentence.size() << std::endl;
    std::cout << "¿Está la cadena vacía? " << (sentence.empty() ? "Sí" : "No") << std::endl;
    return 0;
}

