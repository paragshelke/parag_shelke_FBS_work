#include <stdio.h>

char *strmove(char *src, char *dest);

void main()
 {
    char src[] = "parag";
    char dest[20];  

    char *x = strmove(src, dest);
    printf(" %s", x);
}

char *strmove(char *src, char *dest)
 {
    int i = 0;

   
    while (src[i] != '\0')
	 {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0'; 

    return dest;
}
