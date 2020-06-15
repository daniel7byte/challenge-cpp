#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

float kilometrosAUnidadesAstronomicas(int km)
{
	return (km * 0.0000000066846);
}

main()
{

	// Constante
	const char *nombrePlaneta[8] = {"Mercurio", "Venus", "Tierra", "Marte", "Jupiter", "Saturno", "Urano", "Neptuno"};
	const int distancia_planetas[8][2] = {{46001009, 69817445},
																				{107476170, 108942780},
																				{147098291, 152098233},
																				{206645215, 249232432},
																				{740679835, 816001807},
																				{1349823615, 1503509229},
																				{2734998229, 3006318143},
																				{4459753056, 4537039826}};

	while (true)
	{

		system("CLS");

		// Variables

		int planeta_1 = 0, planeta_2 = 0;

		cout << "Programa para calcular la distancia entre dos planetas cuando estan alineados:" << endl
				 << endl;
		cout << "1) Mercurio" << endl;
		cout << "2) Venus" << endl;
		cout << "3) Tierra" << endl;
		cout << "4) Marte" << endl;
		cout << "5) Jupiter" << endl;
		cout << "6) Saturno" << endl;
		cout << "7) Urano" << endl;
		cout << "8) Neptuno" << endl
				 << endl;

		// Seleccion

		cout << "Ingrese el valor correspondiente al PRIMER planeta: ";
		cin >> planeta_1;

		cout << "Primero planeta elegido es: " << nombrePlaneta[planeta_1 - 1] << endl;

		cout << "Ingrese el valor correspondiente al SEGUNDO planeta: ";
		cin >> planeta_2;

		cout << "Segundo planeta elegido es: " << nombrePlaneta[planeta_2 - 1] << endl;

		// Calculo distancia Perihelio

		int perihelio = distancia_planetas[planeta_1 - 1][0] - distancia_planetas[planeta_2 - 1][0];

		// Valor absoluto

		if (perihelio < 0)
			perihelio = perihelio * (-1);

		// Imprime valor

		cout << "La distancia entre " << nombrePlaneta[planeta_1 - 1] << " y " << nombrePlaneta[planeta_2 - 1] << " en el perihelio es: " << perihelio << " Km (" << kilometrosAUnidadesAstronomicas(perihelio) << " UA"
				 << ")" << endl;

		// Calculo distancia Afelio

		int afelio = distancia_planetas[planeta_1 - 1][1] - distancia_planetas[planeta_2 - 1][1];

		if (afelio < 0)
			afelio = afelio * (-1);

		cout << "la distancia entre " << nombrePlaneta[planeta_1 - 1] << " y " << nombrePlaneta[planeta_2 - 1] << " en el afelio es: " << afelio << " Km (" << kilometrosAUnidadesAstronomicas(afelio) << " UA"
				 << ")" << endl
				 << endl;

		// Repetir o salir

		int salir = 0;
		cout << "Si desea salir pulse [1]" << endl;
		cout << "Si desea hacer un nuevo calculo pulse [0] " << endl;
		cin >> salir;

		if (salir == 1)
			break;
	}
}
