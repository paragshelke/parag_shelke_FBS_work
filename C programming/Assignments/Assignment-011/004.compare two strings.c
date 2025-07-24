#include <stdio.h>

int strcompare(char *str1, char *str2);

int main() {
    char str1[] = "hello";
    char str2[] = "hello";

    int result = strcompare(str1, str2);

    if (result == 1)
        printf("Strings are equal");
    else 
        printf("Strings are not equal");

    return 0;
}

int strcompare(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return 0;  
        i++;
    }
    return 1;  
}
