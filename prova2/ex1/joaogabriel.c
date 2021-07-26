float calculo (int terms)
{
    int numerador= 3, n2=2, denominador=2;
    float h, fra, sinal=1;
    char s;
     h = -(float)numerador / denominador;
    if(terms == 1)
        return h;
    else
    { 
        for(int i=0; i<=terms; i++){
            denominador += 2; //equivale a denominador = denominador + 2
            numerador += n2; //equivale a numerador = numerador + n2
            if(i % 2 == 0){
                sinal = 1;
            }
            else{
                sinal = -1;
            }
            fra = (float) numerador / denominador * sinal;     
            h += fra; 
        }
        return h;
    }
}
