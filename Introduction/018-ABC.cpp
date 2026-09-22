#include <iostream>
#include <string>

// Programa introductorio para ordenar tres enteros e imprimirlos según un patrón
// Utiliza únicamente variables individuales, condicionales básicos y un bucle
int main() {
    // Configuración para optimizar la velocidad de entrada y salida
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    // Variables individuales para los tres números
    int a, b, c;
    std::cin >> a >> b >> c;

    // Cadena con el orden deseado (ejemplo: "ABC", "CBA", etc.)
    std::string order;
    std::cin >> order;

    // Ordenamiento en 3 pasos simples para garantizan que: a <= b <= c
    // Al finalizar: 'A' es a, 'B' es b, 'C' es c
    if (a > b) { int temp = a; a = b; b = temp; }
    if (b > c) { int temp = b; b = c; c = temp; }
    if (a > b) { int temp = a; a = b; b = temp; }

    // Impresión de cada valor según el carácter leído en la cadena
    for (int i = 0; i < 3; i++) {
        if (order[i] == 'A') {
            std::cout << a;
        } else if (order[i] == 'B') {
            std::cout << b;
        } else {
            std::cout << c;
        }

        // Espaciado entre números
        if (i < 2) {
            std::cout << " ";
        }
    }
    std::cout << "\n";

    return 0;
}