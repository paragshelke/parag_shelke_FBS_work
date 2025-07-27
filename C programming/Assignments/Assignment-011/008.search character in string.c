#include <stdio.h>

int strchr_index(char *str, int ch);

void main(void)
{
    char str[] = "hello";

    int index = strchr_index(str, 'l');

    if (index != -1)
        printf("Character found at index: %d\n", index);
    else
        printf("Character not found\n");

}

int strchr_index(char *str, int ch)
{
    int i = 0;
    while (str[i] != '\0') 
	{
        if (str[i] == ch)
            return i;
        i++;
    }
    if (ch == '\0')
        return i;

    return -1; 
}

