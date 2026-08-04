#include <stdio.h>
#include <conio.h>
#include <locale.h>

int x=5,y=75,z=2;
int soma, sub, div, mul;

int main()
{
     //Acentos do português
     setlocale(LC_ALL, "Portuguese"); 
     
    //soma
    soma = x+y+z;
    printf("Soma 1 - x+y+z: %d\n", soma);
    soma = x+y;
    printf("Soma 2 - x+y: %d\n", soma);
    soma = x+z;
    printf("Soma 3 - x+z: %d\n", soma);
    
    printf("\n");
    
    //subtração
    sub = y-z;
    printf("Subtração 1 - y-z: %d\n", sub);
    sub = x-y;
    printf("Subtração 2 - x-y: %d\n", sub);
    sub = y-x-z;
    printf("Subtração 3 - y-x-z: %d\n", sub);
    
    printf("\n");
    
    //multiplicação
    mul = x*y;
    printf("Multiplicação 1 - y-z: %d\n", mul);
    mul = y*(x-z);
    printf("Multiplicação 2 - x-y: %d\n", mul);

    printf("\n");
    
    //divisão (inteira)
    div = 7/z;
    printf("Multiplicação 1 - y-z: %d\n", div);
    div = 2/5;
    printf("Multiplicação 2 - x-y: %d\n", div);
    
    getch();
    return 0;
}
