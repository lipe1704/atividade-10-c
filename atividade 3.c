/* 3. Faça uma função que receba um número inteiro N, maior ou igual a 0, e retorne o valor de seu
fatorial (N!). O fatorial de um número N é calculado por 1 * 2 * 3 *...* N. */
#include <stdio.h>
void fatorial (int fat){
    int soma=1;
    for (int i=1; i<=fat; i++){
        soma*=i;
    }
    printf ("o fatorial de %i é %i ",fat, soma);
}
int main () {
    int fat;
    printf ("informe um número : ");
    scanf ("%i", &fat);
    fatorial(fat);
    return 0;
}
