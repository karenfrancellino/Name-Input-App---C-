# 👋 Name Input App - C++

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Status](https://img.shields.io/badge/status-concluído-brightgreen?style=for-the-badge)

---

## 📌 About the Project

This is a simple C++ console application that asks the user for their first name and last name, then displays a welcome message with the full name.

---

## 🚀 Features

- 📥 User input with `cin`
- 🔤 String concatenation
- 🖥️ Console output formatting

---

## 🛠️ Technologies

- C++
- Standard Library (`iostream`, `string`)

---

## 💻 Code Example

```cpp
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
