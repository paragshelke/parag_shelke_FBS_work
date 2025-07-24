#include <stdio.h>
#include <string.h>

char *strrev(char *str);

void main()
{
    char str[6] = "hello";
    char *x = strrev(str); 
    printf("%s", x); 
    
}

char *strrev(char *str)
{
    int i = 0;
    int j = strlen(str) - 1;
    while(i<j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}
