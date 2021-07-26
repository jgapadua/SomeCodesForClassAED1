#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int ex4a();
int ex4b();
int ex4c();
int ex4d();
int ex4e();
int ex4f();
int ex4g();
int ex4h();
int ex4i();
int ex4j();

int main()
{
    setlocale(LC_ALL, "portuguese");
   printf ("a) Leia um numero e imprima seu sucessor.\n");
  ex4a();
  printf ("b) Calcule a media aritmetica de quatro numeros inteiros dados.\n");
  ex4b();
  printf ("c) Faca um algoritmo que receba 3 notas e seus respectivos pesos, calcule e mostre a media ponderada dessas notas.\n");
  ex4c();
   printf ("d) Leia uma temperatura dada na escala Celsius (C) e imprima o equivalente em Fahrenheit (F).\n");
  ex4d();
   printf ("e)  Faca um algoritmo que receba o salario de um funcionario e o percentual de aumento, calcule e mostre o novo salario.\n");
  ex4e();
  printf ("f) Faca um algoritmo que peca ao usuario a base e a altura e calcule a area de um triangulo.\n");
  ex4f();
  printf ("g) Faca um algoritmo que receba o peso do Saco de racao e a quantidade de racao fornecida para cada gato. Calcule e mostre quanto restara de racao no saco apos 5 (cinco) dias.\n");
  ex4g();
   printf ("h) Ler dois numeros inteiros para variaveis a e b. Trocar o valor de b com o de a, e imprimi-los.\n");
  ex4h();
    printf ("i) Leia um numero e imprima o resto da divisao por 7. Utilize o comando resto (a,b) na linguagem C (a %% b).\n");
  ex4i();
  printf ("j) Calcular a soma dos termos de uma P.A. lendo os valores do primeiro termo, do segundo termo e do número de termos. formulas:Sn=n*(a1+an)/2, onde Sné a soma dos termos, a1o primeiro termo e ano último termo. O n-ésimotermo de uma progressão aritmética,  pode ser obtido por meio da formula: an=a1+(n-1).r, onde r é a razão da P.A. \n");
  ex4j();
  return 0;
}

/*
4) Para cada um dos problemas a seguir, expresse um algoritmo que possa ser utilizado para solucionar, utilize o 
Portugol e passe para a linguagem C.
*/
//a. Leia um número e imprima seu sucessor.
int ex4a()
{
  int a, b;
  printf ("Digite um numero:");
  scanf ("%d", &a);
  b = a+1;
  printf("O sucessor de %d foi %d\n",a,b);
  return 0;
}

//b. Calcule a média aritmética de quatro números inteiros dados.
int ex4b()
{
  int a, b, c, d;
  float media;
  printf ("Digite um numero:");
  scanf ("%d", &a);
  printf ("Digite um numero:");
  scanf ("%d", &b);
  printf ("Digite um numero:");
  scanf ("%d", &c);
  printf ("Digite um numero:");
  scanf ("%d", &d);
  media = (a+b+c+d)/4;
  printf("A media aritmetica de %d+%d+%d+%d/4 = %.2f\n",a,b,c,d,media);
  return 0;
}

