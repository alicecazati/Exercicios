#include <stdio.h>
#include <stdio.h>
#define n 100
int main()
{
    char str[n];
    scanf("%s", str);
    int i=0;
    
    while (str[i]!='\0')
    {
       
        i++;
    }
   
    for(int j=i-1;j>=0;j--)
       printf("%c",str[j]);
    return 0;
    
}