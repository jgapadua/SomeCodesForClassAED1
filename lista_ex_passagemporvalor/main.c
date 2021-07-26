#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <time.h>

void sleep(int secs);
void menu();
int ex1();
int ex2();
int ex3();
int ex4();
int ex5(); 

int FAT;
int Fib;
int main()
{  setlocale(LC_ALL,"portuguese");
      int ex;
    do
    { menu();
     printf("Escolha:");
     scanf("%d",&ex);
     switch (ex)
     {case 1:
       ex1();
       break;
     case 2:
       ex2();
       break;
      case 3:
       ex3();
       break;
      case 4:
       ex4();
       break;
      case 5:
       ex5();
       break;     
     }
     system("pause");
    } 
    while (ex != 9);
    return 0;
}

void menu()
{
  system("cls");
  printf("menu:\n");
    printf("1 - Fatorial\n");
    printf("2 - Termo correspondente ao valor passado da serie de Fibonacci\n");
    printf("3 - Soma dos termos da serie de Fibonacci\n");
    printf("4 - Quantidade de números ímpares\n");
    printf("5 - Soma dos numeros impares\n");
    printf("9 - sair do programa\n");
}

int fatorial(int n){
    float fatorial = 1;
    for(int i = n; i > 0; i--)
    {
      fatorial *= n;
      n--;
    }
    return fatorial;
}
int ex1()
{
    printf("\n1- Elabore um procedimento para calcular o Fatorial de um numero passado por parametro. A resposta devera ser retornada em uma variavel definida como global de nome FAT. Faca tambem um programa principal que chame esse procedimento.\n\n");
    int n = 0;
    printf("Digite um numero para calcular seu fatorial: ");
    scanf("%d", &n);
    int FAT = fatorial(n);
    printf("\nO fatorial de %d: [%d]\n", n, FAT);
     sleep(3);
}


int selecionaNumero(int nPos)
{
    int n = 1, ult = 1, penult = 0;
    int soma = 0;
    printf("[ ");
    for (int i = 0; i < nPos-1; i++)
    {
        printf("%d,",n);
        n = ult + penult;
        penult = ult;
        ult = n;
    }
    printf("%d",n);
    printf("]");
    return n;
}
int ex2()
{
    printf("\n2- Elabore um procedimento que receba um valor passado por parametro. Esse procedimento devera devolver na variavel global Fib o termo correspondente ao valor passado da serie de Fibonacci. Exemplo suponha que seja passado o valor 6, entao devera retorna o 6 termo da serie ou seja 1,1,2,3,5,8, ou seja, devera atribuir a variavel Fib o valor 8.\n\n");

    int nFib;
    printf("Digite a posicao do termo na serie de fibonacci: ");
    scanf("%d", &nFib);

    Fib = selecionaNumero(nFib);
    printf("\nNumero da posicao %d de Fibonacci: [%d]\n", nFib, Fib);
  sleep(3);
}


int somaFibonacci(int nTerms)
{
    int n = 1, ult = 1, penult = 0;
    int soma = 0;
    printf("[");
    for (int i = nTerms; i > 0; i--)
    {
        printf("%d,", n);
        soma += n;
        n = ult + penult;
        penult = ult;
        ult = n;
    }
    printf("]");
    return soma;
}
int ex3()
{
    printf("\n3- Elabore um procedimento que receba um valor passado por parametro. Esse procedimento devera devolver na variavel global Fib a soma dos termos da serie de Fibonacci do primeiro termo ate o termo passado. Exemplo suponha que seja passado o valor 6, entao devera atribuir a variavel Fib a soma de 1+1+2+3+5+8, ou seja, Fib= 20.\n\n");

    int nFib;
    printf("Digite o numero de termos da serie de Fibonacci: ");
    scanf("%d",&nFib);

    Fib = somaFibonacci(nFib);
    printf("\nSoma dos termos: [%d]\n", Fib);
     sleep(3);
}


int numerosImpares(int min, int max)
{
    int nImpares = 0;
    for (int i = min; i <= max; i++)
    {
        if (i % 2 == 1)
        {
            nImpares++;
        }
    }
    return nImpares;
}
int ex4()
{
    printf("\n4- Elabore um procedimento que receba dois valores passados por parametro. Esse procedimento  devera atribuir a variavel impar, a quantidade de numeros impares entre o intervalo fechado correspondente aos valores passados. Por exemplo, suponha que os valores passados seja, 3 e 6, devera devolver impar=2, pois existem os numeros impares 3 e 5 no intervalo.\n\n");
    int min = 0, max = 0, nImpares = 0;
    do
    {
        printf("\nDigite um numero minimo para o intervalo: ");
        scanf("%d", &min);
        printf("\nDigite um numero maximo para o intervalo: ");
        scanf("%d", &max);
        if (min >= max)
        {
            printf("\nERROR\nDigite valores validos\n");
        }
        else
        {
            printf("\n\nIntervalo: [%d , %d]", min, max);
        }
    } while (min >= max);

    nImpares = numerosImpares(min, max);
    printf("\n A quantidade de valores impares no intervalo: [%d]\n", nImpares);
    sleep(3);
}


int somaImpar(int min, int max)
{
    int somaImpares = 0;
    if (min % 2 == 0)
    {
        min++;
    }
    if (max % 2 == 0)
    {
        max--;
    }
    somaImpares = min + max;
    return somaImpares;
}
int ex5()
{
    printf("\n5- Elabore um procedimento que receba dois valores passados por parametro. Esse procedimento  devera atribuir a variavel impar, a soma dos numeros impares entre o intervalo fechado correspondente aos valores passados. Por exemplo, suponha que os valores passados seja, 3 e 6, devera devolver impar=8, pois a soma dos numeros impares 3 e 5 no intervalo e 8.\n\n");

    int min = 0, max = 0, soma = 0;
    do
    {
        printf("\nDigite um numero minimo para o intervalo: ");
        scanf("%d", &min);
        printf("\nDigite um numero maximo para o intervalo: ");
        scanf("%d", &max);
        if (min >= max)
        {
            printf("\nERROR\nDigite valores validos\n");
        }
        else
        {
            printf("\n\nIntervalo: [%d , %d]", min, max);
        }
    } while (min >= max);

    soma = somaImpar(min, max);

    printf("\n A Soma do valores impares no intervalo: [ %d ]\n", soma);
    sleep(3);
}