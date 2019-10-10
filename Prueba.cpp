// Prueba.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <Windows.h>

/*
HMODULE LoadLibraryA(
	LPCSTR P13
);
*/

int main()
{
	HINSTANCE P13;
	typedef int (asciiBinaryToInt)(char*);
	typedef int (asciiHexToInt)(char*);
	typedef int (asciiOctToInt)(char*);
	asciiBinaryToInt* ptrFuncBinToInt = 0;
	asciiHexToInt* ptrFuncHexToInt = 0;
	asciiOctToInt* ptrFuncOctToInt = 0;
	char* s = NULL;
	int iBinToInt = 0;
	int iHexToInt = 0;
	int iOctToInt = 0;
	if (P13 = LoadLibrary("P13.dll")) {
		if (ptrFuncBinToInt = (asciiBinaryToInt*) GetProcAddress(P13, "asciiBinaryToInt")) {
			s = (char*)malloc(sizeof(char) * 9);
			printf("Ingrese el numero binario que desea convertir a decimal: ");
			scanf("%s", s);
			s[8] = '\0';
			iBinToInt = (*ptrFuncBinToInt)(s);
			printf("%d\n", iBinToInt);
			free(s);
		}
		else {
			printf("Error: Routine BIN not found.\n");
		}
		if (ptrFuncHexToInt = (asciiHexToInt*) GetProcAddress(P13, "asciiHEXToInt")) {
			s = (char*)malloc(sizeof(char) * 9);
			printf("Ingrese el numero hexadecimal que desea convertir a decimal: ");
			scanf("%s", s);
			s[8] = '\0';
			iHexToInt = (*ptrFuncHexToInt)(s);
			printf("%d\n", iHexToInt);
			free(s);
		}
		else {
			printf("Error: Routine HEX not found.\n");
		}
		if (ptrFuncOctToInt = (asciiOctToInt*)GetProcAddress(P13, "asciiOCTToInt")) {
			s = (char*)malloc(sizeof(char) * 9);
			printf("Ingrese el numero octal que desea convertir a decimal: ");
			scanf("%s", s);
			s[8] = '\0';
			iOctToInt = (*ptrFuncOctToInt)(s);
			printf("%d\n", iOctToInt);
			free(s);
		}
		else {
			printf("Error: Routine HEX not found.\n");
		}
	}
	else {
		printf("Error: Library not found.\n");
	}
	FreeLibrary(P13);
	getchar();
	getchar();
	return 0;
}
