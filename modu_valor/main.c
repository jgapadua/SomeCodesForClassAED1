#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void menu();
void somaValores(float n1, float n2);
void subtraiValores(float numero1,float numero2);
void multiplicaValores(float valor1,float valor2);
void divideValores(float a,float b);

float r;
int main()
{   setlocale(LC_ALL,"portuguese");
      int op;
      float a,b;
      void leValores()
      {  printf("Valores para calcular:\n");
          printf("Digite o 1 valor:\n");
          scanf("%f", &a);
          printf("Digite o 2 valor:\n");
          scanf("%f", &b);
  }
    leValores();
    do
    { menu();
     printf("Escolha:");
     scanf("%d",&op);
     switch (op)
     {case 1:
       somaValores(a,b);
       break;
     case 2:
       subtraiValores(a,b);
       break;
      case 3:
       multiplicaValores(a,b);
       break;
      case 4:
       divideValores(a,b);
       break;
      case 5:
       leValores();
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

void menu()
{
  system("cls");
  printf("menu:\n");
    printf("1 - adicao\n");
    printf("2 - subtracao\n");
    printf("3 - multiplicacao\n");
    printf("4 - divisao\n");
    printf("5 - novos numeros\n");
    printf("9 - sair do programa\n");
}
  void somaValores(float n1,float n2)
  {
    r=n1+n2;
  }
  void subtraiValores(float numero1,float numero2)
  {
    r=numero1-numero2;
  }
    void multiplicaValores(float valor1,float valor2)
  {
    r=valor1*valor2;
  }
    void divideValores(float a,float b)
  {
    r=(float)a/b;
  }
  