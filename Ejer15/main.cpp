//Ejercicio 15
//Condicionales

#include <iostream>
#include <math.h>

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
		cout << "Dinero disponible: " << saldo << endl; break;
	case 2: cout << "Digite la cantidad de dinero que desea retirar:"; cin >> retiro;
		if (retiro > saldo_inicial) {
			cout << "NO tienes esa cantidad de dinero";
		}
		else {
			saldo = saldo_inicial - retiro;
			cout << "Tu saldo restante es: " << saldo << endl; ; break;
		}
	case 3: break;
	default: cout << "Esa no es una opcion." << endl;
	}

	//Ejercicio

	int n1, n2, ele;
	float resultado;

	cout << "\n\tBienvenido" << endl;
	cout << "1-. Cubo de un numero" << endl;
	cout << "2-. Numero par o impar" << endl;
	cout << "3-. Salir." << endl;
	cout << "Opcion: "; cin >> ele;

	switch (ele){
	case 1: cout << "Ingrese un numero: "; cin >> n1;
		resultado = pow(n1, 3);
		cout << "El numero ingresado al cubo es: " << resultado; break;
	case 2: cout << "Ingrese un numero: "; cin >> n2;
		if (n2 == 0) {
			cout << "El numero ingresado es 0.";
		}
		else {
			if (n2 % 2 == 0) {
				cout << "El numero ingresado es par.";
			}
			else {
				cout << "El numero ingresado es impar."; break;
			}
		}
	case 3: break;
	default: cout << "Esa no es una opcion."; break;
	}

	cin.get();
	return 0;
}