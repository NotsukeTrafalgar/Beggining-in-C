#include <stdio.h>

int main(){
    FILE *fp;
    int a, b, c;

    fp = fopen("parte1.txt", "r");
    if(fp==NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }  
    while(fscanf(fp, "%d", &a) == 1)
    {
        int cont, aux, r = 0;
        double fat = 1;
        aux = a;
        for(int d = 2; d < a; d++){
            if(a % d == 0)
                r++;
        }
        if(r == 0)
            printf("\n%d = primo!\n", a);
        else
            printf("\n%d = nao primo!\n", a);
        while(aux > 1){
            fat *= aux;
            aux--;
        }
       
        printf("%d! = %.0f\n", a, fat);
        float rq = a / 2.0;
        for(cont = 0; cont < 20; cont++)
        {
            rq = (rq + a / rq) / 2.0;
        }
        printf("raiz quadrada de %d = %f\n", a, rq);
    }
    fclose(fp);
    fp = fopen("parte2.txt", "r");

    if(fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    while(fscanf(fp, "%d %d %d", &a, &b, &c) == 3){
        printf("\nos lados: %d %d %d \n", a, b, c);
        if(a + b > c && b + c > a && a + c > b){
            if(a == b && b == c )
                printf("formam um triangulo equilatero\n");
            else if(a != b && b != c && a != c)
                printf("forma um triangulo escaleno\n");
                else 
                    printf("forma um triangulo isoceles\n");
        }
        else
            printf("Nao formam um triangulo\n");
    }
    fclose(fp);
    return 0;
}