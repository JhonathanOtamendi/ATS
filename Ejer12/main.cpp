//Ejercicio 12
//Condicionales

#include <iostream>
using namespace std;

int main() {
	char letra;

	cout << "Ingresa una letra: "; cin >> letra;

	switch (letra) {
	case 'a': 
	case 'b': 
	case 'c':
	case 'd':
	case 'e': cout << "La letra ingresada es minuscula"; break;
	default: cout << "La letra ingresada es mayuscula";  break;
	}

	//ejercicio

	char dato;

	cout << "\nIngresa una vocal: "; cin >> dato;

	switch (dato) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u': cout << "Es una vocal minuscula"; break;
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U': cout << "Es una vocal mayuscula"; break;
	default: cout << "No es una vocal"; break;
	}

	cin.get();
	return 0;
}