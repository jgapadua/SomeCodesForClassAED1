#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

//3 lista de exercicio

void sleep(int secs);
int escolher();
int ex1();
int ex2();
int ex3();
int ex4(); 
int ex5();
int ex6();
int ex7();
int ex8();
int ex9();
int ex10();

int main()
{
    setlocale(LC_ALL,"portuguese");
    printf("1) Leitor de numeros pares e impares.\n");
    printf("2) Maior,menor e media de um conjunto.\n");
    printf("3) Fatorial.\n");
    printf("4) Calcular valor da serie.\n");
    printf("5) Serie de Fibonnaci.\n");
    printf("6) Calcular resultado da equacao de S.\n");
    printf("7) Palindromos\n");
    printf("8) Numeros especiais.\n");
    printf("9) Cara ou Coroa.\n");
    printf("10) Adivinhar numero.\n");
    printf("-------------------------------------------\n");
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
    case 5:
        ex5();
        break;
     case 6:
         ex6();
         break;
     case 7:
         ex7();
         break;
     case 8:
         ex8();
         break;
     case 9:
         ex9();
         break;
     case 10:
         ex10();
         break;
   default:
      printf("O exercicio nao existe na lista!\n");
       system("pause");
   }
} 

int ex1()
{
    int n,par,impar,c;

    n=par=impar=c=0;

    printf("1. Faca um algoritmo que leia um conjunto de numeros (X) e imprima a quantidade de numeros  pares (Q Pares e a quantidade de numeros impares (Q Impares) lidos.\nAdmita que o valor 9999 e utilizado como sentinela (FLAG) para fim de leitura.\nEx.: 1,2,3,4,5,9999 => Pares = 2 Impares = 3\n");
    while (n!=9999) {
        printf("Digite um numero inteiro qualquer:\n");
        scanf("%d",&n);
        fflush(stdin);
        if (n!=9999) {
            if (n%2==0) {
                par++;
            } else {
                impar++;
            }
        }
        c++;
    }
    printf("Foi digitado um total de %d Pares e %d Impares!\n",par,impar);
    printf("\n-------------------------------------------\n");
    sleep(6);
    return main();
}

int ex2()
{
    int n,maior,menor,media,soma,c;

    n=maior=menor=media=soma=0;
    c=1;

    printf("2. Faca um programa que leia um conjunto indeterminado de numeros inteiros positivos e imprima o maior, o menor e a media aritmetica desse conjunto de dados. (Flag-1).\nExecute este programa para os seguintes valores:\n1. 1,2,3,-1\n2. 3,2,1,-1\n3. 1,3,2,-1\n");
    while (n>=0) {
        printf("Digite um numero inteiro qualquer:\n");
        scanf("%d",&n);
        if (n>=0) {
            if (c==1) {
                maior=n;
                menor=n;
            }
            if (n>maior) {
                maior=n;
            }
            if (n<menor) {
                menor=n;
            }
            soma+=n;
            media=soma/c;
            c++;
        }
    }
    printf("O maior numero digitado foi %d!\nO menor numero digitado foi %d!\nA media de todos os numeros e %d!\n",maior,menor,media);
    printf("-------------------------------------------\n");
    sleep(6);
    return main();
}

int ex3()
{
    int n,c,fat;

    fat=1;

    printf("3. Escrever um algoritmo em Portugol, para calcular e imprimir o fatorial de um numero lido do teclado.\nEx.: Fatorial de 5!=5x4x3x2x1=120\n");
    printf("Digite um numero inteiro positivo qualquer:\n");
    scanf("%d",&n);
    while (n<0) {
        printf("-------------------------------------------\n");
        printf("ERRO: Digite um numero inteiro e positivo!");
        printf("-------------------------------------------\n");
        printf("Digite um numero inteiro positivo qualquer:\n");
        scanf("%d",&n);
    }
    for (c=1;1<=c && c<=n;c++) {
        fat*=c;
    }
    printf("O fatorial de %d e %d.\n",n,fat);
    printf("-------------------------------------------\n");
    sleep(6);
    return main();
}

