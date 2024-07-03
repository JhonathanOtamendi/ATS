//Ejercicio 14
//Condicionales
/* 
 M = 1000
 D = 500
 C = 100
 L = 50
 X = 10
 V = 5
 I = 1
 */

#include <iostream> 
using namespace std;


int main() {
	int numero, unidades, decenas, centenas, millar;

	cout << "Ingresa un numero: "; cin >> numero;

	unidades = numero % 10; numero /= 10; //unidades = 2, numero = 215
	decenas = numero % 10; numero /= 10; //decenas = 5, numero = 21
	centenas = numero % 10; numero /= 10; //centenas = 1, numero = 2
	millar = numero % 10; numero /= 10; //millar = 2, numero = 0

	switch (millar) {
	case 1: cout << "M"; break;
	case 2: cout << "M"; break;
	case 3: cout << "MMM"; break;
	}
	switch (centenas) {
	case 1: cout << "C"; break;
	case 2: cout << "CC"; break;
	case 3: cout << "CCC"; break;
	case 4: cout << "CD"; break;
	case 5: cout << "D"; break;
	case 6: cout << "DC"; break;
	case 7: cout << "DCC"; break;
	case 8: cout << "DCCC"; break;
	case 9: cout << "CM"; break;
	}
	switch (decenas) {
	case 1: cout << "X"; break;
	case 2: cout << "XX"; break;
	case 3: cout << "XXX"; break;
	case 4: cout << "XL"; break;
	case 5: cout << "L"; break;
	case 6: cout << "LX"; break;
	case 7: cout << "LXX"; break;
	case 8: cout << "LXXX"; break;
	case 9: cout << "XC"; break;
	}
	switch (unidades) {
	case 1: cout << "I"; break;
	case 2: cout << "II"; break;
	case 3: cout << "III"; break;
	case 4: cout << "IV"; break;
	case 5: cout << "V"; break;
	case 6: cout << "VI"; break;
	case 7: cout << "VII"; break;
	case 8: cout << "VIII"; break;
	case 9: cout << "IX"; break;
	}

	//ejercicio
	
	int dato;

	cout << "\nIngresa un numero entre el 1 y 12: "; cin >> dato;

	switch (dato) {
	case 1: cout << "Enero"; break;
	case 2: cout << "Febrero"; break;
	case 3: cout << "Marzo"; break;
	case 4: cout << "Abril"; break;
	case 5: cout << "Mayo"; break;
	case 6: cout << "Junio"; break;
	case 7: cout << "Julio"; break;
	case 8: cout << "Agosto"; break;
	case 9: cout << "Septiembre"; break;
	case 10: cout << "Octubre"; break;
	case 11: cout << "Noviembre"; break;
	case 12: cout << "Diciembre"; break;
	default: cout << "Que numero es ese loco? Dije entre 1 y 12"; break;
	}

	cin.get();
	return 0;
}