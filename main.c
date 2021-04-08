/**************************************************************************************
1. Faça um algoritmo para calcular a área de uma circunferência, considerando a
fórmula ÁREA = π * (RAIO*RAIO). Utilize as variáveis AREA e RAIO, a constante π (pi =  
3,14159) e os operadores aritméticos de multiplicação;
***************************************************************************************/

/*
#include <stdio.h>

int main()
{

    float raio, area,pi=3.14159;
    scanf ("%f", &raio);

    area = pi * (raio * raio);
    printf("A=%.2lf\n", area);

    return 0;
}

*/

/******************************************************************************
2. Faça um algoritmo que calcule a área de um triângulo, considerando a fórmula
área = (base * altura) / 2 . Utilize as variáveis AREA, BASE e ALTURA e os
operadores aritméticos de multiplicação e divisão;
*******************************************************************************/

/*Calculo da área de um triangulo*/

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    float base, altura, area;
    printf("Digite o valor da base do triângulo: ");
    scanf("%f", &base);
    printf("Digte o valor da altura do triângulo: ");
    scanf("%f", &altura);
    area = ((base*altura)/2);
    printf("A area do triângulo é: %2.1f\n\n", area);

    return 0;
}
*/

/**********************************************************************************
3. Faça um algoritmo que leia uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = (9 * C + 160) / 5,
na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius;
***********************************************************************************/

/*
#include <stdio.h>
 
int main(void)
{
    float c, f;
 
    printf("C = "); scanf("%f", &c);
 
    f = (9 * c + 160) / 5;
 
    printf("F = %f", f);
 
    return(0);
}
*/

/****************************************************************************
4. Faça um algoritmo que leia os valores de COMPRIMENTO, LARGURA e
ALTURA e apresente o valor do volume de uma caixa retangular. Utilize para o
cálculo a fórmula VOLUME = COMPRIMENTO * LARGURA * ALTURA.
*****************************************************************************/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float volume, comprimento, largura, altura;
    printf ("PARO OBTER O VOLUME DE UMA CAIXA RETANGULAR, DIGITE A SEGUIR O QUE SE PEDE?\n");
//obtendo as entradas
    printf ("Digite o comprimento?\n>>");
    scanf ("%f", &comprimento);

    printf ("Digite a largura?\n>>");
    scanf ("%f", &largura);

    printf ("Digite a altura?\n>>");
    scanf ("%f", &altura);

//formula
    volume = comprimento * largura * altura;

//saida
    printf ("O volume da caixa retangular e: %.3f", volume);

    return 0;
}


*/

/**********************************************************************************
5.Faça um algoritmo que leia dois valores para as variáveis A e B e efetue a troca
dos valores de forma que a variável A passe a possuir o valor da variável B e a
variável B passe a possuir o valor da variável A. 
Apresente os valores trocados.
A = 10 e B = 5.... A = 5 e B = 10
************************************************************************************/

#include <stdio.h>

int main()
{

// Variaveis
    int A, B, aux;

// Entrada
    printf("Entre com o valor de A: ");
    scanf("%d", &A);
    printf("Entre com o valor de B: ");
    scanf("%d", &B);

//Processamento
    aux = A;
    A = B;
    B = aux;

//Saída
    printf(" O novo valor de A é:  %d \n", A);
    printf(" O novo valor de B é:  %d \n", B);

    return 0;

}

