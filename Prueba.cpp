// Prueba.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

// #include "pch.h" Uncomment for Visual Studio 2017 and earlier
#include <iostream>
#include "P13.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <Windows.h>

int main()
{
	char* s = NULL;
	int iBinToInt = 0;
	int iHexToInt = 0;
	int iOctToInt = 0;


	s = (char*)malloc(sizeof(char) * 9);
	printf("Ingrese el numero hexadecimal que desea convertir a decimal: ");
	scanf("%s", s);
	s[8] = '\0';
	iHexToInt = asciiHEXToInt(s);
	if (iHexToInt != -1) {
		printf("El numero decimal para %s es: %d\n", s, iHexToInt);
	}
	free(s);


	s = (char*)malloc(sizeof(char) * 9);
	printf("Ingrese el numero binario que desea convertir a decimal: ");
	scanf("%s", s);
	s[8] = '\0';
	iBinToInt = asciiBinaryToInt(s);
	if(iBinToInt != -1) {
		printf("El numero decimal para %s es: %d\n", s, iBinToInt);
	}
	free(s);

	s = (char*)malloc(sizeof(char) * 9);
	printf("Ingrese el numero octal que desea convertir a decimal: ");
	scanf("%s", s);
	s[8] = '\0';
	iOctToInt = asciiOCTToInt(s);
	if (iOctToInt != -1) {
		printf("El numero decimal para %s es: %d\n", s, iOctToInt);
	}
	free(s);

	printf("Teclee enter para cerrar la terminal.");
	getchar();
	getchar();
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
