//ejercicio 2
//Edad, sexo, altura

#include<iostream>
using namespace std;

int main() {
	int edad;
	char sexo[10];
	float altura;

	cout << "ingresa tu edad: "; cin >> edad;
	cout << "ingresa tu genero: "; cin >> sexo;
	cout << "cuanto mides: "; cin >> altura;

	cout << "\ntu edad es: " << edad << endl;
	cout << "tu genero es: " << sexo << endl;
	cout << "tu altura es: " << altura << endl;


	cin.get();
	return 0;
}