#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6(int min, int max);
void ex7(int min, int max);

int main()
{
    system("cls");
   setlocale(LC_ALL, "portuguese");
     //VARIAVEIS GLOBAIS DO EXERCÍCIO 6,7
      int min=1, max=0;//ler dois valores inteiros positivos,limites para definirem um intervalo
     do{
        printf("\nDigite um valor minimo para o intervalo: ");
        scanf("%d", &min);
        printf("\nDigite um valor maximo para o intervalo: ");
        scanf("%d", &max);
    }while(max <= min);
    
    int exec = 1, exer;
    while(exec == 1){
      system("cls");
   printf("Escolha uma dos exercicios ou digite qualquer outra coisa para sair do programa:");
    printf("\n[ 1 ] [ 2 ] [ 3 ] [ 4 ] [ 5 ] [ 6 ] [ 7 ]\n");
   scanf("%d",&exer);
   switch (exer)
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
    case 5:
         ex5();
        break;
      case 6:
         ex6(min,max);
        break;
      case 7:
         ex7(min,max);
        break;
   default:
      printf("\nSaindo do programa!\n");
       system("pause");
       break;
 }
     printf("\n\nDeseja continuar a execução?  [Sim = 1 / Nao = 0]");
        scanf("%d", &exec);
        system("cls");
   }
}

void ex1()
{
  char palavra[50];
  int i, len = 0;
  printf("Digite uma palavra: ");
  scanf("%s",&palavra); //ler uma palavra do teclado;

   len = strlen(palavra);
  for(i=0;i<len;i++)
  {
      if (palavra[i]>='A' && palavra[i]<='Z')//teste para determinar se um caractere é letra maiúscula.
      {
        printf("Letra maiuscula: %c \n",palavra[i]); //mostrar todas as letras maiúsculas que estão na palavra digitada.
      }
  }
}

void ex2()
{
  char palavra[50];
  char caracter;
  int i,maior=0,menor=0,igual=0,len=0;
  printf("Digite uma palavra: ");
  fflush(stdin);
  scanf("%s",&palavra);; //ler uma palavra do teclado;
  printf("Digite um caractere: ");
  fflush(stdin);
  scanf("%c", &caracter); //ler um caractere do teclado
 strupr(palavra);//transforme toda a palavra em maiúscula;
printf("%s\n",palavra); 

   len = strlen(palavra);
  for (i=0;i<len;i++)
  {
      if (palavra[i]>='A' && palavra[i]<='Z')//teste para determinar se um caractere é letra maiúscula.
      {
        if (palavra[i]<caracter)
        {
          printf("Letra maiuscula MENOR a %c: %c \n",caracter,palavra[i]);//mostrar as letras maiúsculas menores que o caractere
          menor++;     //contar as letras maiúsculas menores que o caractere
        }
        else{
              if(palavra[i]>caracter)
              {
                 printf("Letra maiuscula MAIOR  a %c: %c \n",caracter,palavra[i]);//mostrar as letras maiúsculas maiores que o caractere
                  maior++;    //contar as letras maiúsculas maiores que o caractere
              }
              else{
                printf("Letra maiuscula IGUAL a %c: %c \n",caracter,palavra[i]);//mostrar as letras maiúsculas iguais  ao caractere
                igual++;     //contar as letras maiúsculas iguais ao caractere         
              }
        }
      }
  }
  printf("Letras maisculas menores a %c: %d \n", caracter,menor);//mostrar quantas letras são menor que o caractere
  printf("Letras maisculas maiores a %c: %d \n", caracter,maior);//mostrar quantas letras são maiores que o caractere
  printf("Letras maisculas iguais a %c: %d \n", caracter,igual);//mostrar quantas letras são iguais  o caractere
}

void ex3()
{
  char cadeia[50];
  int i,cont=0,len=0;
   printf("Digite uma cadeia de caracter: ");
   fflush(stdin);
    scanf("%s",&cadeia);; //ler uma cadeia de caracteres do teclado;
  printf("%s\n",cadeia); 

  len=strlen(cadeia);
   for(i=0;i<len;i++)
    {
      if ((cadeia[i]>='A' && cadeia[i]<='Z') || (cadeia[i]>='a' && cadeia[i]<='z'))//teste para determinar se um caractere é letra maiúscula ou minúscula .
      {
        printf("Letras: %c \n",cadeia[i]); //mostrar todos símbolos que forem letras, ou maiúsculas ou minúsculas
        cont++;//contar todos símbolos que forem letras, ou maiúsculas ou minúsculas.
      }
  }
     printf("Quantas letras em %s: %d \n", cadeia,cont);//mostrar quantos símbolos que forem letras, ou maiúsculas ou minúsculas.
}

