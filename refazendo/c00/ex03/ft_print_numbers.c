/* Escreva uma função que mostre todos os números em uma única linha em ordem
crescente.*/
#include <unistd.h> // biblioteca para funcionamento da função write
void ft_print_numbers(void); // protótipo da função, sem nenhum parâmetro

int main(void) // main para validar a função
{
    ft_print_numbers();
    return(0);
}

void ft_print_numbers()
{
    int num; // ou int ou char podem ser utilizados. char é um int subtype
    num = '0'; // uso das aspas simples para especificar o valor do char

    while(num <= '9') // seguindo lógica similar do exercício ex02
    {
        write(1, &num, 1);
        num++; // uso do operador de incremento para dar finitude ao loop
    }
}
