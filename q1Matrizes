#include <stdio.h>
#include <stdlib.h>

int soma(int matA[3][3], int matB[3][3]){ // função para soma as matrizes.
    int i, j;
    int matC[3][3]; //criando uma nova variavÃ©l para receber a soma das matrizes A e B.

    for(i = 0; i < 3; i++){ // realizando a soma das matrizes.
        for(j = 0; j < 3; j++){
            matC[i][j] = matA[i][j] + matB[i][j]; //matC[4][6] = matA[1][2] + matB[3][4];
        }
    }

    printf("\nSOMA \n");  // imprimindo a matriz para o usuÃ¡rio
    for(i = 0; i < 3; i++){ // aqui ira percorre a linha da matriz.
        printf("| ");
        for(j = 0;j < 3; j++){ // aqui ira percorre a coluna da matriz.
      
        printf("%d | ", matC[i][j]);
        }
        printf("\n");
    }

    return matC; // retorna matC para o usuario.
}

int subtracao(int matA[3][3], int matB[3][3]){ // funcao para subtracao das matrizes.
    int i, j;
    int matD[3][3]; //criando uma nova variavel para receber a subtracao das matrizes.

    for(i = 0; i < 3; i++){ // realizaÃ§Ã£o a subtraÃ§Ã£o
        for(j = 0; j < 3; j++){
            matD[i][j] = matA[i][j] - matB[i][j]; // matD[2][2] = matA[3][4] - matB[1][2]
        }
    }

    printf("\nSUBTRACAO \n"); //imprimindo a matriz para o usuÃ¡rio
    for(i = 0; i < 3; i++){ // percorre a linha da matriz.
        printf("| ");
        for(j = 0; j < 3; j++){ //percorre a coluna da matriz.
      
        printf("%d | ", matD[i][j]);
        }
        printf("\n");
    }

    return matD; //retorna matD para o usuÃ¡rio
}

int multiplicacao(int matA[3][3], int matB[3][3]){ // funcao para realizar a multiplicacao das matrizes.
    int i, j, k, aux;
    int matE[3][3];
  
    for(i = 0; i < 3; i++){ 
        for(j = 0; j < 3; j++){ 
            for(k = 0; k < 3; k++){ //multiplica a linha de 'matA' pela coluna de 'matB' e faz a soma
                aux = aux + (matA[i][k] * matB[k][j]);
        }
        matE[i][j] = aux;
        aux = 0;
        }
    }

    printf("\nMULTIPLICACAO \n");
    for(i = 0; i < 3; i++){ //percorre a linha da matriz.
        printf("| ");
        for(j = 0; j < 3; j++){ //percorre a coluna da matriz.
      
        printf("%d | ", matE[i][j]);
        }
        printf("\n");
    }

    return matE; //retorna matE para o usuÃ¡rio
}

int main(void){
    int i, j; 
    
    int matA[3][3], matB[3][3]; //matrizes

    for(i = 0; i < 3; i++){ //recebe do usuÃ¡rio o valor de cada elemento da matriz A
        for(j = 0; j < 3; j++){
            printf("Digite o elemento [%d][%d] da matriz A: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }

    printf("\n");

    for(i = 0; i < 3; i++){ //recebe do usuÃ¡rio o valor de cada elemento da matriz B
        for(j = 0; j < 3; j++){
            printf("Digite o elemento [%d][%d] da matriz B: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    soma (&matA, &matB); // chamando a funcao soma da matriz.
    subtracao (&matA, &matB); //chamando a funcao subtracao da matriz.
    multiplicacao (&matA, &matB); //chamando a funcao multiplicacao da matriz.

    return 0;
}
