//Ejercicio 6
//Medias con porcentaje


#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float practica, teoria, parti, resultado = 0;

	cout << "La nota practica es de: "; cin >> practica;
	cout << "La nota teorica es de: "; cin >> teoria;
	cout << "la nota de participacion es de:"; cin >> parti;
	
	practica *= 0.30;
	teoria *= 0.60;
	parti *= 0.10;

	resultado = practica + teoria + parti;

	cout << "\nLa nota final del alumno es: " << resultado << endl;

	//ejercicio

	float cateto1, cateto2, hipotenusa = 0;
	
	cout << "\nIngresa el valor del cateto 1: "; cin >> cateto1;
	cout << "Ingresa el valor del cateto 2: "; cin >> cateto2;

	hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));	//SQRT para riaz cuadrada y POW para elevar un num
	
	cout.precision(3);
	cout << "El valor de la hipotenusa es: " << hipotenusa << endl;


	cin.get();
	return 0;
}