//c. Faça um algoritmo que receba 3 (três) notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.
int ex4c()
{
  float n1, n2, n3, media;
  int p1, p2, p3;
  printf ("Digite a primeira nota:");
  scanf ("%f", &n1);
  printf("\nDigite o peso da primeira nota: ");
  scanf("%d", &p1);
 printf("Digite a segunda nota: ");
 scanf("%f", &n2);
 printf("\nDigite o peso da segunda nota: ");
 scanf("%d", &p2);
 printf("Digite a terceira nota: ");
 scanf("%f", &n3);
 printf("\nDigite o peso da terceira nota: ");
 scanf("%d", &p3);
  media = (n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
  printf("A media ponderada: %.2f\n",media);
  return 0;
}

//d. Leia uma temperatura dada na escala Celsius (C) e imprima o equivalente em Fahrenheit (F).
int ex4d()
{
  float c, f;
  printf ("Digite uma temperatura em Celsius:");
  scanf ("%f", &c);
  f = (c*9/5) + 32;
  printf("A temperatura %.2f C  em Fahrenheit: %.2f F\n",c,f);
  return 0;
}

//e. Faça um algoritmo que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o novo salário.
int ex4e()
{
  float sal, porc_aumento, vlr_aumento, novosal;
  printf ("Informe o salario atual do funcionario: R$");
  scanf ("%f", &sal);
  printf ("Informe o percentual de aumento:");
  scanf ("%f", &porc_aumento);
  vlr_aumento = sal * (porc_aumento/100);
  novosal = sal + vlr_aumento;
  printf("O novo salario: R$ %.2f\n",novosal);
  return 0;
}

//f. Faça um algoritmo que peça ao usuário a base e a altura e calcule a área de um triangulo. 
int ex4f()
{
    float b,h,A;
  printf ("Informe a base do triangulo:");
  scanf ("%f", &b);
  printf ("Informe a altura do triangulo:");
  scanf ("%f", &h);
  A = (b*h)/2;
  printf("A area do triangulo: %.2f\n",A);
  return 0;
}

/*g. Pedro comprou um saco de Ração com peso em quilos. Pedro possui 2 (dois) gatos para os quais fornece a quantidade de ração em gramas. 
Faça um algoritmo que receba o peso do Saco de ração e a quantidade de ração fornecida para cada gato. Calcule e mostre quanto restará de ração no saco após 5 (cinco) dias 
*/
int ex4g()
{
    float peso_saco, racao_dia, quant_restante;
  printf ("Informe o peso do Saco de racao em kg:");
  scanf ("%f", &peso_saco);
  printf ("Informe a quantidade de racao em g fornecida para cada gato por dia:");
  scanf ("%f", &racao_dia);
  quant_restante = peso_saco - ((racao_dia * 2)/1000) * 5;
  printf("Restara  no saco  de %.2f kg de racao apos 5 dias %.2f kg\n",peso_saco,quant_restante);
  return 0;
}

//h. Ler dois números inteiros para variáveis a e b. Trocar o valor de b com o de a, e imprimi-los.
int ex4h()
{
    int a,b,A;
  printf ("Informe o valor de A:");
  scanf ("%d", &a);
  printf ("Informe o valor de B:");
  scanf ("%d", &b);
 A=a;
 a=b;
 b=A;
  printf("O valor de A: %d e B: %d  \n",a,b);
  return 0;
}

//i. Leia um número e imprima o resto da divisão por 7. Utilize o comando resto (a,b) na linguagem C (a % b).
int ex4i()
{
    int n1,resto;
  printf ("Digite um numero:");
  scanf ("%d", &n1);

 resto = n1 % 7;
printf ("O resto da divisao e %d",resto);
  return 0;
}

//j. Calcular a soma dos termos de uma P.A. lendo os valores do primeiro termo, do segundo termo e do número de termos. formulas:Sn=n*(a1+an)/2, onde Sné a soma dos termos, a1o primeiro termo e ano último termo. O n-ésimotermo de uma progressão aritmética,  pode ser obtido por meio da formula: an=a1+(n-1).r, onde r é a razão da P.A.
int exj(){
    float n1,n2,numerodetermos,nesimo,soma,razao;
    printf("Me diga o primeiro numero\n");
    scanf("%f",&n1);
    printf("Me diga o segundo numero\n");
    scanf("%f",&n2);
    printf("Me diga o numero de termos\n");
    scanf("%f",&numerodetermos);
    printf("Me diga a razao da PA\n");
    scanf("%f",&razao);
    nesimo=n1+(numerodetermos-1)*razao;
    soma=numerodetermos*(n1+nesimo)/2;
    printf("A soma dos numeros da pa e igual a %.2f\n",soma);
}

