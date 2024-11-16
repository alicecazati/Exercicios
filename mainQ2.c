/*Alocação Dinâmica de Memória e Recursividade (8 pontos)
Escreva um programa em C que utilize alocação dinâmica de memória para criar uma
lista contendo n números reais.
a) O programa deve solicitar ao usuário que informe o tamanho n de uma lista de
números reais e deve alocar memória dinamicamente para armazenar os n elementos
dessa lista. A lista deve ser preenchida com números digitados pelo usuário.
b) Implemente uma função recursiva para encontrar o maior elemento da lista.
3
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
float EncontraMaior(float* vet,int n)
{
    float maior;
    if(n==1)
    {
        return vet[0];
    }
    maior=EncontraMaior(vet+1,n-1);
    if(*vet>maior)
      maior=*vet;
    return maior;
}
int main()
{
    int n;
    printf("Digite o valor de n:");
    scanf("%i",&n);
    float* vet=(float*)malloc(n*sizeof(float));
    for(int i=0;i<n;i++)
    {
        printf("\nDigite o %i valor:",i+1);
        scanf("%f",&vet[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("\nValor do %i elemento:%f",i+1,vet[i]);
        
    }
    printf("\nMaior eh:%f",EncontraMaior(vet,n));
    
    return 0;
}