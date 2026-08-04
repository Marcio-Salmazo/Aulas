#include <stdio.h>
#include <conio.h>

#define pi 3.14159

char character;

float float_number;
double double_number;
long double long_double_number;

int int_number;
unsigned int unsigned_int;
unsigned long int unsigned_long_int;
unsigned short int unsigned_short_int;


int main()
{
    // signed int (int) possui 4 bytes ou (32-bit) 
    // vai de -2,147,483,648 até 2,147,483,647
    // pode depender da arquitetura (16/32/64) e do compilador
    int_number = 2147483647;
    printf("%d", int_number);
    
    //TERMINAR
    
    getch();
    return 0;
}
