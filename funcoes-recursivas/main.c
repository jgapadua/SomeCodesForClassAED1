#include <stdio.h>
#include <stdlib.h>

int fat(int n1);
int soma(int n);
int resto(int nume, int deno);
int main()
{
    int n;
    int nume,  deno;
    printf("Fatorial de 5 = %d\n",fat(5));
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
    printf("A soma de 1 a %d = %d\n",n, soma(n));
   printf("Digite o valor de x: ");
    scanf("%d", &nume);
    printf("Digite o valor de y: ");
    scanf("%d", &deno);
      printf("O resto de %d por  %d = %d\n",nume,deno, resto(nume, deno));
    return 0;
}
int fat(int n1)
{
  if (n1==0)
     return 1;
  else
    return n1*fat(n1-1);
}

int soma(int n)
{
    if(n == 1)
        return 1;
    else
        return ( n + soma(n-1) );
}

 int resto(int nume, int deno)
{
    return (nume - deno * (nume / deno));
}
 

