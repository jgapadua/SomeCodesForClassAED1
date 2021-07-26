#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void leValores(int *a, int *b);
void menu(int *item);
void somaValores(float n1, float n2, float *soma);
void subtraiValores(float numero1,float numero2, float *r);
void multiplicaValores(float valor1, float valor2, float *multiplica);
void divideValores(float a, float b, float *divide);

int main()
{   setlocale(LC_ALL,"portuguese");
      int op;
      float a, b, r;
      leValores(&a, &b);
    do
    { menu(&op);
     switch (op)
     {case 1:
       somaValores(a,b,&r);
       break;
     case 2:
       subtraiValores(a,b,&r);
       break;
      case 3:
       multiplicaValores(a,b,&r);
       break;
      case 4:
       divideValores(a,b,&r);
       break;
      case 5:
       leValores(&a,&b);
       break;     
     }
     if(op!=9 && op!=5)
     {  printf("O resultado da operacao = %5.2f\n",r);
        system("pause");
      }
    } 
    while (op != 9);
    return 0;
}
void leValores(int *a, int *b)
{ printf("Valores para calcular:\n");
  printf("Digite o 1 valor:");
  scanf("%f", a);
  printf("Digite o 2 valor:");
  scanf("%f", b);
}
void menu(int *item)
{
  system("cls");
  printf("menu:\n");
  printf("1 - adicao\n");
  printf("2 - subtracao\n");
  printf("3 - multiplicacao\n");
  printf("4 - divisao\n");
  printf("5 - novos numeros\n");
  printf("9 - sair do programa\n");
  printf("Escolha:");
  scanf("%d", item);
}
  void somaValores(float n1,float n2, float *soma)
  {
    *soma=n1+n2;
  }
  void subtraiValores(float numero1,float numero2, float *r)
  {
    *r=numero1-numero2;
  }
    void multiplicaValores(float valor1,float valor2, float *multiplica)
  {
    *multiplica=valor1*valor2;
  }
    void divideValores(float a,float b, float *divide)
  {
    *divide=(float)a/b;
  }
  