//Ejercicio 11
//Condicionales

#include <iostream>
using namespace std;

int main() {
	int numero;

	cout << "ingresa un numero: "; cin >> numero;
	
	if (numero == 0) {
		cout << "El numero ingresado es 0";
	}
	else {
		if (numero % 2 == 0) {
			cout << "El numero es par";
		}
		else {
			cout << "El numero es impar";
		}
	}

	//Ejercicio
	int dato;

	cout << "\nIngresa un numero: "; cin >> dato;

	switch (dato) {
	case 1: cout << "el numero es positivo"; break;
	case 2: cout << "el numero es positivo"; break;
	case 3: cout << "el numero es positivo"; break;
	case 4: cout << "el numero es positivo"; break;
	case 5: cout << "el numero es positivo"; break;
	default: cout << "el numero es negativo"; break;
	}

	cin.get();
	return 0;
}