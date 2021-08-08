/*Esse programa fará parte de uma série de outros que estou estudando.
O mesmo se trata de uma função que escreve na saída padrão uma série
de "*" que sigam a proporção de acordo com seu parâmetro c recebido.
Para testar suas variações, você só precisa alterar o valor de entrada
na linha 11. */
#include <unistd.h> // biblioteca necessária para funcionamento da função write
void f_square_pattern(int c); // protótipo da função para aceitar qualquer int

int main(void) // main para validar a função e testar os parâmetros de entrada 
{
    f_square_pattern(4); // função com o parâmetro int de entrada
    return (0); // retorno vazio da mesma
}

void f_square_pattern(int c)
{
    int i; // i representando o número de colunas da forma
    int j; // j representando o número de linhas da forma
	
	if (c >= 0) // condição para aceitar de 0 a números positivos
	{
		i = 1; // atribuição inicial do número de colunas
		while(i <= c) // loop para o tamanho máximo de colunas
		{
		j = 1; // atribuição inicial do número de linhas
			while(j <= c) // loop para o tamanho máximo de linhas
			{
			write(1, "*", 1); // marcação de escrita enquanto o loop executado
			j++; // incremento para dar finitude ao loop e retestar condição
			}
		i++; // incremento para dar finitude ao loop coluna e fazer reteste
		write(1, "\n", 1); // quebra de linha para completar a forma
		}
	}
}

/*Interessante notar que para atribuir essa forma (e outras) é imprescindível
declarar primeiro o while das colunas e só depois o while das linhas, uma vez 
que o computador processa "de linha em linha", isso implica dizer que se por 
acaso j for <= 0 (o número de colunas for <= 0), não se chegará na condição 
onde o programa irá executar a função write (que está dentro do loop das 
linhas) e encerrará a execução da função declarada pela main (f_square_pattern)
*/
