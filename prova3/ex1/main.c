/* Fazer um programa em C para – pedir ao usuário um número inteiro N e gravar em um arquivo cujo nome é “seunome.txt” com N números inteiros aleatórios entre 35 e 45 (utilize a função rand).
 */
#include <stdio.h>
#define nomeArq "joaogabriel.txt"
int main()
{
    int N;
    printf("Digite um numero: ");
    scanf("%d", &N); //pedir ao usuário 
    FILE*arquivo1;
    arquivo1=fopen(nomeArq, "wt"); //gravar em um arquivo 
    int sequencia[N];
  for(int i=0; i<N; i++){
        sequencia[i] = 35 + ( rand() % 10 ); //números inteiros aleatórios entre 35 e 45 
        fprintf(arquivo1, " %d\n", sequencia[i]);
    }
       fclose(arquivo1);

    printf("O numero digitado foi: %d\n", N);
    Segundaparte();
        return 0;
}
/* Fazer um programa em C para: - ler o arquivo gerado acima e gera um outro arquivo cujo nome será “seunome1.txt” contendo o valor lido do arquivo e o número de divisores. 
Obs: esse arquivo não poderá ter valores repetidos, isto é, se o número já foi escrito no arquivo não poderá ser novamente escrito! */

void Segundaparte(int N){
   FILE*arquivo1=fopen(nomeArq,"rt");
   if(arquivo1==NULL){
      printf("\nERRO de abertura de arquivo\n");
   }
   else{
      char linha[200];
      fgets(linha, 80, arquivo1);
      while (!feof(arquivo1)){
         printf("%s", linha);
         fgets(linha, 80, arquivo1);
      }
   }

    FILE* divisores = fopen("joaogabriel1.txt", "wt");
      for(int i=0; i<N; i++){
        int lido;
        fscanf(arquivo1, "%d", &lido);

        if(lido%2 == 0) 
        fprintf(divisores, "%d ", lido);
    }

    fclose(arquivo1);
    fclose(divisores);

}