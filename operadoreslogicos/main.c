#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

  void sleep(int secs);
   int escolher();
   int x=1,a=3,b=5,c=8,d=7;
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
   printf("\n\nDetermine o resultado Logico das Expressoes a seguir, assinalando se sao Verdadeira ou Falsas.\n \nConsidere os seguintes valores para as variaveis:X = 1, A =3, B=5, C=8 e D =7\n1) nao (X>3)\n\n2) (x<1) e nao(B>D)\n\n3) NAO (D<7) e (C>5)\n\n4) NAO (X>3) ou (C<7)\n\n5) (A>B) ou (C > B)\n\n6) (X>=2)\n\n7) (X<1) e (B>=D)\n\n8) ((D>0) ou (C>5)\n\n9) NAO (D>3) ou NAO (B<7)\n\n10) (A>B) ou NAO (C>B)\n");
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
      printf("Código inválido\n");
   }
} 
  
   int ex1()
   {
     if (!(x>3))
     {
        printf("!(%d>3) -> %d VERDADEIRO",x,!(x>3));
     }
     else
     {
         printf("!(%d>3) ->%d FALSO",x,!(x>3));
     }
     sleep(10);
     return main();
   }

    int ex2()
   {
     if ((x<1)&& !(b>d))
     {
        printf("(%d<1)&& !(%d>%d) -> %d VERDADEIRO",x,b,d,(x<1)&& !(b>d));
     }
     else
     {
         printf("(%d<1)&& !(%d>%d) -> %d FALSO",x,b,d,(x<1)&& !(b>d));
     }
     sleep(10);
     return main();
   }

    int ex3()
   {
     if (!(d<7)&&(c>5))
     {
        printf("!(%d<7)&&(%d>5) -> %d VERDADEIRO",d,c,!(d<7)&&(c>5));
     }
     else
     {
          printf("!(%d<7)&&(%d>5) -> %d FALSO",d,c,!(d<7)&&(c>5));
     }
     sleep(10);
     return main();
   }

   int ex4()
   {
     if (!(x>3)||(c>7))
     {
        printf("!(%d>3)||(%d>7) -> %d VERDADEIRO",x,c,!(x>3)||(c>7));
     }
     else
     {
         printf("!(%d>3)||(%d>7) -> %d FALSO",x,c,!(x>3)||(c>7));
     }
     sleep(10);
     return main();
   }
   
      int ex5()
   {
     if ((a>b)||(c>b))
     {
        printf("(%d>%d)||(%d>%d) -> %d VERDADEIRO",a,b,c,b,(a>b)||(c>b));
     }
     else
     {
        printf("(%d>%d)||(%d>%d) -> %d FALSO",a,b,c,b,(a>b)||(c>b));
     }
     sleep(10);
     return main();
   }

      int ex6()
   {
     if ((x>=2))
     {
        printf("(%d>=2) -> %d VERDADEIRO",x,(x>=2));
     }
     else
     {
        printf("(%d>=2) -> %d FALSO",x,(x>=2));
     }
     sleep(10);
     return main();
   }

     int ex7()
   {
     if ((x<1)&&(b>=d))
     {
        printf("(%d<1)&&(%d>=%d) -> %d VERDADEIRO",x,b,d,(x<1)&&(b>=d));
     }
     else
     {
        printf("(%d<1)&&(%d>=%d) -> %d FALSO",x,b,d,(x<1)&&(b>=d));
     }
     sleep(10);
     return main();
   }   

      int ex8()
   {
     if ((d>0)||(c>5))
     {
        printf("(%d>0)||(%d>5) -> %d VERDADEIRO",d,c,(d>0)||(c>5));
     }
     else
     {
        printf("(%d>0)||(%d>5) -> %d FALSO",d,c,(d>0)||(c>5));
     }
     sleep(10);
     return main();
   }  

      int ex9()
   {
     if (!(d>3)||!(b<7))
     {
        printf("!(%d>3)||!(%d<7) -> %d VERDADEIRO",d,b,!(d>3)||!(b<7));
     }
     else
     {
       printf("!(%d>3)||!(%d<7) -> %d FALSO",d,b,!(d>3)||!(b<7));
     }
     sleep(10);
     return main();
   }  

      int ex10()
   {
     if ((a>b)||!(c>b))
     {
        printf("(%d>%d)||!(%d>%d) -> %d VERDADEIRO",a,b,c,(a>b)||!(c>b));
     }
     else
     {
       printf("(%d>%d)||!(%d>%d) -> %d FALSO",a,b,c,(a>b)||!(c>b));
     }
     sleep(10);
     return main();
   }  