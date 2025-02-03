#include <iostream>

int main() {
    for (int numero = 1; numero <= 1000; ++numero) {
        if (numero % 2 == 0) {
            std::cout << numero << " es par" << std::endl;
        } else {
            std::cout << numero << " es impar" << std::endl;
        }
    }
return 0;
}