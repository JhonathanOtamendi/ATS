//Ejercicio4
//Expresion matematica 2

#include <iostream>
using namespace std;


int main() {
	float na, nb, nc, nd, resultado = 0;

	cout << "ingresa el valor de A: "; cin >> na;
	cout << "ingresa el valor de B: "; cin >> nb;
	cout << "ingresa el valor de C: "; cin >> nc;
	cout << "ingresa el valor de D: "; cin >> nd;

	resultado = na + (nb /(nc-nd));

	cout.precision(2);
	cout << "\nel resultado es: " << resultado << endl;

	cin.get();
	return 0;
}