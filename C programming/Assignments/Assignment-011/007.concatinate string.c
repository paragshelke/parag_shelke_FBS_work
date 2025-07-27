#include <stdio.h>

char *strcat(char *dest, char *src);

void main()
 {
    char dest[20] = "parag"; 
    char src[] = "shelke";

    char *x = strcat(dest, src);
    printf("Concatenated string: %s", x);
}

char *strcat(char *dest, char *src) 
{
    int i = 0;

    
    while (dest[i] != '\0')
	 {
        i++;
    }

    int j = 0;
    
    while (src[j] != '\0') 
	{
        dest[i + j] = src[j];
        j++;
    }

    dest[i + j] = '\0'; 

    return dest;
}
