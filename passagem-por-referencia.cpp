#include <iostream>
using namespace std;

void triplicar(int &n) {
    n = n * 3;
}

int main() {
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    triplicar(numero);

    cout << "Valor triplicado: " << numero << endl;

    return 0;
}
