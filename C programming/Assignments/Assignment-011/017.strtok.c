#include <stdio.h>

char *strtok(char *str, const char *delim);

void main()
{
    char str[] = "hello,world,this,is,C";
    char *token = strtok(str, ",");
    while(token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }
}

char *strtok(char *str, const char *delim)
{
    static char *next;
    if(str != NULL)
        next = str;
    if(next == NULL)
        return NULL;

   
    while(*next && strchr((char *)delim, *next) != NULL)
        next++;

    if(*next == '\0')
    {
        next = NULL;
        return NULL;
    }

    char *start = next;

    // Find the end of the token
    while(*next && strchr((char *)delim, *next) == NULL)
        next++;

    if(*next)
    {
        *next = '\0';
        next++;
    }
    else
    {
        next = NULL;
    }

    return start;
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
