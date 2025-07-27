#include <stdio.h>

int strcspn(const char *str, const char *reject);

void main()
{
    char str[] = "hello123";
    char reject[] = "123";
    int len = strcspn(str, reject);
    printf("strcspn: %d\n", len);
}

int strcspn(const char *str, const char *reject)
{
    int i = 0, j;
    while(str[i] != '\0')
    {
        j = 0;
        while(reject[j] != '\0')
        {
            if(str[i] == reject[j])
                return i;
            j++;
        }
        i++;
    }
    return i;
}
