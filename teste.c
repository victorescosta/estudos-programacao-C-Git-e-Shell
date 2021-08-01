#include <unistd.h> // biblioteca Unix Standard, necessária para a execução da função write.

int main(void) // função main, ou função de entrada, do tipo inteiro (int) com a saída vazia (void)
{ // colchetes necessários para abrir e fechar o escopo pretendido da função.
    write (1, "Ola Mundo!\n", 11); // função write, onde o primeiro parâmetro significa a saída padrão, o segundo a série de caracteres que irão ser escritos e a terceira o número de bytes total. O caractere de quebra de linha "\n" equivale a um único byte.
    return (0); // especificando o retorno vazio da função.
}

// caso deseje validar esse comando, abra no terminal e digite 'gcc teste.c' sem as aspas e em seguida aperte a tecla enter, assim o compilador irá transformar esse código para o mesmo ser legível para a máquina. Ao compila-lo, o mesmo gerará um arquivo a.out, do qual pode ser executado com o comando no terminal 'a.out', do qual executará a mensagem de "Ola Mundo!" 
