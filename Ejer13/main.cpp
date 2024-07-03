//Ejercicio 13
//CONDICIONALES

#include <iostream>
using namespace std;

int main() {
	int edad;

	cout << "Ingresa tu edad: "; cin >> edad;

	if ((edad>=18)&&(edad<=25)){
		cout << "Entra en el rango";
	}
	else {
		cout << "No entra en el rango";
	}

	//Ejercicio
	int n1, n2, n3, n4;

	cout << "\nIngresa 3 numeros: "; cin >> n1 >> n2 >> n3;
	cout << "Ingresa un cuarto numero: "; cin >> n4;

	if ((n1,n2,n3) == n4) {
		cout << "El cuarto numero coincide con alguno de los anteriores";
	}
	else {
		cout << "El cuarto numero no coincide con alguno de los anteriores";
	}
	cin.get();
	return 0;
}