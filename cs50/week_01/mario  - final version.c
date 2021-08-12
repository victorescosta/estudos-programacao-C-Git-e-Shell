#include <cs50.h> // cs50 library, to run the get_int function
#include <unistd.h>  // Unix Standard library, to run the write function

int main(void)
{
    int height;  // variable that receives height input
    int i; // column variable
    int j; // line variable
    
    do // making an always loop if the right condition isn't satisfied
    {
        height = get_int("Height: ");
    }
    while (height <= 0 || height > 8); // only accept height <= 0 or height > 8

    i = 1; // column variable to run the while loop
    while (i <= height) // while column is <= height
    {
        j = height; // making line equal to the number of desired height // j = 1 for the opposite side
        while (j >= 1) // while number of lines is >= 1 // j <= i for the opposite side
        {
            if (i >= j) // if column is >= line
            {
                write(1, "#", 1); // write a char
            }
            else // otherwise
            {
                write(1, " ", 1); // write a spacebar
            }
            j--; // decrease the number of lines // increase for the opposite side
        }
        i++; // increase the i column
        write(1, "\n", 1); // write a newline and after that, retest the while condition
    }
}
/* [linha 17] Enquanto i coluna for menor ou igual ao tamanho final da figura,
ou seja, enquanto tal condição for verdadeira, execute o que está
contido dentro do escopo desse loop. 
[linha 19] j linha recebe o número do tamanho total da figura. Ou seja, se o 
tamanho da figura for 8, conterá 8 linhas. Se 1, apenas uma única linha.
[linha 20] Enquanto j linha for maior ou igual a 1, execute o que está contido
dentro do escopo desse loop.
[linha 22] Se i coluna for maior ou igual a j linha, escreva "#", do contrário
escreva um espaço em branco.
[linha 26] decremente j linha e reteste a condição [linha 22]
[linha 28] incremente i coluna e em seguida, salte uma linha e reteste a condi-
ção [linha 17]
*/