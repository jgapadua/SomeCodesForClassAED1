#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ex01();
int ex02();
int ex03();
int ex04();
int main()
{
  printf ("Primeiro exercicio.\n");
  ex01();
  printf ("Segundo exercicio.\n");
  ex02();
  printf ("Terceiro exercicio.\n");
  ex03();
   printf ("Quarto exercicio.\n");
  ex04();
  return 0;
}

//1. Fazer um programa para ler dois valores e mostrar a sua média.
int ex01()
{
  int a, b;
  float media;
  printf ("Digite um valor:");
  scanf ("%d", &a);
printf ("Digite outro valor:");
  scanf ("%d", &b);
  media = (a+b)/2;
  printf("A media de %d + %d = %5.2f\n",a,b,media);
  return 0;
}
//2. Escreva um programa que solicite ao usuário a altura e o raio de um cilindro circular e imprima o volume do cilindro.
int ex02()
{
  int h, r;
  float v;
  printf ("Digite a altura do cilindro:");
  scanf ("%d", &h);
printf ("Digite o raio do  cilindro:");
  scanf ("%d", &r);
  r=pow(r,2);
  v = 3.14 * r * h;
  printf("O volume do cilindro: %.2f\n",v);
  return 0;
}
/*3. Uma empresa contrata um encanador a R$ 20.00 por dia. Crie um programa que solicite o número de dias trabalhados 
pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% de impostos.
*/
int ex03()
{
  int d;
  float vd,slbruto,percen,slliquido;
  printf ("Digite quantos dias o encanador trabalhou:");
  scanf ("%d", &d);
  vd= 20.00;
  slbruto=  (vd*d) ;
  percen= 0.08 * slbruto;
  slliquido= slbruto - percen;
  printf("O valor pago ao encanador: %.2f\n",slliquido);
  return 0;
}

/*4. O cardápio de uma lanchonete é dado abaixo. Prepare um programa que leia a quantidade de cada item que você 
consumiu e calcule a conta final.
*/
int ex04()
{
  int qtH, qtC, qtF, qtR, qtM;
  float vlH, vlC, vlF, vlR, vlM, vlFinal;
  vlH=30.00;
  vlC=35.50;
  vlF=20.50;
  vlR=10.00;
  vlM=30.00;
  printf ("Hamburguer:%.2f ,Cheeseburger:%.2f,Fritas:%.2f,Refrigerante:%.2f,Milkshake:%.2f.\n",vlH,vlC,vlF,vlR,vlM);
printf ("Quantos hamburgueres que voce consumiu?");
    scanf ("%d", &qtH);
    printf ("Hamburguer:%d\n",qtH);
printf ("Quantos cheeseburgers que voce consumiu?");
    scanf ("%d", &qtC);
    printf ("Hamburguer:%d,Cheeseburger:%d\n",qtH,qtC);
printf ("Quantas fritas que voce consumiu?");
   scanf ("%d", &qtF);
   printf ("Hamburguer:%d,Cheeseburger:%d,Fritas:%d\n",qtH,qtC,qtF);
printf ("Quantos refrigerantes que voce consumiu?");
   scanf ("%d", &qtR);
   printf ("Hamburguer:%d,Cheeseburger:%d,Fritas:%d,Refrigerante:%d\n",qtH,qtC,qtF,qtR);
printf ("Quantos milkshakes que voce consumiu?");
   scanf ("%d", &qtM);
   printf ("Hamburguer:%d,Cheeseburger:%d,Fritas:%d,Refrigerante:%d,Milkshake:%d\n",qtH,qtC,qtF,qtR,qtM);
  printf("A sua conta foi de %d hamburgueres,%d cheeseburgers,%d fritas,%d refrigerantes,%d milkshakes.\n",qtH,qtC,qtF,qtR,qtM);
  vlFinal=(vlH*qtH)+(vlC*qtC)+(vlF*qtF)+(vlR*qtR)+(vlM*qtM);
 printf("A sua conta ficou no valor de %.2f .\n",vlFinal);
  return 0;
}