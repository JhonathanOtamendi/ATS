//Ejercicio 17
//Ciclos y Bucles

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;


int main() {
	int a;

	a = 10;

	do {
		cout << a << endl;
		a--;
	} while (a >= 1);

	system("pause");
	cin.get();
	return 0;
}