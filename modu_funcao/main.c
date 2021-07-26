#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void leValores(int *a,int *b);
int menu();
float somaValores(float n1, float n2);
float subtraiValores(float numero1,float numero2);
float multiplicaValores(float valor1,float valor2);
float divideValores(float a,float b);

int main()
{   setlocale(LC_ALL,"portuguese");
  int op;
  float a,b;
  leValores(&a,&b);
  do
  {   op=menu();
    switch (op)
    { case 1:
      printf("O resultado da operacao = %5.2f\n",somaValores(a,b));
      break;
    case 2:
      printf("O resultado da operacao = %5.2f\n",subtraiValores(a,b));
      break;
    case 3:
      printf("O resultado da operacao = %5.2f\n",multiplicaValores(a,b));
      break;
    case 4:
      printf("O resultado da operacao = %5.2f\n",divideValores(a,b));
      break;
    case 5:
      leValores(&a,&b);
      break;                    
    }
    if (op!=9 && op!=5)
    {
      system("pause");
    }
  }
  while (op!=9);
  return 0;
}
  void leValores(int *a, int *b)
  { printf("Valores para calcular:\n");
    printf("Digite o 1 valor:");
     scanf("%f",a);
    printf("Digite o 2 valor:");
     scanf("%f",b);
  }
  int menu()
  {
    int item;
    system("cls");
    printf("menu:\n");
    printf("1 - adicao\n");
    printf("2 - subtracao\n");
    printf("3 - multiplicacao\n");
    printf("4 - divisao\n");
    printf("5 - novos numeros\n");
    printf("9 - sair do programa\n");
    printf("Escolha:");
    scanf("%d",&item);
    return item;
  }
  float somaValores(float n1,float n2)
  {
    float soma;
    soma=n1+n2;
    return soma;
  }
  float subtraiValores(float numero1,float numero2)
  {
    return (numero1-numero2);
  }
    float multiplicaValores(float valor1,float valor2)
  {
    float multiplica;
    multiplica=valor1*valor2;
    return multiplica;
  }
    float divideValores(float a,float b)
  {
    float divide;
    divide=(float)a/b;
    return divide;
  }
  