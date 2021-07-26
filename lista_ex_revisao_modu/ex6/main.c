#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 6 –  utilizando procedimento passando N como parâmetro e retornando o valor em um outro parâmetro
  int numerador= 1, n2=0, denominador=2, terms;
    float res, fra, sinal=1;
    char s;

int calc_resultado(int terms, float *res);//Prototipação da função

int main() //programa principal
{   printf("Digite o numero de termos da serie de Fibonacci: ");
    scanf("%d",&terms);
    calc_resultado(terms, &res); //Chamada da função

   printf("= %.2f\n",res);
    return 0;
}

int calc_resultado(int terms,float *res) //Função
{
        float preRes;
      preRes = (float)numerador / denominador;
    if(terms == 1)
        printf("%d/%d",numerador,denominador);
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
            preRes += fra; //equivale a res = res + fra            
            
            printf(" %c %d/%d",s,numerador,denominador);
        }
        return *res = preRes;
    }
}

