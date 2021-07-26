#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>


int  ex1()
{
  char nome[21];
  float n1, n2, n3, media;
  printf("Digite o nome do aluno: ");
  gets(nome);
  printf ("Digite a primeira nota:");
  scanf ("%f", &n1);
  printf ("Digite a segunda  nota:");
  scanf ("%f", &n2);
  printf ("Digite a terceira nota:");
  scanf ("%f", &n3);
  media = (n1+n2+n3)/3;
  if (media >= 90){
  printf("O aluno(a) %s teve MEDIA = %.2f\n Com conceito: A\n",nome,media);
}
  else if (media>75 && media<90){
  printf("O aluno(a) %s teve MEDIA = %.2f\n Com conceito: B\n",nome,media);
}
else if (media>=60 && media<75){
  printf("O aluno(a) %s teve MEDIA = %.2f\n Com conceito: C\n",nome,media);
}
else if (media>=40 && media<60){
  printf("O aluno(a) %s teve MEDIA = %.2f\n Com conceito: D\n",nome,media);
}
else if (media<40){
  printf("O aluno(a) %s teve MEDIA = %.2f\n Com conceito: E\n",nome,media);
}
return 0;
}

int ex2()
{
     int i;
    char cadeia[40];
  printf("\nDigite uma cadeia de no maximo 40 caracteres.TODAS LETRAS  MAIUSCULAS\n");
    gets(cadeia);
     for (i = 0; cadeia[i] != NULL ; i++){
      if (!((cadeia[i]>=65) && (cadeia[i]<=90))){
        printf("\n\033[31;1m ERROR:\033[0mApenas valores em maiusculo.\n");
        return ex2();
      }
       else{
          printf("\nTudo certo\n");
      }
     }
  return 0;
}

int main()
{
    int cod,idade,sexo,mulher=0,soma=0,homem=0;
    float maiorsal=0,menorsal=99999,sal,mediaidad=0;
    printf("Cadastro\n\n");
    printf("Codigo:\n");
    scanf("%d", &cod);
    while(cod>=0)
    {
        printf("Digite a idade:\n");
        scanf("%d",&idade);
        if(idade<18)
        {
            printf("\nError: Idade nao permitida no cadastro!\n\n");
            printf("Digite a idade:\n");
            scanf("%d",&idade);
           
        }
        soma=soma+idade;
        mediaidad=soma/homem;
        printf("Digite o sexo (Responda com 1 - M ou 2 - F):\n");
        scanf("%d",&sexo);
        if(sexo==2 && idade>=50)
        {
            mulher++;
        }
        printf("Digite o sálario:\n");
        scanf("%f",&sal);
        if(sal>maiorsal && sexo==2)
        {
            maiorsal=sal;
        }
        if(sal<menorsal && sexo==2)
        {
            menorsal=sal;
        }
        printf("\n\n");
        printf("Codigo de pessoa:\n");
        scanf("%d", &cod);
    }
    printf("\n\n");
    printf("a) a média de idade dos homens do grupo; %.2f\n\n", mediaidad);
    printf("b) o maior salário das mulheres do grupo; R$ %.2f\n\n", maiorsal);
    printf("b) o menor salario do grupo pesquisado: R$ %.2f\n\n", menorsal);
    printf("c) No grupo tem %d mulheres maiores de 50 anos.",mulher);
    printf("\n\n\n");

    return 0;
}
