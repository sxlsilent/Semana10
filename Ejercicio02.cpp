# include <iostream>
# include <array> 
# include <vector>
using namespace std;

int main() {
    cout << "Cuantos numeros va a ingresar" << endl;
    int cantidad;
    cin >> cantidad;

    vector <int> nums(cantidad); 
    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese numero " << i + 1 << ": ";
        cin >> nums[i];
    }
    int mayor = nums[0];
    int menor = nums[0];

    for (int i = 1; i < cantidad; i++)
    {
        if (nums[i] > mayor) {
            mayor = nums[i];

        }
        if (nums[i] < menor) {
            menor = nums[i];
        }
    }
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;

}
