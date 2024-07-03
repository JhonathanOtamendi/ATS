//Ejercicio 7
//Raiz y elevado


#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float na, nb, resultado = 0;

	cout << "Ingresa el valor de A: "; cin >> na;
	cout << "Ingresa el valor de B: "; cin >> nb;

	resultado = (sqrt(na)) / (pow(nb, 2) - 1);	//SQRT es para raiz, POW para elevar un num

	cout.precision(3);
	cout << "El resultado es: " << resultado << endl;

	cin.get();
	return 0;
}