#include <iostream>
void CuentaAtras(int num) {
    if (num != 0) {
        std::cout << num << "\n";
        CuentaAtras(num -1);
    }
}

void main() {
    int num;
    std::cout << "Pon un numero: ";
    std::cin >> num;
    CuentaAtras(num);
}