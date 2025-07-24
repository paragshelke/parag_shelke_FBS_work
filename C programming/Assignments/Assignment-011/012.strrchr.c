#include <stdio.h>

char *strrchr(const char *str, int ch);

void main()
{
    char str[] = "hello world";
    char *ptr = strrchr(str, 'l');
    if(ptr != NULL)
        printf("strrchr: %s\n", ptr);
    else
        printf("Character not found\n");
}

char *strrchr(const char *str, int ch)
{
    char *last = NULL;
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ch)
            last = (char*)&str[i];
        i++;
    }
    if(ch == '\0')
        return (char*)&str[i];
    return last;
}
