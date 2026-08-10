#include <stdio.h>
#include <conio.h>

// Função getch(): A princípio, esta função captura um caractere da entrada e 
// retorna de modo oculto (Pode ser usada para a inserção de senhas). 
// Contudo, é comumente usada para pausar o terminal

// Normalmente, quando se faz um programa que só imprime algo no terminal, 
// o Windows abre uma janela do cmd.exe, executa o programa e logo em 
// seguida fecha a janela.

// O conio.h é um arquivo de cabeçalho usado para controle de entrada e saída 
// no console (funcional apenas no Windows e MS-DOS)

int main()
{
    printf("Hello World");
    getch();
    return 0;
}
