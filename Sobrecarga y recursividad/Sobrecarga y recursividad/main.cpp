#include <iostream>
void sumen(int& num, int& n, int& suma) {
    if (n != (num + 1)) {
        suma += n;
        std::cout << suma << "\n";
        n++;
        sumen(num, n, suma);
    }
}

void main() {
    int num;
    int n = 0;
    int suma = 0;
    std::cout << "Pon un numero: ";
    std::cin >> num;
    sumen(num, n, suma);
}