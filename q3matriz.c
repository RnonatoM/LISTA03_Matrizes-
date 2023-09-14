#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i, j, tamanho, soma = 0, total;
	
	printf("Informe as dimensoes da matriz \n");
	scanf("%d", &tamanho); // Aqui ira recebe do usuário as dimensões da matriz.

	int mat1[tamanho][tamanho]; // Tamanho a ser informado pelo usuário da matriz.

	printf("Atribua o valor de cada posicao da matriz \n");

	for(i=0;i<tamanho;i++){ // Aqui ira percorrer a matriz para atribuir os valores.
        for(j=0;j<tamanho;j++){
            scanf("%d", &mat1[i][j]);
		}
    }

	printf("\n");

    for(i=0;i<tamanho;i++){ // Somando a diagonal principal da matriz.
        soma += mat1[i][i]; // [0][0], [1][1], [2][2]...
    }
    printf("Diagonal principal %d\n", soma);
    total = soma; // Aqui sera salva a soma da diagonal principal na variável total.

    soma = 0; // Atribuindo 0 novamente ao conteudo da variavel para reutilização.
    for(i=0;i<tamanho;i++){ // Somando a diagonal secundária da matriz.
        soma += mat1[i][tamanho - 1 - i]; //...[0][3 - 1 - 0 = 2], [0][3 - 1 - 1 = 1], [0][3 - 1 - 2 = 0]
    }
    printf("Diagonal secundaria: %d\n", soma);

    if(total != soma){
        printf("A matriz nao eh um quadrado magico \n"); // Validação da diagonal secundária da matriz.
	}

    for(i=0;i<tamanho;i++){ // Somando cada linha da matriz.
        soma = 0; // Aqui sera atribuindo 0 novamente ao conteudo da variavel para reutilização.
        for(j=0;j<tamanho;j++){
            soma += mat1[i][j]; //[0][0], [0][1], [0][2], [0][3]...
		}

        if(total != soma){ // Validação das linhas da matriz.
            printf("A matriz nao eh um quadrado magico \n");
        }else{
			printf("Soma da linha [%d]: %d\n", i+1, soma); // Aqui sera imprimindo o resultado da sma da linha.
		}
    }

    for(j=0;j<tamanho;j++){ // Somando cada coluna da matriz.
        soma = 0; // Aqui sera atribuindo 0 novamente ao conteudo da variavel para reutilização.
        for(i=0;i<tamanho;i++){
            soma += mat1[i][j]; //[0][0], [1][0], [2][0], [3][0]...
		}
        if(total != soma){ //Validação das colunas da matriz.
            printf("A matriz nao eh um quadrado magico \n");
        }else{
			printf("Soma da coluna [%d]: %d\n", j+1, soma); // Aqui sera imprimindo o resultado da soma da coluna da matriz.
		}
    }

    if(total == soma){ // Resultado final
            printf("\nA matriz e um cubo magico \n");
        }

    return 0;
}
