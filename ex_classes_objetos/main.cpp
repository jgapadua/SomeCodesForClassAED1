#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Tempo
{
public:
    int hora, minutos, segundos;
    //método construtor com parametros
    Tempo(int h, int min, int s);
     //método construtor sem parametros
    Tempo();
    //método para calcular a diferença entre horas entre o objeto armazenado e um passado por parâmetro.
    diferencaHora(Tempo ti, Tempo t2);
    //método para imprimir um objeto
    void imprimeHora()
    {
       cout <<"\n\n" << hora <<":"<< minutos <<":"<< segundos<<"\n";
    }
};

//método construtor com parametros
Tempo::Tempo (int h, int min,int s)
{
cout  << "\nexecutando o metodo construtor com parametros\n";
 hora=h;
minutos=min;
segundos=s;
}

//método construtor sem parametros
Tempo::Tempo()
{
cout  << "\nexecutando o metodo construtor sem parametros\n";
cout  << "Digite as horas, minutos e segundos com espacamento:";
cin >> hora >> minutos >> segundos;
}

//método para calcular a diferença entre horas entre o objeto armazenado e um passado por parâmetro.
Tempo diferencaHora(Tempo ti, Tempo t2)
{
    int difi,diff,dif;
    Tempo diferenca(0,0,0);

    difi=(ti.hora*3600)+(ti.minutos*60)+(ti.segundos);
    diff=(t2.hora*3600)+(t2.minutos*60)+(t2.segundos);
    dif=(difi-diff)*-1;

    diferenca.hora=dif/3600;
    dif=dif%3600;
    if(dif<0)
    {
        dif=dif*-1;
    }
    diferenca.minutos=dif/60;
    dif=dif%60;
    diferenca.segundos=dif;

    return diferenca;
}

int main()
{
    Tempo p[2];
    Tempo d(0,0,0);

    for (int i=0; i<2; i++)
    {
        p[i].imprimeHora();
    }
    d=diferencaHora(p[0], p[1]);
    printf("\n A diferenca entre %2d:%2d:%2d e %2d:%2d:%2d e = %2d:%2d:%2d\n",p[0].hora,p[0].minutos,p[0].segundos,p[1].hora,p[1].minutos,p[1].segundos, d.hora, d.minutos, d.segundos);

    system("pause");
    return 0;
}