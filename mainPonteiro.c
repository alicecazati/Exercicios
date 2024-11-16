#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
void Funcao(int V[],int* min,int* max)
{
    for(int i=0;i<TAM;i++)
    {
        if(V[i]<*min)
        {
            *min=V[i];
        }
        if(V[i]>*max)
        {
            *max=V[i];
        }
    }
    
}

int main()
{
    srand(time(NULL));
    int V[TAM];
    for(int i=0;i<TAM;i++)
    {
       V[i]=rand()%10+1;
       printf("%i\n",V[i]);
    }
    int min=V[0];
    int max=V[0];
    Funcao(V,&min,&max);
    printf("\n\nMaior valor: %d\n", max);
    printf("Menor valor: %d\n", min);
    

    return 0;
}