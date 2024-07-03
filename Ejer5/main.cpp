//Ejercicio 5
//Intercambio de numero


#include <iostream>
using namespace std;

int main() {
	float na, nb, aux;

	cout << "ingresa el valor de A: "; cin >> na;
	cout << "ingresa el valor de B: "; cin >> nb;

	aux = na;
	na = nb;
	nb = aux;

	cout << "\nel nuevo valor de A es: " << na << endl;
	cout << "el nuevo valor de B es: " << nb << endl;

	//ejercicio
	float nc, nd, ne, nf, resultado = 0;

	cout << "\ningresa la nota del primer alumno: "; cin >> nc;
	cout << "ingresa la nota del segundo alumno: "; cin >> nd;
	cout << "ingresa la nota del tercer alumno: "; cin >> ne;
	cout << "ingresa la nota del cuarto alumno: "; cin >> nf;

	resultado = (nc + nd + ne + nf) / 4;

	cout << "\nla nota promedio de los cuatro alumnos es: " << resultado << endl;

	cin.get();
	return 0;
}