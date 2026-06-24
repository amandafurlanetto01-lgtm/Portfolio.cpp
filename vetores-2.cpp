#include <iostream>
using namespace std;

int main() {
    int A[3], B[3], soma[3];

    cout << "Digite os valores do vetor A:" << endl;
    for(int i = 0; i < 3; i++) {
        cin >> A[i];
    }

    cout << "Digite os valores do vetor B:" << endl;
    for(int i = 0; i < 3; i++) {
        cin >> B[i];
        soma[i] = A[i] + B[i];
    }

    cout << "Soma dos vetores: ";
    for(int i = 0; i < 3; i++) {
        cout << soma[i] << " ";
    }

    return 0;
}
