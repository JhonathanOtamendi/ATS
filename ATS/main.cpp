//Ejercicio 1
//Sumar, resta, multi, divi

#include<iostream>
using namespace std;


int main() {
	int n1, n2, sumar = 0, resta = 0, multi = 0, divi = 0;
	cout << "pon el primer numero: ";
	cin >> n1;
	cout << "pon el segundo numero: ";
	cin >> n2;

	sumar = n1 + n2;
	resta = n1 - n2;
	multi = n1 * n2;
	divi = n1 / n2;

	cout << "\nLa suma es: " << sumar << endl;
	cout << "la resta es: " << resta << endl;
	cout << "la multiplicacion es: " << multi << endl;
	cout << "la division es: " << divi << endl;


	cin.get();
	return 0;
}