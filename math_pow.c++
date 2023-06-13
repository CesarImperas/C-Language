#include <iostream>
#include <cmath> // 'abs(int)' - Informa o número absoluto | 'pow(base, expoente)' - Potência
using namespace std;

main() {

    int base, expoente;
    cout << "Vamos Calcular Potencia? Digite os seguintes numeros:" << endl;
    cout << "Base: ";
    cin >> base;
    cout << "Expoente: ";
    cin >> expoente;
    cout << base << " elevado a " << expoente << " resulta em: " << pow(base, expoente) << ".";

    return 0;
}