#include <stdio.h>

char* removee(char*, char*);

void main()
{
    char str1[20];
    char str2[20];

    printf("Enter a string: ");
    scanf("%s", str1);  
	char *x=removee(str1, str2);
    printf("%s",x );

}

char* removee(char* str1, char* str2)
{
    int j = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (i % 2 != 0) 
        {
            str2[j] = str1[i];
            j++;
        }
    }
    str2[j] = '\0';
    return str2;
}
