/* Escreva uma função chamada soma3 que recebe como parametros tres pon-
teiros para matrizes de inteiros (chamadas m1, m2 e m3 ) e dois valores inteiros
(chamados lin e col, indicando o numero de linhas e de colunas das matrizes).
Sua fun¸c˜ao dever´a criar e retornar a referencia a matriz correspondente a soma
das tres matrizes passadas como parametro */

#include <stdio.h>
#include <stdlib.h>

int** soma3(int** m1, int** m2, int** m3, int lin, int col){
    int i,j;
    
   int** matrizResultante = (int**)malloc(sizeof(int*)*lin);
   for(i = 0; i<lin; i++){
       matrizResultante[i] = (int*)malloc(sizeof(int)*col);
   }
   
   for(i=0; i<lin; i++){
       for(j=0; j<col; j++){
           matrizResultante[i][j] = m1[i][j]+ m2[i][j]+ m3[i][j];
       }
   }
   
   return(matrizResultante);
}

int** alocaMatriz(int lin, int col){
    int** matriz = (int**)malloc(sizeof(int*)*lin);
    int i;
    for(i = 0; i<lin; i++){
       matriz[i] = (int*)malloc(sizeof(int)*col);
   }
    return(matriz);
}

void criaMatriz(int** m,int lin, int col, int n){
    int i,j;
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            printf(" Insira o valor do termo a_%d%d da matriz %d\n",(i+1),(j+1),n);
            scanf("%d",&m[i][j]);
        }
    }
}
   


int main(){
    int lin, col, i, j;
    int** m1;
    int** m2;
    int** m3;
    int** resultado;
    
    printf(" Esse programa usa uma função para somar 3 matrizes de inteiros.\n");
    printf(" Insira a quantidade de linhas das matrizes:\n");
    scanf("%d", &lin);
    printf(" Insira a quantidade de colunas das matrizes:\n");
    scanf("%d", &col);
    printf(" As matrizes serão do tipo %dx%d.\n", lin,col);
    
    m1 = alocaMatriz(lin, col);
    m2 = alocaMatriz(lin, col);
    m3 = alocaMatriz(lin, col);
    
    criaMatriz(m1,lin,col,1);
    criaMatriz(m2,lin,col,2);
    criaMatriz(m3,lin,col,3);
    
    resultado = soma3(m1,m2,m3,lin,col);
    
    printf(" A operação realizada foi:\n");
    printf("\tm1\t m2\t m3\tresultado\n");
    printf("-----------------------------------------------\n");
    
    for(i=0; i<lin; i++){
        printf("\t");
        for(j=0; j<col; j++){
            printf("%d ",m1[i][j]);
        }
         printf("\t");
        for(j=0; j<col; j++){
            printf("%d ",m2[i][j]);
        }
         printf("\t");
        for(j=0; j<col; j++){
            printf("%d ",m3[i][j]);
        }
         printf("\t");
        for(j=0; j<col; j++){
            printf("%d ",resultado[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
