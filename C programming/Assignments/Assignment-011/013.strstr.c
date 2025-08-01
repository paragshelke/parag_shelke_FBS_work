#include <stdio.h>

char *strstr(const char *haystack, const char *needle);

void main()
{
    char str[] = "hello world";
    char substr[] = "wor";
    char *ptr = strstr(str, substr);
    if(ptr != NULL)
        printf("strstr: %s\n", ptr);
    else
        printf("Substring not found\n");
}

char *strstr(const char *haystack, const char *needle)
{
    int i = 0, j;
    if(needle[0] == '\0')
        return (char *)haystack;
    while(haystack[i] != '\0')
    {
        j = 0;
        while(needle[j] != '\0' && haystack[i + j] == needle[j])
            j++;
        if(needle[j] == '\0')
            return (char *)&haystack[i];
        i++;
    }
    return NULL;
}
