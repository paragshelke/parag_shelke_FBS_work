#include <stdio.h>

char *strmer(char *str1, char *str2, char *mer);

void main() 
{
    char str1[] = "hello";
    char str2[] = "world";
    char mer[11]; 

    char *x = strmer(str1, str2, mer);
    printf("%s", x);
}

char *strmer(char *str1, char *str2, char *mer)
 {
    int i = 0;

   
    while (str1[i] != '\0')
	 {
        mer[i] = str1[i];
        i++;
    }

    int n = i;  

    i = 0;
   
    while (str2[i] != '\0') 
	{
        mer[n + i] = str2[i];
        i++;
    }

    mer[n + i] = '\0'; 

    return mer;
}
