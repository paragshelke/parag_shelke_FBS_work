#include<stdio.h>

char *strchr(char *str, int ch);

void main()
{
    char str[] = "hello";
    char *x = strchr(str, 'l');
    if (x != NULL)
        printf("%s", x);
    else
        printf("Character not found");
}

char *strchr(char *str, int ch)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ch)
            return &str[i];
        i++;
    }
    if(ch == '\0')
        return &str[i];
    return NULL;
}
