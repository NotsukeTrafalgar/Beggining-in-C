#include <stdio.h>
#include "calc.h"

int soma(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int multi(int a, int b){
    return a * b;
}

int divi(int a, int b){
    return a / b;
}

int fat(int a){
    int fat = a, aux = a;
    while(aux > 1){
        aux--;
        fat *= aux;
    }
}

float cos_rad(float a){
    float cos = 1, n = -a * a, d = 2, fat = 2;
    for(d; d < 20; d += 2)
    {
        cos += n / fat;
        n *= a * a * -1;
        fat *= (d + 1) * (d + 2);
    }
    return cos;
}

float cos_grau(float a){
    float cos = a * (3.14/180);
    return cos_rad(cos);
}

int soma_dig(int a){
    int s = 0, r;
    while(a > 0){
        r = a % 10;
        s += r; 
        a /= 10;
    }
    return s;
}

int raizq(int a){
    float n = a / 2.0;

    for(int cont = 0; cont < 20; cont++)
    {
        n = (n + a / n) / 2.0;
    }
    return n;
}

//adding fuctionalities for the functions