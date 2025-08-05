#include <stdio.h>

char *remov(char *);

void main() 
{
    char str[10] = "parag";

    char *x = remov(str);
    printf("%s", str);
}

char *remov(char *str)
{
    int i = 0, j, k;

    while (str[i] != '\0')
    {
        j = i + 1;
        while (str[j] != '\0')
        {
            if (str[i] == str[j])
            {
              k = j;
                while (str[k] != '\0')
                {
                    str[k] = str[k + 1];
                    k++;
            	}
            }
            else
            {
                j++;
            }
        }
        i++;
    }
    return str;
}