int ex4()
{
    int n,c,cont,cont2;
    float s,c3;

    c3=cont=1;
    s=0;

    printf("4. Calcule o valor da seguinte serie lido a quantidade de termos:\nS = 1 - 1/3^3 + 1/5^3 - 1/7^3 + 1/9^3 - ...");
    printf("Quantos termos voce quer ver dessa serie?\n(ESCREVA UM NUMERO MAIOR QUE 0)\n");
    scanf("%d",&n);
    while (n<=0) {
        printf("-------------------------------------------\n");
        printf("ERRO: ESCREVA UM NUMERO MAIOR QUE 0!");
        printf("-------------------------------------------\n");
        printf("Quantos termos voce quer ver dessa serie?\n(ESCREVA UM NUMERO MAIOR QUE 0)\n");
        scanf("%d",&n);
    }
    cont2=n+(n-1);
    printf("Segue o valor de S:\nS = ");
    for (c=1;1<=c && c<=cont2;c++) {
        if (c%2!=0) {
            if (cont%2==0) {
                c3=-(c*c*c);
                printf("1/%d^3 ",c);
                if (c!=cont2) {
                    printf("+ ");
                }
            } else {
                c3=c*c*c;
                printf("1/%d^3 ",c);
                if (c!=cont2) {
                    printf("- ");
                }
            }
            s+=1/c3;
            cont++;
        }
    }
    printf("= %.3f\n",s);
    printf("-------------------------------------------\n");
    sleep(6);
    return main();
}

int ex5()
{
    int n,c,t1,t2,soma;

    t1=0;
    t2=soma=1;

    printf("5. A serie de fibonacci e formada pela sequencia:\n1,1,2,3,5,8,13,21,34,...\nEscreva um algoritmo que peca um numero N maior que 2. Gere e imprima a serie ate este n-esimo termo.\n");
    printf("Quantos termos voce quer ver dessa serie?\n(ESCREVA UM NUMERO MAIOR QUE 0)\n");
    scanf("%d",&n);
    while (n<=0) {
        printf("-------------------------------------------\n");
        printf("ERRO: ESCREVA UM NUMERO MAIOR QUE 0!");
        printf("-------------------------------------------\n");
        printf("Quantos termos voce quer ver dessa serie?\n(ESCREVA UM NUMERO MAIOR QUE 0)\n");
        scanf("%d",&n);
    }
    for (c=1;1<=c && c<=n;c++) {
        printf("%d",soma);
        if (c!=n) {
            printf(", ");
        } else {
            printf(", ...\n");
        }
        soma=t1+t2;
        t1=t2;
        t2=soma;
    }
    printf("-------------------------------------------\n");
    sleep(6);
    return main();
}

int ex6()
{
    int cont,cont2;
    float c,n,s;

    cont=s=0;
    cont2=1;

    printf("6. Fazer um algoritmo para calcular o valor de s, dado por:\nS = 1/N - 2/N-1 + 3/N-2 - 4/N-3 + ... N/1\nSendo o valor de N  devera se lido do teclado.\n");
    printf("Digite um numero inteiro positivo e maior que 0:\n");
    scanf("%f",&n);
    while (n<=0) {
        printf("------------------------------------------------------\n");
        printf("ERRO: Digite um numero inteiro, positivo, maior que 0!\n");
        printf("------------------------------------------------------\n");
        printf("Digite um numero inteiro positivo e maior que 0:\n");
        scanf("%f",&n);
    }
    printf("Segue o valor de S:\nS = ");
    for (c=1;1<=c && c<=n;c++) {
        if (cont2%2==0) {
            s+=-(c/(n-cont));
            if (c!=n) {
                printf("%.0f/%.0f-%d ",c,n,cont);
                printf("+ ");
            } else {
                printf("%.0f/1",n);
            }
        } else {
            s+=c/(n-cont);
            if (c!=n) {
                printf("%.0f/%.0f-%d ",c,n,cont);
                printf("- ");
            } else {
                printf("%.0f/1",n);
            }
        }
        cont++;
        cont2++;
    }
    printf(" = %.3f\n",s);
    printf("-------------------------------------------\n");
    sleep(6);
    return main();
}

