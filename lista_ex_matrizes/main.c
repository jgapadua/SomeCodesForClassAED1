#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

const int numero = 10;

int matriz [numero][numero];

int meio(int menor, int maior);

void printar_matriz(int matriz[numero][numero]);

void iniciar_sequencia();

void printar_posicoes(int matriz[numero][numero], int parametro);

void maior_menor(int matriz[numero][numero]);

int somar_diago(int matriz[numero][numero]);

void qual_posicao(int matriz[numero][numero]);

void qual_numero(int matriz[numero][numero], int parametro);

float meio_float(float menor, float maior);

float *gerar_vetor(int parametro);

void imprimir_vetor(float *vetor, int parametro);

void ex1(){
    iniciar_sequencia();
    printar_matriz(matriz);
    printf("\n");
}


void ex2(){
    iniciar_sequencia();
    printar_matriz(matriz);
    maior_menor(matriz);
}

void ex3(){
    iniciar_sequencia();
    printar_matriz(matriz);
    int soma = somar_diago(matriz);
    printf("\nO resultado e %i\n", soma);
}

void ex4(){
    iniciar_sequencia();
    printar_matriz(matriz);

    qual_posicao(matriz);
}

void ex5(){
    iniciar_sequencia();
    printar_matriz(matriz);

    int parametro;
    printf("\nForncena um numero de entrada: ");
    scanf("%i", &parametro);

    qual_numero(matriz, parametro);
}

void ex6(){
    int parametro;
    printf("\nInsira um numero: ");
    scanf("%i", &parametro);

    float *vetor = gerar_vetor(parametro);
    imprimir_vetor(vetor, parametro);
}

int main() {
    srand(time(NULL));

    ex1();

    return 0;
}

int meio(int menor, int maior)
{
    int valor = (rand() % (maior - menor + 1)) + menor;

    return valor;
}

void printar_matriz(int matriz[numero][numero]){
	int i, t;

    for(i = 0; i < numero; i++)
	{
       printf("\t%i", i);
	}

    for(i = 0; i < numero; i++)
	{
        printf("\n%i", i);
        for(int t = 0; t < numero; t++)
	    {
           printf("\t%i", matriz[i][t]);
	    }
    }
}

void iniciar_sequencia(){
	int i, t;

    for(i = 0; i < numero; i++)
	{
      for(t = 0; t < numero; t++)
	  {
		 matriz[i][t] = meio(15, 50);
	  }
	}
}

void printar_posicoes(int matriz[numero][numero], int parametro){
	int i, t;

    for(i = 0; i < numero; i++)
	{
      for(t = 0; t < numero; t++)
	  {
         if(matriz[i][t] == parametro)
		 {
            printf(", [%i,%i]", i, t);
		 }
	  }
	}
}

void maior_menor(int matriz[numero][numero]){
    int menor, maior;

	int i, t;

    for(i = 0; i < numero; i++)
	{
	  if(i == 0){
		  menor = matriz[0][0];
		  maior = matriz[0][0];
	  }

      for(t = 0; t < numero; t++)
	  {
         if(matriz[i][t] < menor){
            menor = matriz[i][t];
         } else {
			 if(matriz[i][t] > maior) {
				maior = matriz[i][t];
			 }
		 }
	  }
	}

	printf("\n");

    printf("Menor: %i, posicoes", menor);
    printar_posicoes(matriz, menor);

    printf("\n\nMaior %i, posicoes", maior);
    printar_posicoes(matriz, maior);

    printf("\n");
}

int somar_diago(int matriz[numero][numero]){
    int resultado = 0;

	int i, t;

    for(i = 0; i < numero; i++)
	{
	   for(t = 0; t < numero; t++)
	   {
		   if(i == t){
			   resultado = resultado + matriz[i][t];
		   }
	   }
	}

    return resultado;
}

void qual_posicao(int matriz[numero][numero]){
    int i, t;
    do {
       printf("Insira a entrada: ");

       scanf("%i,%i", &i, &t);

	   int valido_i = i >= 0 && i < numero;

	   int valido_t = t >= 0 && t < numero;

       if(valido_i && valido_t)
	   {
          printf("O numero na posicao e: %i\n", matriz[i][t]);
	   } else {
		  if(i >= 0){
			  printf("Nao existe!"); //De forma opcional
		  }
	   }

    } while (i != -1);
}

void qual_numero(int matriz[numero][numero], int parametro){
    int encontrou = 0;

	int i, t;

    for(i = 0; i < numero; i++)
	{
      for(t = 0; t < numero; t++)
	  {
         if(matriz[i][t] == parametro)
		 {
            encontrou = 1;
		 }
	  }
	}

    if(!encontrou){
       printf("O numero %i nao tem nessa matriz\n", parametro);
	} else
	{
		printf("\nPosicoes do numero %i", parametro);
		printar_posicoes(matriz, parametro);
		printf("\n");
	}
}

float meio_float(float menor, float maior)
{
	float numero = fmod(rand(), (maior - menor + 1)) + menor;

    return numero;
}

float *gerar_vetor(int parametro){
    float *result = malloc(sizeof(float) * parametro);

    for(int i = 0; i < numero; i++)
	{
       result[i] = meio_float(30, 50);
	}

    return result;
}

void imprimir_vetor(float *vetor, int parametro){
    printf("Valores do vetor");

    for(int i = 0; i < numero; i++)
	{
       printf(", %.2f", vetor[i]);
	}

    printf("\n");
}