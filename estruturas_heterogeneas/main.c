#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
struct Tmercadoria 
{
  int codigo;
  char descricao[50];
  float preco;
};
typedef struct Tmercadoria mercadoria;
mercadoria leMercadoria();
void imprimeMercadoria(mercadoria m);
void alteraMercadoria(mercadoria *m);
int main()
{
setlocale(LC_ALL,"portuguese");
mercadoria m[3];
int i, op;
m[0].codigo=250;
strcpy(m[0].descricao,"Tijolo");
m[0].preco=10.00;
m[1].codigo=315;
strcpy(m[1].descricao,"Led");
m[1].preco=0.50;
m[2].codigo=417;
strcpy(m[2].descricao,"Papel");
m[2].preco=15.30;
do
{
  system("cls");
  printf("Escolha:\n");
  printf("a-Incluir mercadorias\n");
  printf("b-Alterar mercadorias\n");
  printf("c-Imprimir mercadorias\n");
  printf("d-Sair do programa\n");
  op=getch();
  switch (op)
  {
  case 'a':
    for (i=0; i<3; i=i+1)
    {m[i]=leMercadoria();
    }
      break;
    case 'b':
    for (i=0; i<3; i=i+1)
    {alteraMercadoria(&m[i]);
    }
      break;
    case 'c':
    for (i=0; i<3; i=i+1)
    {imprimeMercadoria(m[i]);
    }
      break;
  }
  if (op!='d')
  {system("pause");
  }
}
while (op!='d');
return 0;
}
mercadoria leMercadoria()
{
  mercadoria m;
  printf ("Codigo...:");
  fflush(stdin);
  scanf("%d", &m.codigo);
  printf ("Descricao:");
  fflush(stdin);
  gets(m.descricao);
  printf ("Preco....:");
  fflush(stdin);
  scanf("%f", &m.preco);
  return m;
}
void imprimeMercadoria(mercadoria m)
{
  printf("Codigo...: %d\n",m.codigo);
  printf("Descricao: %s\n",m.descricao);
  printf("Preco....: %.2f\n",m.preco);
}
void alteraMercadoria(mercadoria *m)
{
  printf("Codigo...: %d\n",m->codigo);
  fflush(stdin);
  scanf("%d",&m->codigo);
  printf("Descricao: %s\n",m->descricao);
  fflush(stdin);
  gets(m->descricao);
  printf("Preco....: %.2f\n",m->preco);
  fflush(stdin);
  scanf("%f",&m->preco);
}