int ex7()
{
    int c,c1,c2,c3,c4,c5,cont,cont2;

    c1=c2=c3=c4=c5=cont=cont2=0;

    printf("7. Numeros palindromos sao aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor.\nExemplo: 929, 44, 97379.\nFazer um algoritmo que imprima todos os numeros palindromos de 10000 a 99999.\n");
    printf("-------------------------------------------\n");
    printf("Sao eles:\n");
    printf("-------------------------------------------\n");
    for (c=10000;10000<=c && c<=99999;c++) {
        c1=c2=c3=c4=c5=cont=0;
        c1=floor(c/10000);
        cont+=c1*10000;
        c2=floor((c-cont)/1000);
        cont+=c2*1000;
        c3=floor((c-cont)/100);
        cont+=c3*100;
        c4=floor((c-cont)/10);
        cont+=c4*10;
        c5=(c-cont);
        if (c1==c5 && c2==c4) {
            cont2++;
            printf("%d- %d\n",cont2,c);
        }
    }
    printf("-------------------------------------------\n");
    sleep(6);
    return main();
}

int ex8()
{
    int c,p1,p2,soma,soma2,cont;

    p1=p2=soma=soma2=cont=0;

    printf("8. O numero 3025 possui a seguinte  caracteristica:\n30 + 25 = 55\n55^2 = 3025\nQuantos e quais sao os numeros de 4 digitos possuem essa caracteristica?\n");
    printf("-------------------------------------------\n");
    printf("Sao eles:\n");
    printf("-------------------------------------------\n");
    for (c=1000;1000<=c && c<=9999;c++) {
        p1=floor(c/100);
        p2=c%100;
        soma=p1+p2;
        soma2=soma*soma;
        if (soma2==c) {
            cont++;
            printf("%d- %d\n",cont,c);
        }
    }
    printf("-------------------------------------------\n");
    sleep(6);
    return main();
}

int ex9()
{
    int c,ac,er,num,x;

    ac=er=0;

    printf("9. Faca um programa para um jogo de cara ou coroa. Neste caso, o jogador escolhe cara ou coroa\n(0 - para cara e 1- para coroa) mostre ao final de 10 tentativas, quantas foram certas e quantas erradas.\n(Utilize o comando para que o computador escolha o resultado).\n");
    printf("-------------------------------------------\n");
    printf("\n0- CARA;\n1- COROA;\n");
    printf("-------------------------------------------\n");
    printf("Voce tera 10 tentativas, ao final irei colocar quantas voce acertou!\n");
    for (c=1;1<=c && c<=10;c++) {
        printf("Tetativa %d- ",c);
        scanf("%d",&num);
        srand(time(NULL));
        x=rand()%2;
        printf("Voce escolheu %d, eu escolhi %d\n",num,x);
        if (num==x) {
            ac++;
        } else {
            er++;
        }
    }
    printf("Acertos = %d\nErros = %d\n",ac,er);
    printf("-------------------------------------------\n");
    sleep(6);
    return main();
}

int ex10()
{
    int menor,maior,medio,c,esc,esc2;

    maior=menor=medio=esc2=c=0;
    esc=2;

    printf("10. Faca um programa para adivinhar um numero escolhido pelo usuario, entre 1 e 1023. Indique ao final quantas tentativas foram necessarias. O programa devera localizar o numero escolhido pelo usuario em no maximo 10 tentativas!\n");
    printf("-------------------------------------------\n");
    printf("Pense em um numero entre 1 e 1023!\n");
    printf("-------------------------------------------\n");
    maior=1023;
    menor=1;
    medio=512;
    while (esc==2) {
        printf("Seu numero e o %d?\nESCREVA:\n  -SIM = 1;\n  -NAO = 2;\n",medio);
        printf("DIGITE 1 OU 2!!!\n");
        scanf("%d",&esc);
        printf("-------------------------------------------\n");
        if (esc==2) {
            printf("Seu numero e maior ou menor que %d?\nESCREVA:\n  -Maior = 1;\n  -Menor = 2;\n",medio);
            printf("DIGITE 1 OU 2!!!\n");
            scanf("%d",&esc2);
            printf("-------------------------------------------\n");
            if (esc2==1) {
                menor=medio;
            } else {
                maior=medio;
            }
            medio=((maior-menor)/2)+menor;
        }
    c++;
    }
    printf("Tentativas para acerto: %d\n",c);
    printf("-------------------------------------------\n");
    sleep(6);
    return main();
}