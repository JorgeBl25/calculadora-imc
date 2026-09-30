#include <iostream>
#include <string>

    double calcularImc (double pesoKg, double estaturaM) {
        return pesoKg / (estaturaM * estaturaM);
    }

    using namespace std;

    string clasificarImc(double imc) {
        if (imc < 18.5){
            return "Bajo peso";
        } else if (imc < 25.5) {
            return "Normal";
        } else if (imc < 30.0) {
            return "Sobrepeso";
        }
        return "Obesidad";
    }

    
    int main () {
        double peso, estatura;


        cout << "peso (Kg): ";
        cin >> peso;

        cout << "estatura (m): ";
        cin >> estatura; 

        cout << "IMC: " << calcularImc (peso, estatura) << endl;

         double imc = calcularImc (peso , estatura);
        cout << "IMC: " << imc 
             << "(" << clasificarImc(imc) << ")" <<endl;

        return 0;

    }