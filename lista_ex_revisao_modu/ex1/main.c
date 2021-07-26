#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 1 – em um programa principal

int main()
{setlocale(LC_ALL, "portuguese");
    int numerador= 1, n2=0, denominador=2, terms;
    float res, fra, sinal=1;
    char s;

    printf("Digite o numero de termos da serie de Fibonacci: ");
    scanf("%d",&terms);

    res = (float)numerador / denominador;
    if(terms == 1)
        printf("%d/%d = %.2f",numerador,denominador,res);
    else
    { printf(" %c %d/%d",s,numerador,denominador);
        for(int i=2; i<=terms; i++){
            denominador += 2; //equivale a denominador = denominador + 2
            numerador += n2; //equivale a numerador = numerador + n2
            n2 = numerador - n2; 
            if(i % 2 == 0){
                sinal = 1;
                s = '+';
            }
            else{
                sinal = -1;
                s = '-';
            }
            fra = (float) numerador / denominador * sinal;
            res += fra; //equivale a res = res + fra            
            
            printf(" %c %d/%d",s,numerador,denominador);
        }
        printf("= %.2f\n",res);
    }
    return 0;
}
