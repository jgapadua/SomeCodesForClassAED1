#include <stdio.h>
#include <stdlib.h>
#include "joaogabriel.h"
#include "joaogabriel.c"

int main()
{
int terms=0;

    printf("Digite o numero de termos:");
    scanf ("%d", &terms);
   printf ("O resultado de H: %.2f\n",calculo(terms));
     return 0;
}

