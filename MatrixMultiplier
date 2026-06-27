#include <stdio.h>

int main(){
    int k, l, m;

    printf("Numero de linhas A: ");
    scanf("%d", &l); 
    printf("Numero de colunas A e linhas de B: ");
    scanf("%d", &k); 
    printf("Numero de colunas de B: ");
    scanf("%d", &m); 

    int a[l][k], b[k][m], c[l][m];
    int i, j, x;

    for(i = 0; i < l; i++){
        for(j = 0; j < k; j++){
            printf("A[%d][%d]\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
     for(i = 0; i < k; i++){
        for(j = 0; j < m; j++){
            printf("B[%d][%d]\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    
    for(i = 0; i < l; i++){
            for(j = 0; j < m; j++){
                c[i][j] = 0;
                for(x = 0; x < k; x++){
                    c[i][j] += a[i][x] * b[x][j];
                }
            }
        }
    for(i = 0; i < l; i++){
        for(j = 0; j < m; j++){
               printf("%d ",  c[i][j]);
            }
        printf("\n");
        }
    return 0;
}
