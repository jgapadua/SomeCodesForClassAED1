#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

void verificarRepeticao(char[], int);
void verificarExistencia(char[], char, int *);

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
    printf("1) Maior e Menor palavra digitada.\n");
    printf("2) Contador de letras 'A'.\n");
    printf("3) Posicoes das letras 'A'.\n");
    printf("4) Posicao de um caractere.\n");
    printf("5) Contador de caractere maiusculo e minusculo.\n");
    printf("6) Contador de caracteres,numeros e letras.\n");
    printf("7) String inversa\n");
    printf("8) tirar espacos em branco de uma string(com string auxiliar).\n");
    printf("9) tirar espacos em branco de uma string(sem string auxiliar).\n");
    printf("10) Quantas vezes uma string esta na outra.\n");
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
    printf("\nExercicio 1\n");
    char frase[60],menorlex[60],maiortam[60],menortam[60],maiorlex[60];
    printf("\nDigite uma palavra(flag sair): ");
    fflush(stdin);
    gets(frase);
    strcpy(maiortam,frase);
    strcpy(menortam,frase);
    strcpy(maiorlex,frase);
    strcpy(menorlex,frase);
    while(strcmp(frase,"sair")!=0)
    {
        if(strcmp(frase,menorlex)<0)
        {
            strcpy(menorlex,frase);
        }
        if(strcmp(frase,maiorlex)>0)
        {
            strcpy(maiorlex,frase);
        }
        if(strlen(frase)>strlen(maiortam))
        {
            strcpy(maiortam,frase);
        }
        if(strlen(frase)<strlen(menortam))
        {
            strcpy(menortam,frase);
        }
        printf("\nDigite uma palavra: ");
        fflush(stdin);
        gets(frase);
    }
    printf("\nA maior frase lexicograficamente foi %s e a menor foi %s.",maiorlex,menorlex);
    printf("\nA frase com maior tamanha digitado foi %s e a com menor tamanho foi %s.",maiortam,menortam);

    printf("\n-------------------------------------------\n");
    sleep(6);
    return main();
}

int ex2()
{
    printf("\nExercicio 2\n");

    int i, letrasA;
    char palavra[50];
    printf("\nDigite uma palavra de ate 50 caracteres.\n");
    fflush(stdin);
    gets(palavra);

    for (i = 0; i <= 50; i++)
    {
        if (palavra[i] == 'A' || palavra[i] == 'a')
        {
            letrasA++;
        }
    }
    printf("O numero de letra A na palavra: %s foi de: %d", palavra, letrasA);

     printf("\n-------------------------------------------\n");
    sleep(6);
    return main();
}

int ex3()
{
    printf("\nExercicio 3\n");
    printf("--------------------------------------------------------------------------------------------------\n");

    int i, letrasA;
    char palavra[50];
    printf("\nDigite uma palavra de ate 50 caracteres.\n");
    gets(palavra);

    for (i = 0; i <= 50; i++)
    {
        if (palavra[i] == 'A' || palavra[i] == 'a')
        {
            printf("\nA palavra %s possui uma letra a na posicao: %d", palavra, i);
            letrasA++;
        }
    }
     printf("\n-------------------------------------------\n");
    sleep(6);
    return main();
}

int ex4()
{
    printf("\nExercicio 4\n");

    int i;
    char palavra[50], letraescolhida[1];
    printf("Digite uma palavra de ate 50 caracteres.");
    gets(palavra);

    printf("\nDigite uma letra para verificar quantas vezes ela se repete na palavra.\n");
    gets(letraescolhida);

    for (i = 0; i <= 50; i++)
    {
        if (palavra[i] == letraescolhida[0])
        {
            printf("\nO caracter %s aparece na posicao: %d", letraescolhida, i);
        }
    }
     printf("\n-------------------------------------------\n");
    sleep(6);
    return main();
}

int ex5()
{
    printf("\nExercicio 5\n");

    int i, qntLetra;
    char palavra[50], letraescolhida[1];
    printf("\nDigite uma palavra de ate 50 caracteres.\n");
    gets(palavra);

    printf("\nDigite uma letra para verificar quantas vezes ela se repete na palavra.\n");
    gets(letraescolhida);

    for (i = 0; i <= 50; i++)
    {
        if (palavra[i] == letraescolhida[0])
        {
            printf("\nO caracter "
                   "%c"
                   " aparece na posicao: %d",
                   letraescolhida[0], i);
            qntLetra++;
        }
    }

    printf("\nO caracter "
           "%c"
           " apareceu %d vez(es) na palavra %s.",
           letraescolhida[0], qntLetra, palavra);

    printf("\n-------------------------------------------\n");
    sleep(6);
    return main();
}

