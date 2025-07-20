#include <stdio.h>

void main() 
{
	int n;
	 printf("enter length of array : ");
    scanf("%d",&n);
    
    int arr[n];
    printf("enter %d numbers in array : ",n);
    for(int i=0;i<n;i++)
	{
        scanf("%d",&arr[i]);
    }
    
     int temp;
    for(int i=0;i<n/2;i++)
    {
    	 temp=arr[i];
   		 arr[i]=arr[n-1-i];
   		 arr[n-1-i]=temp;
	}
	
	printf("reversed array : ");
    for(int i = 0;i<n; i++)
	{
        printf("%d ",arr[i]);
    }
}
