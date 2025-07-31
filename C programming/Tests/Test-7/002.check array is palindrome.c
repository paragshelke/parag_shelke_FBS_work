#include <stdio.h>

void ispal(int *, int );

void main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers in array: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ispal(arr, n);

}

void ispal(int *arr, int n)
{
    int temp[n];


    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = 0; i < n / 2; i++)
    {
        int t = temp[i];
        temp[i] = temp[n - 1 - i];
        temp[n - 1 - i] = t;
    }


    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != temp[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag==1)
        printf("Array is a palindrome\n");
    else
        printf("Array is not a palindrome\n");
}
