//Ejercicio 10
//condicionales

#include <iostream>
using namespace std;

int main() {
	int na, nb;

	cout << "Ingrese 2 numeros: "; cin >> na >> nb;

	if (na == nb) {
		cout << "Los numeros son iguales";
	}
	else {
		if (na > nb) {
			cout << "El mayor es: " << na;
		}
		else {
			cout << "El mayor es: " << nb;
		}
	}


	//ejercicio

	int n1, n2, n3;

	cout << "\nIngres 3 numeros: "; cin >> n1 >> n2 >> n3;

	if (n1 > n2){
		cout << "El mayor es: " << n1;
	}
	else {
		if (n2 > n3) {
			cout << "El mayor es: " << n2;
		}
		else {
			cout << "El mayor es: " << n3;
		}
	}

	cin.get();
	return 0;
}