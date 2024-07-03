//Ejercicio 8
//If, Elsa

#include <iostream>
using namespace std;

int main() {
	int numero, dato = 5;
	
	cout << "ingrese un numero: "; cin >> numero;

	if (numero == dato) {
		cout << "El numero ingresado es igual";
	}
	else {
		cout << "El numero ingresado no es igua";
	}

	cin.get();
	return 0;
}