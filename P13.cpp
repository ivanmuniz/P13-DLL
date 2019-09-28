// MathLibrary.cpp : Defines the exported functions for the DLL.
//#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <limits.h>
#include "P13.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <Windows.h>

int asciiBinaryToInt(char* s)
{
	int iResult = 0;
	int iLength = (int)strlen(s);
	int iAux = iLength;
	char* aux = (char*)malloc(sizeof(char) * 9);
	for (int i = 0; s[i] != '\0'; i++) {
		aux[i] = s[iAux - i - 1];
		if (aux[i] == '1') {
			iResult += pow(2, i);

		}
		else if (aux[i] == '0') {
			continue;
		}
		else {
			perror("Caracter invalido encontrado, solo se aceptan 0 y 1.");
			printf("El numero decimal para %s hasta que se encontr� el caracter invalido es: %d\n", s, iResult);
			free(aux);
			return -1;
		}
	}
	free(aux);
	return iResult;
}

int asciiHEXToInt(char* s) {
	int iResult = 0;
	int iLength = (int)strlen(s);
	int iAux = iLength;
	int iNum;
	char* aux = (char*)malloc(sizeof(char) * 9);
	for (int i = 0; s[i] != '\0'; i++) {
		aux[i] = s[iAux - i - 1];
		if (aux[i] == '0' || aux[i] == '1' || aux[i] == '2' || aux[i] == '3' || aux[i] == '4' || aux[i] == '5' || aux[i] == '6' || aux[i] == '7' || aux[i] == '8' || aux[i] == '9') {
			iNum = aux[i] - '0';
			iResult += iNum * pow(16, i);
		}
		else if (tolower(aux[i]) == 'a' || tolower(aux[i]) == 'b' || tolower(aux[i]) == 'c' || tolower(aux[i]) == 'd' || tolower(aux[i]) == 'e' || tolower(aux[i]) == 'f') {
			//            printf("Letra\n");
			iNum = tolower(aux[i]) - 'W';
			iResult += iNum * pow(16, i);
		}
		else {
			perror("Caracter invalido detectado\n");
			//            printf("%i\n", iResult);
			printf("El numero decimal para %s hasta que se encontr� el caracter invalido es: %d\n", s, iResult);
			free(aux);
			return -1;
		}
	}
	free(aux);
	return iResult;
}

int asciiOCTToInt(char* s) {
	int iResult = 0;
	int iLength = (int)strlen(s);
	int iAux = iLength;
	int iNum;
	char* aux = (char*)malloc(sizeof(char) * 9);
	for (int i = 0; s[i] != '\0'; i++) {
		aux[i] = s[iAux - i - 1];
		if (aux[i] == '0' || aux[i] == '1' || aux[i] == '2' || aux[i] == '3' || aux[i] == '4' || aux[i] == '5' || aux[i] == '6' || aux[i] == '7') {
			iNum = aux[i] - '0';
			iResult += iNum * pow(8, i);
		}
		else {
			perror("Caracter invalido detectado\n");
			//            printf("%i\n", iResult);
			printf("El numero decimal para %s hasta que se encontr� el caracter invalido es: %d\n", s, iResult);
			free(aux);
			return -1;
		}
	}
	free(aux);
	return iResult;
}
