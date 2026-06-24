#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float A[3] = {2, 3, 4};
    float B[3] = {1, 0, 5};

    float produto = 0;

    for(int i = 0; i < 3; i++) {
        produto += A[i] * B[i];
    }

    float modA = sqrt(A[0]*A[0] + A[1]*A[1] + A[2]*A[2]);
    float modB = sqrt(B[0]*B[0] + B[1]*B[1] + B[2]*B[2]);

    float angulo = acos(produto / (modA * modB));

    cout << "Angulo em radianos: " << angulo << endl;
    cout << "Angulo em graus: " << angulo * 180 / M_PI << endl;

    return 0;
}
