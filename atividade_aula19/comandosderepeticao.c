#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <locale.h>
#include<string.h>
#include <time.h>

void sleep(int secs);
int escolher();
int ex1();
int ex2();
int ex3();
int ex4(); 
/* int ex5();
int ex6();
 */
int main()
{
printf("\n1. Escrever a sequencia de 1 ate 10\n"); 
printf("\n2. Escrever a sequencia de 10 ate 1\n"); 
printf("\n3. Leia um numero e imprima os numeros impares de 1 ate esse numero.\n"); 
printf("\n4. Escrever um algoritmo, para calcular e imprimir o fatorial de um número lido do teclado. Ex. Fatorial de 5! = 5x4x3x2x1=120.\n"); 
escolher();
}

 int escolher()
{
   setlocale(LC_ALL, "portuguese");
   int ex;
   printf("Escolha um exercicio:");
   scanf("%d",&ex);
   switch (ex)
   {
   case 1:
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
/*     case 5:
       ex5();
      break; 
     case 6:
       ex6();
      break; */
   default:
      printf("Código inválido\n");
   }
} 

int ex1()
{
int x;
  x=1;
  while (x<=10)
  {
  printf("%d\n",x);
  x=x+1;
  }
    sleep(6);
    return main();
  }

  int ex2()
{
int x;
  x=10;
  while (x>=1)
  {
  printf("%d\n",x);
  x=x-1;
  }
    sleep(6);
    return main();
  }

  int ex3()
{
int num,impares;
  printf("Digite um numero:");
  scanf("%d",&num);
  impares=1;
  while (impares<=num)
  {
  printf("%d\n",impares);
  impares=impares+2;
  }
    sleep(6);
    return main();
  }

int ex4()
{
int i, n,fat;
fat = 1;
printf("Digite um numero:");
scanf("%d", &n);
i = n;
while(i >= 1)
{
    fat *= i;
    i--;
}
  printf("%d! = %d\n", n, fat);

    sleep(6);
    return main();
}

