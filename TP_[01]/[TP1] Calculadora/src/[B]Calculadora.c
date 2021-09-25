/*
 ============================================================================
 Name        : [TP1]Calculadora.c
 Author      : Pe�a, Hector Emanuel
 Version     :
 Copyright   : Your copyright notice
 Description : Aqu� se encuentra las funciones que realizan los calculos en las funciones "CalcularSuma()", "CalcularResta()", "CalcularDivision()", "CalcularMultiplicacion()" y "CalcularFactorial()".
 ============================================================================
 */

#include <stdio.h>

float CalcularSuma(float sumandoA, float sumandoB)//Funci�n de SUMA.
{
    float suma;

    suma = sumandoA + sumandoB;

    return suma;
}

float CalcularResta(float minuendo, float sustraendo)//Funci�n de RESTA.
{
    float resta;

    resta = minuendo - sustraendo;

    return resta;
}

float CalcularDivision(float divisor, float dividendo)//Funci�n de DIVISI�N.
{
    float cociente;

    if(dividendo == 0)
    {
        cociente = 0;
    }
    else
    {
        cociente = divisor / dividendo;
    }

    return cociente;
}

float CalcularMultiplicacion(float multiplicando, float multimplicador)//Funci�n de MULTIPLICACI�N.
{
    float producto;

    producto = multiplicando * multimplicador;

    return producto;
}

float CalcularFactorial(float factor)//Funci�n de FACTOR.
{
	int i;
	float multiplicadorI = 1;

	if(factor < 0)
	{
		factor = factor * (-1);
	}

	for(i=factor; i>0; i--)
	{
		printf("%d ", i);

		if(i > 1)
		{
			printf("* ");
		}

		multiplicadorI = multiplicadorI * i;
	}

	return multiplicadorI;
}

