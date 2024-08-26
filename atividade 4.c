/* 4. Escreva um programa em C que contenha uma função que recebe dois números inteiros I e J, e
calcule a expressão I!/J!*(I-J)!. Esta função deve invocar outra função para calcular o fatorial de
cada número individualmente. Dica: use a mesma função desenvolvida no exercício anterior.  */
#include <stdio.h>
int conta (int I, int J){
    int soma1=1, soma2=1, soma3=1, sub, result;
    for (int i=1; i<=I; i++){
        soma1*=i;
    }
    for (int i=1; i<=J; i++){
        soma2*=i;
    }
    sub=I-J;
    for (int i=1; i<=sub; i++){
        soma3*=sub;
    }
    result=soma1/soma2*soma3;
    return result;
    
}
int main () {
    int I, J;
    printf ("informe um número : ");
    scanf ("%i" , &I);
    printf ("informe um número : ");
    scanf ("%i" , &J);
    if (I < J) {
        printf("Erro: I deve ser maior ou igual a J\n");
        return 0;
    }
    int result = conta(I, J);
    printf ("o resultado é : %i", result);
}
