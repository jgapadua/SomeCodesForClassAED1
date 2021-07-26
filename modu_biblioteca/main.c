#include <stdio.h>
#include <stdlib.h>
#include "MBiblioteca.h"
#include "MBiblioteca.c"

int main()
{
  int x=2, y=3;
  printf ("A soma de %d + %d = %d\n",x,y,soma(x,y));
  printf ("A subtracao de %d - %d = %d\n",x,y,subtracao(x,y));
  return 0;
}