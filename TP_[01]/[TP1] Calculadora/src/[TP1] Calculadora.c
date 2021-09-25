/*
 ============================================================================
 Name        : [TP1]Calculadora.c
 Author      : Peña, Hector Emanuel
 Version     :
 Copyright   : Your copyright notice
 Description : Aquí se encuentra la función main, donde se solicita la carga de Operadores, se envian por parametro a las funciones en "[B]Calculadora.c" y se reciben por parametro, los resultados.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "[B]Calculadora.h"

int main()
{
    setbuf(stdout, NULL);
    //Declaración de variables.
    float operadorA; //Primer Operador.
    float operadorB; //Segundo Operador.
    float resultadoSuma;
    float resultadoResta;
    float resultadoDivision;
    float resultadoMultiplicacion;
    float resultadoFactoreoA;
    float resultadoFactoreoB;
    int opcion;

    //Inicialización de variables.
    operadorA=0;
    operadorB=0;

    do
    {//5. Inicio en "do while", para condicionar el punto "5. Salir".

        printf("\n\n\n***Menu de Opciones***\n\n1.Ingresar el primer operador para (A = %.2f).\n2.Ingresar el segundo operador para (B = %.2f).\n3.Calcular todas las operaciones.\n4.Informar resultados.\n5.Salir.\n\nIngrese el número de la opción que desea realizar: ", operadorA, operadorB);
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1://1. Ingreso del primer valor para la variable "operadorA".
                printf("Ingrese un valor para el operador (A = %.2f): ",operadorA);
                scanf("%f", &operadorA);

            break;
            case 2://2. Ingreso del primer valor para la variable "operadorB".
                printf("Ingrese un valor para el operador (B = %.2f): ",operadorB);
                scanf("%f", &operadorB);

            break;
            case 3://3. Calculo de todas las operaciones. Impresion de "CALCULOS REALIZADOS".
                resultadoSuma = CalcularSuma(operadorA, operadorB);
                resultadoResta = CalcularResta(operadorA, operadorB);
                resultadoDivision = CalcularDivision(operadorA, operadorB);
                resultadoMultiplicacion = CalcularMultiplicacion(operadorA, operadorB);

                printf("\n\n¡CALCULOS REALIZADOS!\n\n");

            break;
            case 4://4. Impresion de resultados.
                printf("*El resultado de la suma, es: %f\n*El resultado de la resta, es: %.2f\n", resultadoSuma, resultadoResta);

                if(resultadoDivision == 0)
                {
                    printf("*¡No se puede dividir entre cero!\n");
                }
                else
                {
                    printf("*El resultado de la división, es: %.2f\n", resultadoDivision);
                }

                printf("*El resultado de la multiplicación, es: %.2f\n", resultadoMultiplicacion);

                printf("*El resultado del factoreo de A, es: ");
                resultadoFactoreoA = CalcularFactorial(operadorA);
                printf(" = %.2f.\n", resultadoFactoreoA);

                printf("*El resultado del factoreo de B, es: ");
                resultadoFactoreoB = CalcularFactorial(operadorB);
                printf(" = %.2f.\n", resultadoFactoreoB);

            break;
            case 5:
            	printf("Gracias por utilizar este programa.");

            break;
            default:
            	printf("[ERROR]: ¡Opción no valida!\n\n");

            break;
        }

    }while(opcion != 5);

    return 0;
}
