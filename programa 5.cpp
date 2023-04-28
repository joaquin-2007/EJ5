#include <iostream>

// Funci�n para convertir de Celsius a Fahrenheit
float CalcularFahrenheit(int Celsius) {
    float Fahrenheit; // Variable para almacenar el resultado en Fahrenheit

    // Aplicar la f�rmula de conversi�n de Celsius a Fahrenheit
    Fahrenheit = (Celsius * 9.0 / 5.0) + 32.0;

    // Devolver el resultado en Fahrenheit
    return Fahrenheit;
}

int main() {
    int Celsius;
    std::cout << "Ingrese la temperatura en grados Celsius: ";
    std::cin >> Celsius;

    // Llamada a la funci�n CalcularFahrenheit
    float Fahrenheit = CalcularFahrenheit(Celsius);

    // Mostrar el resultado en Fahrenheit
    std::cout << "La temperatura en grados Fahrenheit es: " << Fahrenheit << std::endl;

    return 0;
}

