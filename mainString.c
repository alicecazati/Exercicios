#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>
#define n 100
int main()
{
    char str[n];
    bool erro=true;
    scanf("%s", str);
    int cont=0;
    
    while (str[cont]!='\0')
        cont++;
    int j=cont-1;
    int i=0;
    while (i<j)
    {
        if(str[i]!=str[j])
           {
             erro=false;
           }
      i++;
      j--;
          
    }
    if(!erro)
      printf("N eh Palindromo");
    else
       printf("Palindromo");
    return 0;
    
}