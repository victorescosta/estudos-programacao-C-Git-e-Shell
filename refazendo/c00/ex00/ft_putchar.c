// Escreva uma função que mostre o caractere (char) passado como parâmetro.
// Função autorizada: write
#include <unistd.h> // Unix standard vrs 5 para declarar a função write.
void ft_putchar(char c); // protótipo esperado

int main(void) // main para validar a função
{
    ft_putchar('b'); // atribuição de parâmetro da função para testar saída
    return (0); // retorno vazio, necessário explicitar para norminette
}

void ft_putchar(char c) // declarando a função tipo void, com parâmetro char c.
{
    write (1, &c, 1); // 1º par saída padrão, 2º ender. da var, 3º bytes number
}