void ex4()
{
  char cadeia[50];
  int i,cont=0,len=0;
   printf("Digite uma cadeia de caracter: ");
   fflush(stdin);
    scanf("%s",&cadeia); //ler uma cadeia de caracteres do teclado;
  printf("%s\n",cadeia); 

   len=strlen(cadeia);
   for(i=len;i>=0;i--) //desde o fim até o início
    {
      if (cadeia[i]>='0' && cadeia[i]<='9')//teste para determinar se um caractere é dígito .
      {
        printf("Digitos: %c \n",cadeia[i]); //mostrar todos os dígitos, percorrendo desde o fim até o início da cadeia de caracteres.
        cont++;//contar todos os dígitos.
      }
  }
     printf("Quantos digitos em %s: %d \n", cadeia,cont);//mostrar quantos dígitos
}

void ex5()
{
  char cadeia[50];
  int i,cont=0, len=0;
   printf("Digite uma cadeia de caracter: ");
   fflush(stdin);
    scanf("%s",&cadeia);  //ler uma cadeia de caracteres do teclado;
  printf("%s\n",cadeia); 

    len=strlen(cadeia);
   for(i=0;i<len;i++) 
    {
      if (!((cadeia[i]>='0' && cadeia[i]<='9') || (cadeia[i]>='a' && cadeia[i]<='z')))//teste para determinar se um caractere NÃO é dígito e nem letra minúscula.
      {
        printf("%c \n",cadeia[i]); //mostrar tudo o que não for dígito e também não for letra minúscula.
        cont++;//contar tudo o que não for dígito e também não for letra minúscula.
      }
  }
     printf("Quantos nao sao digitos e nem letra minuscula em %s: %d \n", cadeia,cont);//mostrar quantos NÃO SÃO dígitos E NEM letra minuscula
}

void ex6(int min, int max)
{
   //Variaveis globais ja foram declaradas no inicio do main
     int n[100], nCtrl=0, endList=0, val=0;

  typedef struct{//permitir que, ao armazenar os dados de uma mesma entidade, isto possa ser feito com uma única variável
        int num;
        int val;
    } Test;

      for (int i=0; i<100;i++) 
      {
        printf("Digite um numero inteiro:\n");
        scanf("%d",&nCtrl);// ler uma quantidade de valores inteiros 
        if (nCtrl != -1) { //FLAG -1;
          n[i]=nCtrl;
        }
        else{
          i++;
          endList=i;
          i=100;
        }
    }

    Test test[endList - 1]; //serem testados  um por vez
      for(int j=0; j< endList;j++)
      {
        if((n[j] % 2 == 0 && n[j] % 3 == 0) && n[j] >= min && n[j] <= max)//teste para determinar se os valores lidos são múltiplos de 2 e de 3, ao mesmo tempo, e pertençam ao intervalo.
        {
          test[j].num = n[j];
            test[j].val = 1;
            val++;//contar os valores lidos os que forem múltiplos de 2 e de 3, ao mesmo tempo, e pertençam ao intervalo.
        }else{
          test[j].num = n[j];
          test[j].val=0;
        }
      }

        for(int k = 0 ; k < endList ; k++){
        if(test[k].val == 1){
            printf(" %d\n", test[k].num);//mostrar os valores lidos os que forem múltiplos de 2 e de 3, ao mesmo tempo, e pertençam ao intervalo.
        }
    }
    printf("Total de numeros existentes entre %d e %d, e que sao multiplos de 2 e de 3 simultaneamente: %d", min, max, val);//mostrar quantos são valores lidos os que forem múltiplos de 2 e de 3, ao mesmo tempo, e pertençam ao intervalo.
    }

   void ex7(int min, int max)
{
   //Variaveis globais ja foram declaradas no inicio do main
     int n[100], nCtrl=0, endList=0, val=0;

  typedef struct{//permitir que, ao armazenar os dados de uma mesma entidade, isto possa ser feito com uma única variável
        int num;
        int val;
    } Test;

      for (int i=0; i<100;i++) 
      {
        printf("Digite um numero inteiro:\n");
        scanf("%d",&nCtrl);// ler uma quantidade de valores inteiros 
        if (nCtrl != -1) { //FLAG -1;
          n[i]=nCtrl;
        }
        else{
          i++;
          endList=i;
          i=100;
        }
    }

    Test test[endList - 1]; //serem testados  um por vez
      for(int j=0; j< endList;j++)
      {
        if((n[j] % 3 == 0 && n[j] % 5 != 0) && n[j] >= min && n[j] <= max)//teste para determinar se os valores lidos são múltiplos de 3, que não forem também múltiplos de 5, e pertençam ao intervalo
        {
          test[j].num = n[j];
            test[j].val = 1;
            val++;//contar os valores lidos os que forem múltiplos de 3, que não forem também múltiplos de 5, e pertençam ao intervalo
        }else{
          test[j].num = n[j];
          test[j].val=0;
        }
      }

        for(int k = 0 ; k < endList ; k++){
        if(test[k].val == 1){
            printf(" %d\n", test[k].num);//mostrar os valores lidos os que forem múltiplos de 3, que não forem também múltiplos de 5, e pertençam ao intervalo
        }
    }
    printf("Total de numeros existentes entre %d e %d, e que sao multiplos de 3 e nao sao de 5 simultaneamente: %d", min, max, val);//mostrar quantos são valores lidos os que forem múltiplos de 3, que não forem também múltiplos de 5, e pertençam ao intervalo
    } 

