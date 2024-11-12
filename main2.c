#include <stdlib.h>
#include <stdio.h>
/*2. Crie um vetor para armazenar 10 números reais. Solicite que o usuário insira os valores
e, em seguida, determine e escreva o maior valor do vetor e a sua posição.
Exemplo de execução:
Entrada: 1.2 2.3 4.5 0.9 3.6 2.2 5.7 1.0 4.0 5.5
Saída:
Maior valor: 5.7 na posição 6*/
int main()
{
    float vet[10];
    float maior;
    for(int i=0;i<10;i++)
    {
        printf("Digite o %i valor:",i+1);
        scanf("%f",&vet[i]);
    }
    maior=vet[0];
    for(int i=0;i<10;i++)
    {
        if(vet[i]>maior)
        {
            maior=vet[i];
        }
    }
    for(int i=0;i<10;i++)
    {
        if(maior==vet[i])
        {
            printf("Maior:%f\nPosicao:%i",vet[i],i);
        }
    }
    
    return 0;
}