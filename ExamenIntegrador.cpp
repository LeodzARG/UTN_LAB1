#include <iostream>
using namespace std;

int main() {
	
	int opcionInicial;
	
	cout << "CLUNCH" << endl;
	cout << "-----------------" << endl;
	cout << "1 - JUGAR" << endl;
	cout << "2 - ESTADISTICAS" << endl;
	cout << "3 - CREDITOS" << endl;
	cout << "-----------------" << endl;
	cout << "0 - SALIR" << endl << endl;
	
	cout << "Ingrese un opci�n: ";
	cin >> opcionInicial;
	cout << endl;
	
	// Elegi en switch para cada opcion, me parecio mejor para luego en cada caso poner el codigo correspondiente.
	
	switch (opcionInicial) {
		case 1:
			cout << "Has elegido jugar!" << endl;
			// Aqu� ir�a el c�digo para la opci�n "jugar"
			break;
		
		case 2:
			cout << "Has elegido ver estad�sticas!" << endl;
			// Aqu� ir�a el c�digo para la opci�n "estad�sticas"
			break;
		
		case 3:
			cout << " CR�DITOS " << endl;
			cout << " ------------------------------------ " << endl;
			cout << "Laboratorio de Computaci�n I" << endl;
			cout << "Integrantes: " << endl;
			cout << "Legajo XXXXXX - Rossi, Santiago Rodrigo" << endl;
			cout << "Legajo XXXXXX - Diaz, Leonardo Sebasti�n" << endl;
			cout << "Legajo XXXXXX - Aguirregabiria, Mart�n Alejandro" << endl;	
				
			// Faltaria agregar los numero de legajo y tambien dice "que hay que poner nombre al grupo"
			break;
		
		case 0:
			cout << "�Hasta luego!" << endl;
			break;
		
		default:
			cout << "Opci�n inv�lida. Por favor, elija una opci�n v�lida." << endl;
			break;
	}
	
	return 0;
}

