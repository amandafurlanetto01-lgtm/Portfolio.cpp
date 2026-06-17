#include <iostream>
using namespace std;

int main() {

    int* numero = new int;

    *numero = 100;

    cout << "Numero armazenado na heap: " << *numero << endl;

    delete numero;

    return 0;
}
