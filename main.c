#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*Usando matrizes em funções e procedimentos
a) Escreva um programa principal em C que crie e armazene uma matriz quadrada de
tamanho n × n, onde n deve ser lido do teclado e fornecido pelo usuário.
b) Chame uma função preencheMatriz que preencha a matriz criada no programa prin-
cipal com valores aleatórios entre 1 e 100.
c) Chame um procedimento somaDiagonalPrincipal que calcule e exiba a soma dos
elementos da diagonal principal da matriz. Esse procedimento deve receber uma cópia
da matriz. Note que essa abordagem não é eficiente em termos de memória, mas será
utilizada para fins didáticos.
d) Chame um procedimento somaAbaixoDiagonal que calcule e exiba a soma dos elemen-
tos abaixo da diagonal principal da matriz. Esse procedimento deve receber o ponteiro
que aponta para a matriz e o tamanho da matriz, tornando-o mais eficiente, pois
economiza memória ao evitar a criação de uma cópia desnecessária da matriz.
e) Implemente as funções e procedimentos utilizados no programa principal:
• preencheMatriz
• somaDiagonalPrincipal
• somaAbaixoDiagonal
2
*/
void preencherMatriz(int n,int M[n][n])
{
    for ( int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            M[i][j]=rand()%100+1;
        }
        
    }
    
}
void somaDiagonalPrincipal(int n,int M[n][n])
{
    int soma=0;
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
     {
        if(i==j)
        {
            soma+=M[i][j];
        }
     }
   }
   printf("A soma da diagonal principal:%i\n",soma);
}

void somaAbaixoDiagonal(int n, int (*M)[n])
{
    int soma=0;
    for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
     {
        if(i>j)
        {
            soma+=M[i][j];
        }
     }
   }
   printf("A soma da abaixo da diagonal principal :%i",soma);
}
void somaDiagonalEsquerda(int n,int (*M)[n])
{
    int soma=0;
    for(int i=0;i<n;i++)
   {
     soma+=M[i][n-1-i];
   }
   printf("\nSoma da diagonal da esquerda:%i",soma);
}
int main()
{
    srand(time(NULL));
   int n;
   printf("Digite o valor de n:");
   scanf("%i",&n);
   int M[n][n];
   preencherMatriz(n,M);
   for (int i = 0; i < n; i++)
   {
     for (int j = 0; j < n; j++)
     {
        printf("%i\t",M[i][j]);
     }
     printf("\n");
   }
   somaDiagonalPrincipal(n,M);
   somaAbaixoDiagonal(n,M);
   somaDiagonalEsquerda(n,M);
   return 0;
}
