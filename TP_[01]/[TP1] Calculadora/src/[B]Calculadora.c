/*
 ============================================================================
 Name        : [TP1]Calculadora.c
 Author      : Peña, Hector Emanuel
 Version     :
 Copyright   : Your copyright notice
 Description : Aquí se encuentra las funciones que realizan los calculos en las funciones "CalcularSuma()", "CalcularResta()", "CalcularDivision()", "CalcularMultiplicacion()" y "CalcularFactorial()".
 ============================================================================
 */

#include <stdio.h>

float CalcularSuma(float sumandoA, float sumandoB)//Función de SUMA.
{
    float suma;

    suma = sumandoA + sumandoB;

    return suma;
}

float CalcularResta(float minuendo, float sustraendo)//Función de RESTA.
{
    float resta;

    resta = minuendo - sustraendo;

    return resta;
}

float CalcularDivision(float divisor, float dividendo)//Función de DIVISIÓN.
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

float CalcularMultiplicacion(float multiplicando, float multimplicador)//Función de MULTIPLICACIÓN.
{
    float producto;

    producto = multiplicando * multimplicador;

    return producto;
}

float CalcularFactorial(float factor)//Función de FACTOR.
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

