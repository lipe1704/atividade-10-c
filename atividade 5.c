/*5. Faça um programa que contenha uma função que verifique se uma data é válida ou não,
retornando os valores VERDADEIRO (1) para data válida ou FALSO (0) para data inválida. Os
parâmetros da função são três números inteiros, correspondentes a dia, mês e ano da data a ser
verificada. */
#include <stdio.h>
int teste (int dia, int mes, int ano, int test){
    if (ano<1){
        test=0;
    }
    if (mes<1 || mes>12){
        test=0;
    }
    if (mes==2 || mes==4 || mes==5 || mes==9 || mes==11){
        if (mes==2){
            if ((ano%100!=0 && ano%4==0) || (ano%100==0 && ano%400==0)){
                if (dia<=29 && dia>=1){
                    test=1;
                }
                else{
                    test=0;
                }
            }    
            else if (dia <=28 && dia>=1){
                test=1;
            }
            else{
                test=0;
            }
        }
        else{
            if (dia<=30 && dia>=1){
                test=1;
            }else{
                test=0;
            }
        }
    }
    else{
        if (dia <=31 && dia>=1){
            test=1;
        }else{
            test=0;
        }
    }
    return test;
}

int main () {
    int dia, mes, ano;
    printf ("informe um dia : ");
    scanf ("%i", &dia);
    printf ("informe um mês : ");
    scanf ("%i", &mes);
    printf ("informe um ano : ");
    scanf ("%i", &ano);
    int test = teste (dia, mes, ano, test);
    if (test==0){
        printf ("FALSO");
    }
    else {
        printf ("VERDADEIRO");
    }
}
