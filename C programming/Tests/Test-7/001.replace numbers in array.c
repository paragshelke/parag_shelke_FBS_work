#include<stdio.h>
int *replace(int *);
void main()
{
	int arr[]={11,23,30,4,21,45,50};
	
	int *x=replace(arr);
	for(int i=0;i<7;i++)
	{
		printf("%d ",x[i]);
	}
	

}

int *replace(int *arr)
{
	for(int i=0;i<7;i++)
	{
		int temp=arr[2];
		arr[2]=arr[4];
		arr[4]=temp;
	}
	return arr;
}
