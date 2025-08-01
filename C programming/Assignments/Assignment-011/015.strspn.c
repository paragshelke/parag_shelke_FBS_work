#include <stdio.h>

int strspn(const char *str, const char *accept);

void main()
{
    char str[] = "hello123";
    char accept[] = "hel";
    int len = strspn(str, accept);
    printf("strspn: %d\n", len);
}

int strspn(const char *str, const char *accept)
{
    int i = 0, j;
    while(str[i] != '\0')
    {
        j = 0;
        int found = 0;
        while(accept[j] != '\0')
        {
            if(str[i] == accept[j])
            {
                found = 1;
                break;
            }
            j++;
        }
        if(!found)
            return i;
        i++;
    }
    return i;
}
