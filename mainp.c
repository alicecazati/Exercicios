#include <stdio.h>
#include <stdbool.h>
#define tam 100
bool OcorrePrimeira(char* str1,char* str2)
{
  bool existe = true;
  while (*str1!='/0')
  {
    if(*str1!=*str2)
       existe=false;
    str1++;
    str2++;
    return existe;
  }
  
}
int main()
{
    char* str1=(char*)malloc(tam*sizeof(char));
    char* str2=(char*)malloc(tam*sizeof(char));
    gets(str1);
    gets(str2);
    if(!OcorrePrimeira(str1,str2))
       printf("Não ocorre");
    else
    printf("Ocorre");
}
