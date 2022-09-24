#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	//Declaración de varaibles
	char letra;
	char nombre[20];
	char appP[30];
	char appM[30];
	char RFC[10];
	int dia, mes, anio;

	//Introducción de datos
	printf("Nombre: "); scanf_s("%s", nombre, 20);
	printf("Paterno: "); scanf_s("%s", appP, 30);
	printf("Materno: "); scanf_s("%s", appM, 30);
	RFC[0]= toupper(appP[0]);
	RFC[1]= toupper(appP[1]);
	RFC[2]= toupper(appM[0]);
	RFC[3]= toupper(nombre[0]);
	RFC[4] = '\0';
	printf("dia: "); scanf_s("%i", &dia);
	printf("mes: "); scanf_s("%i", &mes);
	printf("anio: "); scanf_s("%i", &anio);

	//Resultado
	printf("El RFC es %s%02i%02i%02i", RFC, anio - 2000, mes, dia);
}