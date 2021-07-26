#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>
#include <locale.h>
struct Tmercadoria
{
int codigo;
char descricao[30];
float preco;
};
typedef struct Tmercadoria mercadoria;

int main()
{
FILE *f;
char op;
setlocale(LC_ALL,"Portuguese");
if ((f = fopen("teste.dat", "r+b"))==NULL) // arquivo existe
{ printf("Arquivo nao existia ... criando arquivo!");
if((f = fopen("teste.dat", "w+b"))==NULL) //arq não existe
{ printf("Erro na criacao do arquivo!!");
exit(1);
}
system("pause");
}
do
{ printf("Escolha:\n");
printf("a-incluir arquivo\n");
printf("b-alterar arquivo\n");
printf("c-listar arquivo\n");
printf("d-sair do sistema\n");
op=getch();
switch (op)
{
case 'a':
printf("preenchendo o arquivo...\n");
inclui_mercadoria(f);
break;
case 'b':
printf("alterando o arquivo...\n");
altera_arquivo(f);
break;
case 'c':
printf("imprmindo o arquivo...\n");
imprime_arquivo(f);
system("pause");
break;
}
}
while (op!='d');
fclose(f);
return 0;
}

int localiza_mercadoria(FILE *f,int codigo)
{ int posicao=-1,achou=0;
mercadoria m;
fseek(f,0,SEEK_SET);
fread(&m, sizeof(m),1, f);
while (!feof(f) && !achou)
{ posicao++; // semelhante a posicao = posicao +1;
if (m.codigo==codigo)
{ achou=1;
}
fread(&m, sizeof(m),1, f);
}
if (achou)
{ return posicao;
}
else
{ return -1;
}
}

void inclui_mercadoria(FILE *f)
{ mercadoria m;
int posicao;
//lendo os dados do teclado
printf("Digite o codigo da mercadoria...:");
fflush(stdin);
scanf("%d",&m.codigo);
posicao=localiza_mercadoria(f,m.codigo);
if (posicao==-1) //não tinha codigo no arquivo
{ printf("Digite a descricao da mercadoria...:");
fflush(stdin);
gets(m.descricao);
printf("Digite o preco da mercadoria...:");
fflush(stdin);
scanf("%f",&m.preco);
fseek(f,0,SEEK_END); // posicionado o arquivo no final
fwrite(&m, sizeof(m),1,f); //gravando os dados
fflush(f);
}
else
{ printf("Codigo %d ja existe no arquivo. Inclusao nao realizada!\n");
}
}

void altera_arquivo(FILE *f)
{ int codigo,posicao;
mercadoria m;
printf("Diga qual o codigo da mercadoria para alterar:");
scanf("%d",&codigo);
posicao=localiza_mercadoria(f,codigo);
if (posicao!=-1) // localizou a mercadoria
{ fseek(f,sizeof(m)*(posicao),SEEK_SET);
fread(&m, sizeof(m),1, f);
printf("Codigo atual:%d - %s preco atual :%.2f\n",m.codigo,m.descricao,m.preco);
printf("Nova descricao:");
fflush(stdin);
gets(m.descricao);
printf("Novo preco....:");
scanf("%f",&m.preco);
fseek(f,sizeof(m)*(posicao ),SEEK_SET);
fwrite(&m, sizeof(m),1, f);
fflush(f);
}
}

void imprime_arquivo(FILE *f)
{
mercadoria m;
fseek(f,0,SEEK_SET);
fread(&m, sizeof(m),1, f);
while (!feof(f))
{
printf("Codigo....:%d \n",m.codigo);
printf("Descricao.:%s \n",m.descricao);
printf("Preco.....:%.2f\n",m.preco);
fread(&m, sizeof(m),1, f);
}
}


