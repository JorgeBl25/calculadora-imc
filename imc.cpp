#include <iostream>

    double calcularImc (double pesoKg, double estaturaM) {
        return pesoKg / (estaturaM * estaturaM);
    }

    using namespace std;
    
    int main () {
        double peso, estatura;

        cout << "peso (Kg): ";
        cin >> peso;

        cout << "estatura (m): ";
        cin >> estatura; 

        cout << "IMC: " << calcularImc (peso, estatura) << endl;
        return 0;

    }