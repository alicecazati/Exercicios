#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void preencherMatriz(int n, int* M) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *(M+i*n+j) = rand() % 100 + 1;
        }
    }
}

void somaDiagonalPrincipal(int n, int* M) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
     for(int j=0;j<n;j++)
     {
        if (i==j)
        {
           soma += *(M+i*n+j);
        }
        
        
     }
        
    }
    printf("A soma da diagonal principal: %i\n", soma);
}

void somaAbaixoDiagonal(int n, int *M) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            soma += *(M+i*n+j);
        }
    }
    printf("A soma abaixo da diagonal principal: %i\n", soma);
}

void somaDiagonalEsquerda(int n, int *M) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += *(M + i * n + (n - 1 - i));
    }
    printf("Soma da diagonal da esquerda: %i\n", soma);
}

int main() {
    srand(time(NULL));
    int n;

    printf("Digite o valor de n: ");
    scanf("%i", &n);

    int *M=(int*)malloc(n*n*sizeof(int));
    if (M==NULL)
    {
        printf("Erro");
        return 1;
    }
    
    preencherMatriz(n, M);

    printf("Matriz gerada:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3i\t", *(M+i*n+j) );
        }
        printf("\n");
    }

    somaDiagonalPrincipal(n, M);
    somaAbaixoDiagonal(n, M);
    somaDiagonalEsquerda(n, M);
    free(M);

    return 0;
}
