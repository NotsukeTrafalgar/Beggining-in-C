#include <stdio.h>
#include "calc.h"

int main(){
    int op, resin, a, b;
    float resfl;//declaring float and int variables 
    printf("Esolha uma opção:\n 1.Somar\n 2.Subtrair\n 3.Multiplicar\n 4.Dividir\n 5.Fatorar\n 6.Cosseno com radiano\n 7.Cosseno com grau\n 8.Soma dos digitos de um número\n 9.Aproximação de raiz quadrada\n");
    scanf("%d", &op);//Menu to execute one of the above options
    if(op <= 4){
        printf("Digite o primeiro valor:\n");
        scanf("%d", &a);
        printf("Digite o segundo valor:\n");
        scanf("%d", &b);
    }//In case the chose option is "somar, subtrair, multiplicar or dividir" 
    
    switch (op)
    {
    case 1:
        resin = soma(a, b);
        printf("Somando %d + %d = %d\n", a, b, resin);
        break;
    case 2:
        resin = sub(a, b);
        printf("Subtraindo %d - %d = %d\n", a, b, resin);
        break;
    case 3:
        resin = multi(a, b);
        printf("Multiplicando %d x %d = %d\n", a, b, resin);
        break;
    case 4:
        resfl = divi(a, b);
        printf("Dividindo %d / %d = %.2f\n", a, b, resfl);
        break;
    case 5:
        printf("Digite o numero a ser fatorado:");
        scanf("%d", &a);
        resin = fat(a);
        printf("O valor de %d! = %d\n", a, resin);
        break;
    case 6:
        printf("Digite o valor de rad:");
        scanf("%d", &a);
        resfl = cos_rad(a);
        printf("O valor do cosseno radiano(%d) = %f\n", a, resfl);
        break;
    case 7:
        printf("Digite os graus:");
        scanf("%d", &a);
        resfl = cos_grau(a);
        printf("O valor do cosseno grau(%d) = %f\n", a, resfl);
        break;
    case 8:
        printf("Digite o valor:");
        scanf("%d", &a);
        resin = soma_dig(a);
        printf("A soma dos digitos do número %d = %d\n", a, resin);
        break;
    case 9:
        printf("Digite um número para a raiz:");
        scanf("%d", &a);
        resin = raizq(a);
        printf("A raiz de %d é %d ou aproximado.\n",a, resin);
        break;
    default:
        printf("Error\n");
        break;
    }//After choose an option, it'll execute and then you enter the number you want
    
}