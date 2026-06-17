#include <iostream>
using namespace std;

int main() {
    int *numero = new int;

    *numero = 10;

    cout << "Valor: " << *numero << endl;

    delete numero;

    return 0;
}
