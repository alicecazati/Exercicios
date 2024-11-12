#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*3. Crie dois vetores para armazenar 5 números inteiros cada. Solicite que o usuário insira os
valores para os dois vetores. Depois, crie e escreva um terceiro vetor onde cada elemento
seja a soma dos elementos correspondentes dos dois vetores lidos.
Exemplo de execução:
Entrada:
Vetor 1: 1 2 3 4 5
Vetor 2: 5 4 3 2 1
Saída:
Vetor soma: 6 6 6 6 6*/
#define n 5
int main()
{
    
    int vet1[n];
    int vet2[n];
    int Soma[n];
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        vet1[i]=rand()% 5+1;
        printf("%i\t",vet1[i]);
    }
    printf("\n\n");
    for(int i=0;i<n;i++)
    {
        vet2[i]=rand()% 5+1;
        printf("%i\t",vet2[i]);
    }
    printf("\n\n");
    for(int i=0;i<n;i++)
    {
        Soma[i]=vet1[i]+vet2[i];
        printf("%i\t",Soma[i]);
    }
   return 0;
}