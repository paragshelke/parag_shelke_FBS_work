#include <stdio.h>

int strncmp(const char *s1, const char *s2, int n);

void main()
{
    char str1[] = "hello";
    char str2[] = "helium";
    int cmp = strncmp(str1, str2, 3);
    printf("strncmp: %d\n", cmp);
}

int strncmp(const char *s1, const char *s2, int n)
{
    int i = 0;
    while(i < n && s1[i] != '\0' && s2[i] != '\0')
    {
        if(s1[i] != s2[i])
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        i++;
    }
    if(i == n)
        return 0;
    if(s1[i] == '\0' && s2[i] == '\0')
        return 0;
    if(s1[i] == '\0')
        return - (unsigned char)s2[i];
    if(s2[i] == '\0')
        return (unsigned char)s1[i];
    return 0;
}
