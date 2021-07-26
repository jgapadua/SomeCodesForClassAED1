#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include <locale.h>
#include<string.h>


int ex1();
int ex2();
int ex3();
int ex4();
int ex5();
int ex6();
int ex7();
int ex8();
int ex9();


int main(){
  setlocale(LC_ALL, "portuguese");
  printf ("1. Fazer um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este numero e par ou impar.\n");
  ex1();
  printf ("2. Fazer um algoritmo peca o nome e as 3 notas de um aluno e mostre, alem do nome e do valor da media do aluno, uma mensagem de (Aprovado), caso a media seja igual ou superior a 6, ou a mensagem (reprovado), caso contrario.\n");
  ex2();
  printf ("3. Fazer um algoritmo que leia a temperatura da agua e mostre se esta no estado solido, liquido ou gasoso.\n");
  ex3();
  printf ("4.Leia um valor X e se ele for menor que 0 avalie Y = x2 + 4. Se ele for maior que 0 avalie x3-3 e se ele for igual a 0 de uma mensagem de erro.\n");
  ex4();
  printf ("5. Construa um algoritmo que receba como entrada tres valores (A,B e C). Apos o processamento o menor valor devera estar em A e o maior valor em C, e o valor intermediario em B. Imprima A,B e C.\n");
  ex5();
  printf ("6. Desenvolver um algoritmo que leia tres numeros inteiros: X, Y, Z e verifique se o numero X e divisivel por Y e por Z. \n");
  ex6();
  printf ("7. O numero 3025 possui a seguinte caracteristica:30 + 25 = 55552 = 3025.Fazer um algoritmo que dado um numero de 4 digitos (verifique se o numero pertence a faixa) calcule e escreva se ele possui ou não esta caracteristica. \n");
  ex7();
  printf ("8. Ler um codigo do teclado e  mostrar o nome correspondente, de acordo com a lista : 221 Bernardo, 211 Eustaquio, 311 Luiz, 312 Mario, 332 Artur. \n");
  ex8();
    printf ("9. Numeros palindromos sao aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor. Exemplo:929, 44, 97379. Fazer um algoritmo que dado um numero de 5 digitos; calcule e escreva se este e ou nao palindromo.\n");
  ex9();
  return 0;
}

//1. Fazer um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este numero e par ou impar.
int ex1(){
  int num;
  printf ("Digite um numero:");
	scanf("%d",&num);
	if (num % 2 == 0){
		printf("NUMERO PAR\n");
	}
	else if (num % 2 != 0){
		printf("NUMERO IMPAR\n");
	}
	return 0;
}

/* 2. Fazer um algoritmo peça o nome e as 3 notas de um aluno e mostre, além do nome e do valor da media do aluno, 
uma mensagem de "Aprovado", caso a media seja igual ou superior a 6, ou a mensagem "reprovado", caso 
contrario.
*/
int  ex2()
{
  char nome[21];
  float n1, n2, n3, media;
  printf("Digite o nome do aluno: ");
  scanf("%s", nome);
  printf ("Digite a primeira nota:");
  scanf ("%f", &n1);
  printf ("Digite a segunda  nota:");
  scanf ("%f", &n2);
  printf ("Digite a terceira nota:");
  scanf ("%f", &n3);
  media = (n1+n2+n3)/3;
  if (media >= 6.00){
  printf("O aluno %s teve MEDIA = %.2f\n Aprovado\n",nome,media);
}
  else if  (media<6.00){
  printf("O aluno %s teve MEDIA = %.2f\n Reprovado\n",nome,media);
}
return 0;
}

//3. Fazer um algoritmo que leia a temperatura da água e mostre se está no estado solido, líquido ou gasoso.
int  ex3()
{
  float temp;
  printf("Digite uma temperatura: ");
	scanf("%f",&temp);

	if (temp <= 0){
		printf("SOLIDO\n");
	}
	 if (temp >= 100){
		printf("GASOSO\n");
	}
  if (temp>0 && temp<100)
   {
    printf("LIQUIDO\n");
  }
 
	return 0;
}

/*4. Leia um valor X e se ele for menor que 0 avalie Y = x2 + 4. Se ele for maior que 0 avalie x3
-3 e se ele for igual a 0 de 
uma mensagem de erro.
*/
int ex4()
{
  int x,y,r;
  printf("Digite o valor de x:");
	scanf("%d",&x);

  if(x<0){
    y=pow(x,2)+4;
    printf("Y=x2+4\n");
    printf("Y=%d^2+4\n",x);
    printf("%d\n",y);
  }
  if(x>0){
     r=pow(x,3)-3;
    printf("x3-3\n");
    printf("%d^3-3\n",x);
    printf("%d\n",r);
  }
  if (x==0)
 {
     printf("ERRO");
  }
  	return 0;
}


