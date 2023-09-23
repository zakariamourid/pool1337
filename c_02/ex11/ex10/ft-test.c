#include <stdio.h>
#include <string.h>
int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int    i;

    i = 0;
    while (i < size -1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
        dest[i] = '\0';
    i = 0;
    while (src[i])
    {
        i++;
    }
    return (i);
}


int main(){
  char dest[10];
  char src[]="hello";
    printf("here  is the result: '%d'\n",ft_strlcpy(dest,src,10));
    printf("here  is the result: '%d'\n",strlcpy(dest,src,10));
   
}
