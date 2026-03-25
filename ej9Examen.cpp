#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese un numero n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << " -> " << (i * i) << endl;
    }

    return 0;
}

/* El programa corrio tal y como estaba en el examen.*/
