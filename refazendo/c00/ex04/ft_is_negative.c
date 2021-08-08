/* Escreva uma função que mostre ’N’ ou ’P’ segundo o sinal do inteiro passado
como parâmetro. Se n for negativo, indique ’N’. Se n for positivo ou nulo, 
indique ’P’.*/
#include<unistd.h> // biblioteca que contém a função write
void    ft_is_negative(int n); // protótipo esperado

int main (void) // main para validar a função. explicações no ex02
{
    ft_is_negative('\0'); // parâmetro para testar função
    return(0);
}

void    ft_is_negative(int n) // função esperada
{
    if (n < 0) // utilização da condicional if, se n for < 0
        write(1, "N", 1); // escreva "N"
    else if (n > 0 || n == '\0') // senão, se n for > 0 OU nulo '\0'
        write(1, "P", 1); // escreva "P"
}
