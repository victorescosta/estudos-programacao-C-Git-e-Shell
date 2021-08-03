#include <stdio.h> // biblioteca padrão, contém a função printf
#include <unistd.h> // biblioteca Unix, contém a função write

int main(void) 
{
    char c;
    int i;
    
    char str[]="Hello again!"; /* cadeia de caracteres declarada assim:*str 
    é implicitada como const. ver declaração sobre a falha de segmentação*/
    char str2[]="Hello world!"; // formato alterável, sem const

    str2[4]= 65; // alteração específica de caractere da string via ASCII code
    str[4]= 66; /* falha de segmentação, pois desejou-se alterar uma variável
    do tipo const. Para resolver o erro, retira-se o '*' da mesma */
    c = 'c';
    
    for(i = 1; i <= 5; i++) // testando uso do for, printar texto 4 vezes
    {
        printf("\nNao aguento mais.");
    }
    write(1, "\n", 1);
    write(1, "Using UNIX function: Goodbye, World!\n", 37);
    printf("Print only a string (str): %s\n", str);
    printf("Print only a string (str2): %s\n", str2);
    printf("Goodbye, World!\n");
    printf("Print only a char: %c\n", c);

    return (0);
}
