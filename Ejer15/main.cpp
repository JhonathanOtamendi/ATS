//Ejercicio 15
//Condicionales

#include <iostream>

using namespace std;


int main() {
	int saldo_inicial = 1000, opc;
	float extra, saldo = 0, retiro;

	cout << "\tBienvenido a su cajero virtual" << endl;  // el \t es para una sangria
	cout << "1-. Ingresar dinero a la cuenta" << endl;
	cout << "2-. Retirar dinero de la cuenta" << endl;
	cout << "3-. salir" << endl;
	cout << "Opcion: "; cin >> opc;

	switch (opc){
	case 1: cout << "Digite la cantidad de dinero que desea ingresar: "; cin >> extra;
		saldo = saldo_inicial + extra;
		cout << "Dinero disponible: " << saldo; break;
	case 2: cout << "Digite la cantidad de dinero que desea retirar:"; cin >> retiro;
		if (retiro > saldo_inicial) {
			cout << "NO tienes esa cantidad de dinero";
		}
		else {
			saldo = saldo_inicial - retiro;
			cout << "Tu saldo restante es: " << saldo; break;
		}
	case 3: break;
	default: cout << "Esa no es una opcion.";
	}

	//Ejercicio

	int;
	cin.get();
	return 0;
}