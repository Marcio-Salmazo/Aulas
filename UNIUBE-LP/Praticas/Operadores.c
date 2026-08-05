#include <stdio.h>
#include <conio.h>
#include <locale.h>

int x=5,y=75,z=2;
int soma, sub, div, mul;

int main()
{
     //Acentos do português
     setlocale(LC_ALL, "Portuguese"); 
     
     printf("valor inicial das variáveis:");
     printf("x = %d\n",x);
     printf("y = %d\n",y);
     printf("z = %d\n",z);
     
     printf("\n");
     
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
    printf("Multiplicação 1 - x*y: %d\n", mul);
    mul = y*(x-z);
    printf("Multiplicação 2 - y*(x-z): %d\n", mul);

    printf("\n");
    
    //divisão (inteira)
    div = 7/z;
    printf("Multiplicação 1 - y-z: %d\n", div);
    div = z/5;
    printf("Multiplicação 2 - x-y: %d\n", div);
    
    printf("\n");
    
    //modulo da divisão (resto)
    //funciona apenas com valores inteiros 
    //para imprimir o símbolo de porcentagem é necessário escrever %%
    int mod;
    mod = 70%33;
    printf("Modulo (Resto) 1 - 7%%z: %d\n", mod);
    mod = y%x;
    printf("Modulo (Resto) 2 - y%%x: %d\n", mod);
    
    printf("\n");
    
    //incremento e decremento
    int i = 1;
    printf("variável i = %d\n",i);
    i++;
    printf("incremento = %d\n",i);
    i--;
    printf("decremento = %d\n",i);
    
    printf("\n");
    
    //Operador lógico AND
    //Esse operador funciona apenas com 0 e 1 (Falso e Verdadeiro)
    int and;
    and = 0 && 1;
    printf("0 AND 1 = %d\n",and);
    and = 1 && 1;
    printf("1 AND 1 = %d\n",and);
    
    //Operador lógico OR
    //Esse operador funciona apenas com 0 e 1 (Falso e Verdadeiro)
    int or;
    or = 0 || 1;
    printf("0 OR 1 = %d\n",or);
    or = 0 || 0;
    printf("0 OR 0 = %d\n",or);
    
    //Operador lógico NOT
    //Esse operador funciona apenas com 0 e 1 (Falso e Verdadeiro)
    int not;
    not = !0;
    printf("NOT 0 = %d\n",not);
    not = !1;
    printf("NOT 1 = %d\n",not);
    
    getch();
    return 0;
}
