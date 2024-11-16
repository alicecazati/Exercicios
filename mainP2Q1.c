/*Escreva um programa que crie um vetor de tamanho 100 e o preencha com valores inteiros
gerados aleatoriamente no intervalo de 1 a 20 (1 ≤ valor ≤ 20).
O programa deve, então, solicitar ao usuário que informe um número a ser pesquisado no
vetor. Em seguida, o programa deve buscar, no vetor, o número informado pelo usuário
e imprimir as posições (índices) onde o valor foi encontrado.
Caso o valor não seja encontrado, informe ao usuário que o valor não está presente no
vetor.
Dicas
• Utilize a função rand() da biblioteca stdlib.h para gerar os números aleatórios.
• Lembre-se de inicializar o gerador de números aleatórios usando a função srand()
com uma semente adequada, como a função time(NULL) da biblioteca time.h.
• Para cada valor encontrado, imprima a posição (índice) correspondente no vetor.*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define tam 100
int main()
{
     srand(time(NULL));
    int vet[tam];
    int num;
    for(int i=0;i<tam;i++)
    {
        vet[i]= rand() % 20 + 1;
        printf("%i\t",vet[i]);
    }
    printf("Digite um numero a ser pesquisado no vetor:");
    scanf("%i",&num);
    for(int i=0;i<tam;i++)
    {
        if(vet[i]==num)
        {
            printf("Numero:%i\nPosicao:%i\n",vet[i],i);
        }
    }
   return 0;
}
