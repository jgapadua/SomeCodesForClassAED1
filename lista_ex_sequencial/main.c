#include <stdio.h>
#include <stdbool.h>

#define TAM 64
#define nomeArq "arquivo.txt"

void letra_a(){
    FILE* arq = fopen(nomeArq, "w");

    int sequencia[TAM];
    sequencia[0] = sequencia[1] = 1;

    fprintf(arq, "%d %d", sequencia[0], sequencia[1]);
    for(int i=2; i<TAM; i++){
        sequencia[i] = sequencia[i-1] + sequencia[i-2];
        fprintf(arq, " %d", sequencia[i]);
    }

    fclose(arq);
}

void letra_b(){
    FILE* arq = fopen(nomeArq, "r");
    int matriz[8][8];

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            fscanf(arq, "%d", &matriz[i][j]);
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    fclose(arq);
}

void letra_c(){
    FILE* arq = fopen(nomeArq, "r");
    FILE* out = fopen("arquivo_c.txt", "w");
    int matriz[8][8];

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            fscanf(arq, "%d", &matriz[i][j]);
            fprintf(out, "%d ", matriz[i][j]);
        }
        fprintf(out, "\n");
    }

    fclose(arq);
    fclose(out);
}

void letra_d(){
    FILE* arq = fopen(nomeArq, "r");
    FILE* pares = fopen("pares.txt", "w");
    FILE* impares = fopen("impares.txt", "w");

    for(int i=0; i<TAM; i++){
        int lido;
        fscanf(arq, "%d", &lido);

        if(lido%2 == 0) 
        fprintf(pares, "%d ", lido);
        else fprintf(impares, "%d ", lido);
    }

    fclose(arq);
    fclose(pares);
    fclose(impares);
}

bool primo(int n){
    bool primo = true;

    for(int i=2; i<n/2 && primo; i++){
        if(n%i == 0) primo = false;
    }

    return primo;
}

void letra_e(){
    FILE* arq = fopen(nomeArq, "r");
    FILE* out = fopen("arquivo_c.txt", "w");
    int primos[TAM];
    int contador = 0;

    for(int i=0; i<TAM; i++){
        int lido;
        fscanf(arq, "%d", &lido);

        if(primo(lido)){
            primos[contador++] = lido;
            printf("%d ", lido);
            fprintf(out, "%d ", lido);
        }
    }

    fclose(arq);
    fclose(out);
}

int main(){
    letra_a();
    letra_b();
    letra_c();
    letra_d();
    letra_e();

    return 0;
}