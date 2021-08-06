/* Escreva uma função que mostre o alfabeto em minúsculo em apenas uma linha, 
em ordem decrescente, começando pela letra ’z’. */
#include <unistd.h> // biblioteca padrão UNIX, com a função write
void    ft_print_reverse_alphabet(void); // prototipando a função

int main(void) // main p/ validar a função (mais detalhes no ex. 01)
{
    ft_print_reverse_alphabet();
    return(0);
}

void    ft_print_reverse_alphabet(void) // funç tipo vazio, com parâmetro vazio
{
    char alpha; // declaração da variável caractere alpha

    alpha = 'z'; // atribuição do valor de alpha
    while(alpha >= 'a') // Enquanto alpha ('z'), for maior ou igual a 'a'
    {
        write(1, &alpha, 1); // escreva o valor do endereço de alpha
        alpha--; // decremente 1 de alpha
/* Seguindo a lógica da tabela ascii, como 'z' equivale ao valor 122 e 'a'
equivale ao valor de 97, uma operação de decremento se faz necessária
até alcançar a letra a, que equivale ao número 97 na tabela ascii */
    }
}
