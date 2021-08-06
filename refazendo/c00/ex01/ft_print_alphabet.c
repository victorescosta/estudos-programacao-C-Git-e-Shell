/* Escreva uma função que mostre o alfabeto em minúsculo em apenas uma linha, 
em ordem crescente, começando pela letra ’a’. */
#include <unistd.h> // biblioteca UNIX standard, necessária para a função write
void    ft_print_alphabet(void); // protótipo da função que será chamada

int main(void) // função principal (entry function)
{
    ft_print_alphabet(); // chamada para execução da função
    return(0); // retorno vazio da entry function
} 
/* A função main geralmente é colocada em um arquivo separado,
mas para fins de validação do código, colocarei o mesmo dentro
de um único arquivo. A entrega do exercício é feita sem a main,
contendo apenas a função solicitada (nesse caso, ft_print_alphabet)
*/

void    ft_print_alphabet(void) // função do tipo vazio e sem parâmetros.
{ // abrindo o escopo da função ft_print_alphabet
    char    alpha; // declaração de variável no escopo local.

    alpha = 'a'; // atribuição do valor à variável 'alpha'. podendo ser 97. 
/* na situação exibida, o a entre aspas simples, significa que estou querendo
o caractere a. Como já foi declarado como tal, o mesmo poderia ser substituído
por seu valor na tabela ascii, nesse caso o 97, sem nenhuma aspas. */
    while(alpha <= 'z') // z minúsculo na tabela ascii tem o valor de 122.
    { // abrindo o escopo local do loop while
        write(1, &alpha, 1); // função write, como já explicada no exercício 00
/* No exemplo acima, desejamos escrever o valor que o endereço de alpha guarda,
que será a letra que o mesmo recebe.*/
        alpha++; //incrementador para dar finitude ao loop.
    } // fechando o escopo local do loop while
} // fechando o escopo da função ft_print_alphabet
