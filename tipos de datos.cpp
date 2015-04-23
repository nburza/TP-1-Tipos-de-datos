/*NICOLÁS BURZA
23042015
TIPOS DE DATOS
*/

#include <iostream>
using namespace std;

int a;
int b;
double c;
double d;
char e;
char f;
string g;

int main() {
	cout << "Ingrese un numero entero: ";
	cin >> a;
	cout << "Ingrese otro numero entero: ";
	cin >> b;
	cout << "Resultado de la suma: " << a + b << "\n";
	cout << "Inserte un numero real: ";
	cin >> c;
	cout << "Inserte otro numero real: ";
	cin >> d;
	cout << "Resultado de la resta: "<< c-d << "\n";
	cout << "Inserte un caracter: ";
	cin >> f;
	cout <<"Inserte otro caracter: ";
	cin >> e;
	bool h= a<b or c>d;
	bool j= ((a+b)*(c-d)>200) and f==e;
	cout << h <<" "<< j << "\n";
	cout << "Inserte un string: ";
	cin >> g;
	cout << "Tamaño de string: "<< g.size();	
}
