#include <stdio.h>
#include <conio.h>
#include <float.h>

#define pi 3.14159

char character;

// Não existe “short float” em C, mas a linguagem permite o uso de “long double” 
// para criar um tipo de ponto flutuante com precisão ainda maior que o “double”
float float_number;
double double_number;
long double long_double_number;

// signed e unsigned: Não funcionam com float. Esses modificadores servem 
// apenas para tipos inteiros (int) e caracteres (char), pois definem a 
// presença ou ausência de sinal matemático no armazenamento binário dos bits.
// Os números float já possuem nativamente um bit dedicado ao sinal.
int int_number;
unsigned int unsigned_int;
unsigned long int unsigned_long_int;
unsigned short int unsigned_short_int;


// Especificadores de formato são códigos iniciados por % usados para indicar 
// o tipo de dado que o programa vai ler ou mostrar na tela. São eles:

// %d (ou %i) - Número inteiro decimal
// %f - Número real de ponto flutuante
// %lf - Número real de dupla precisão (double)
// %c - Um único caractere
// %s - Cadeia de caracteres
// %u - Número decimal sem sinal
// %o - Número em formato octal
// %x - Número em formato hexadecimal
// %p - Endereço de memória de um ponteiro

int main()
{   
    
    printf("Inteiro:\n");
    
    // signed int (int) possui 4 bytes ou (32-bit) 
    // vai de -2,147,483,648 até 2,147,483,647
    // pode depender da arquitetura (16/32/64) e do compilador
    int_number = -2147483648;
    printf("%d\n", int_number);
    int_number = 2147483647;
    printf("%d\n", int_number);
    
    printf("Inteiro (Unsigned):\n");

    // unsigned int possui 4 bytes ou (32-bit) 
    // vai de 0 até 4,294,967,295
    // pode depender da arquitetura (16/32/64) e do compilador
    unsigned_int = 0;
    printf("%u\n", unsigned_int);
    unsigned_int = 4294967295;
    printf("%u\n", unsigned_int);
    
    printf("Inteiro Longo (Unsigned):\n");

    // unsigned long int possui é o mesmo que unsigned int
    // vai de 0 até 4,294,967,295
    // pode depender da arquitetura (16/32/64) e do compilador
    // 64bit linux pode ser um número de 64bits
    unsigned_long_int = 0;
    printf("%u\n", unsigned_long_int);
    unsigned_long_int = 4294967295;
    printf("%u\n", unsigned_long_int);
    
    printf("Inteiro Curto (Unsigned):\n");

    // unsigned short int possui 2 bytes ou (16-bit) 
    // vai de 0 até 4,294,967,295
    // pode depender da arquitetura (16/32/64) e do compilador
    unsigned_short_int = 0;
    printf("%u\n", unsigned_short_int);
    unsigned_short_int = 65535;
    printf("%u\n", unsigned_short_int);
    
    // float
    // %E especifica a notação científica
    printf("Min float: %E\n", FLT_MIN);
    printf("Max float: %E\n", FLT_MAX);
    
    // double
    printf("Min double: %E\n", DBL_MIN);
    printf("Max double: %E\n", DBL_MAX);
    
    // long double (problema do devc++)
    // valores reais:
    // Min long double: 3.362103E-4932
    // Max long double: 1.189731E+4932
    printf("Min long double: %LE\n", LDBL_MIN);
    printf("Max long double: %LE\n", LDBL_MAX);
    
    // char
    // aspas simples (') definem um único caractere (tipo char)
    // aspas duplas (") definem uma cadeia de caracteres
    character = 'c';
    printf("%c", character);
    
    
    getch();
    return 0;
}