//5. Construa um algoritmo que receba como entrada três valores (A,B e C). Após o processamento o menor valor deverá estar em A e o maior valor em C, e o valor intermediário em B. Imprima A,B e C.
int ex5()
{
  int A,B,C,n1,n2,n3;
  printf("Digite um valor:");
	scanf("%d",&n1);
  printf("Digite um valor:");
	scanf("%d",&n2);
  printf("Digite um valor:");
	scanf("%d",&n3);

//menor valor
  if (n1<n2 && n1<n3)
  {
    A=n1;
  }
   if (n2<n1 && n2<n3)
  {
    A=n2;
  }
  if (n3<n1 && n3<n2)
  {
    A=n3;
  }

  //maior valor
  if (n1>n2 && n1>n3)
  {
    C=n1;
  }
   if (n2>n1 && n2>n3)
  {
    C=n2;
  }
   if (n3>n1 && n3>n2)
  {
    C=n3;
  }

// valor INTERMEDIARIO
  if (n1<n2 && n1>n3)
  {
    B=n1;
  }
   if (n2<n1 && n2>n3)
  {
    B=n2;
  }
   if (n3<n1 && n3>n2)
  {
    B=n3;
  }
 printf("Menor valor: %d",A);
printf("Valor intermediario: %d",B);
printf("Maior valor: %d",C);
return 0;
}

//6. Desenvolver um algoritmo que leia três números inteiros: X, Y, Z e verifique se o número X é divisível por Y e por Z. 
int ex6()
{
  int x,y,z,resto1,resto2;
   printf ("\nDigite um numero:");
  scanf ("%d", &x);
  printf ("\nDigite um numero:");
  scanf ("%d", &y);
  printf ("\nDigite um numero:");
  scanf ("%d", &z);
  resto1=x%y;
  resto2=x%z;
  if ( resto1==0 && resto2==0)
  {
     printf ("\n O %d e divisivel por %d e %d\n",x,y,z);
  }
  if( resto1==0 && resto2!=0)
 {
     printf ("\n O %d e divisivel por %d mas nao por %d\n",x,y,z);
  }
  if( resto1!=0 && resto2==0)
 {
     printf ("\n O %d e divisivel por %d mas nao por %d\n",x,z,y);
  }
  else if ( resto1!=0 && resto2!=0)
  {
     printf ("\n O %d nao e divisivel nem %d nem por %d\n",x,y,z);
  }
return 0;
}

//7. O numero 3025 possui a seguinte característica:30 + 25 = 55  55^2 = 3025. Fazer um algoritmo que dado um numero de 4 dígitos (verifique se o número pertence a faixa) calcule e escreva se ele
int ex7()
{
  int numero=1000; numero<=9999;
   printf ("\nDigite um numero com 4 digitos:");
  scanf("%d",&numero);  
  
 if(numero == (((numero/100)+(numero%100))*((numero/100)+(numero%100))))
 {
      printf("%d: %d+%d=%d -> %d^2=%d \n",numero,numero/100,numero%100,(numero/100)+(numero%100),(numero/100)+(numero%100),numero);
     printf("O numero possui a caracteristica\n");
 }
 else {
    printf("O numero nao possui a caracteristica\n");
  }

return 0;
}

//8. Printe o nome de uma pessoa dado um código enviado
int ex8()
{
    int choosen_number;
    printf("Digite um numero inteiro de um usuario: ");
    scanf("%d", &choosen_number);
    switch (choosen_number)
    {
    case 221:
        printf("Bernardo");
        break;

    case 211:
        printf("Eustaquio");
        break;

    case 311:
        printf("Luiz");
        break;

    case 312:
        printf("Mario");
        break;

    case 332:
        printf("Artur");
        break;

    default:
        printf("Usuario com codigo inexistente");
        break;
    }
    return 0;
}

//9. Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor. Exemplo:929, 44, 97379. Fazer um algoritmo que dado um numero de 5 dígitos; calcule e escreva se este e ou não palíndromo.
int ex9()
{
    char original_number[5], reversed_number[5];
    int number, reversed = 0, d1, d2, d3, d4, d5;
    printf("Digite um numero inteiro com 5 casas: ");
    scanf("%s", original_number);
    number = atoi(original_number); //atoi->converte strings em números inteiros.
    d1 = number % 10;
    d2 = (number % 100) / 10;
    d3 = (number % 1000) / 100;
    d4 = (number % 10000) / 1000;
    d5 = (number % 100000) / 10000;
    reversed = (d1 * 10000) + (d2 * 1000) + (d3 * 100) + (d4 * 10) + d5;
    if (number == reversed)
    {
        printf("O numero e palindromo");
    }
    else
    {
        printf("O numero nao e palindromo");
    }
       return 0;
}

