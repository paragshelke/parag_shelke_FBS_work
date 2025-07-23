#include<stdio.h>

void total(int ,float *);
void main()
{	
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	float arr[n];
	printf("Enter %d basic salaries : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%f",&arr[i]);
	}
		total(n,arr);
}
void total(int n,float *arr)
{
	float basic, da, ta, hra, total;
	
	printf("\ntotal salaries are : ");
	for(int i=0;i<n;i++)
	{
		if(arr[i]<=5000)
		{
		da = 0.10 * arr[i];
        ta = 0.20 * arr[i];
        hra = 0.25 * arr[i];
		}
		else 
		{
        da = 0.15 * arr[i];
        ta = 0.25 * arr[i];
        hra = 0.30 * arr[i];
    	}
    	
    	total=arr[i]+da+ta+hra;
    	printf("%f ",total);
		
	}
}