int ex6()
{
    printf("\nExercicio 6\n");

    int i, qntLetra, qntNum, qntNada;
    char palavra[50];
    printf("\nDigite uma palavra de ate 50 caracteres.\n");
    gets(palavra);

    for (i = 0; i < 50; i++)
    {

        if (isalpha(palavra[i]))
        {
            qntLetra++;
        }

        if (isdigit(palavra[i]))
        {
            qntNum++;
        }
        else
        {
            qntNada++;
        }
    }

    printf("\nA palavra %s possui %d letras, %d numeros e %d que nao sao nem numeros nem letras.", palavra, qntLetra, qntNum, qntNada);

     printf("\n-------------------------------------------\n");
    sleep(6);
    return main();
}

int ex7()
{
    printf("\nExercicio 7\n");

    int i, tamanho;
    char palavra[50], palavra2[50];
    printf("Digite uma palavra de ate 50 caracteres.\n");
    gets(palavra);
    tamanho = strlen(palavra) - 1;
    for (i = 0; palavra[i] != '\0'; i++)
    {
        palavra2[tamanho] = palavra[i];
        tamanho--;
    }
    palavra2[i] = '\0';

    strcpy(palavra, palavra2);
    printf("\nPalavra inversa: %s", palavra);

     printf("\n-------------------------------------------\n");
    sleep(6);
    return main();
}

int ex8()
{
    printf("\nExercicio 8\n");

    int i;
    char palavra[50], palavranova[50];
    printf("Digite uma palavra de ate 50 caracteres.\n");
    gets(palavra);
    for (i = 0; palavra[i] != '\0'; i++)
    {
        while (isspace(palavra[i]))
        {
            for (int y = i; palavra[y] != '\0'; y++)
            {
                palavra[y] = palavra[y + 1];
            }
        }
    }
    strcpy(palavranova, palavra);
    printf("\nPalavra sem espacos em branco: %s", palavranova);

     printf("\n-------------------------------------------\n");
    sleep(6);
    return main();
}

int ex9()
{
    printf("\nExercicio 9\n");

    int i;
    char palavra[50];
    printf("Digite uma palavra de ate 50 caracteres.\n");
    gets(palavra);
    for (i = 0; palavra[i] != '\0'; i++)
    {
        while (isspace(palavra[i]))
        {
            for (int y = i; palavra[y] != '\0'; y++)
            {
                palavra[y] = palavra[y + 1];
            }
        }
    }
    printf("\nPalavra sem espacos em branco: %s", palavra);

     printf("\n-------------------------------------------\n");
    sleep(6);
    return main();
}

int ex10()
{
    printf("\nExercicio 10\n");

    int const quantodadeElementos = 50;
    char vetorPalavra[quantodadeElementos];

    printf("Informe uma palavra: ");
    scanf("%s", vetorPalavra);

    verificarRepeticao(vetorPalavra, quantodadeElementos);

 printf("\n-------------------------------------------\n");
    sleep(6);
    return main();
}

void verificarRepeticao(char vetorPalavra[], int quantidadeElementos)
{

    int contador = 0, i = 0, j = 0, teste = 0;
    char charVerificaAtual, vetorPalavraDois[quantidadeElementos];

    for (i = 0; i < quantidadeElementos; i++)
    {
        vetorPalavraDois[i] = '\0';
    }

    for (i = 0; vetorPalavra[i] != '\0'; i++)
    {
        charVerificaAtual = vetorPalavra[i];
        verificarExistencia(vetorPalavraDois, charVerificaAtual, &teste);
        if (teste == 1)
        {
        }
        else if (teste == 0)
        {
            for (j = 0; vetorPalavra[j] != '\0'; j++)
            {
                if (charVerificaAtual == vetorPalavra[j])
                {
                    contador++;
                }
            }
            vetorPalavraDois[i] = charVerificaAtual;
            printf("%c Ocorreu %d.\n", charVerificaAtual, contador);
            contador = 0;
            teste = 0;
        }
    }
}

void verificarExistencia(char vetorPalavraDois[], char charVerificaAtual, int *teste)
{

    int i = 0, testedois = 0;

    for (i = 0; vetorPalavraDois[i] != '\0'; i++)
    {
        if (charVerificaAtual == vetorPalavraDois[i])
        {
            testedois = 1;
            break;
        }
    }
    *teste = testedois;
}