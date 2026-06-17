#include <iostream>
using namespace std;

int main() {
    int numero = 25;
    int *p = &numero;

    cout << "Valor da variavel: " << numero << endl;
    cout << "Valor apontado pelo ponteiro: " << *p << endl;

    return 0;
}
