# include <iostream>
# include <array> 
# include <vector>
using namespace std;

int main() {

    cout << "Ingrese un numero: " << endl;
    int num;
    int xd = 0;
    cin >> num;

    while (num >= 2) {
        int resultado = num/2; 

        cout << num<< "/2 = " << resultado << endl;
        num = resultado ;
        xd++;
    }

    cout << "El numero se dividio " << xd << " veces" << endl;
    return 0;
}
