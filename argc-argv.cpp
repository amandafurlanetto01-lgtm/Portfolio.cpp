#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {

    if(argc > 2) {
        cout << "Argumento da posicao 2: "
             << argv[2] << endl;
    }
    else {
        cout << "Quantidade insuficiente de argumentos." << endl;
    }

    return 0;
}
