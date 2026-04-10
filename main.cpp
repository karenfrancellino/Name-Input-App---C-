#include <iostream>
#include <string>

int main() {
    std::string nombre;
    std::string apellido;
    std::string nombre_completo;

    std::cout << "Por favor escriba su nombre:\n";
    std::cin >> nombre;

    std::cout << "Por favor escriba su apellido:\n";
    std::cin >> apellido;

    nombre_completo = nombre + " " + apellido;

    std::cout << "Bienvenido " << nombre_completo << std::endl;

    return 0;
}
