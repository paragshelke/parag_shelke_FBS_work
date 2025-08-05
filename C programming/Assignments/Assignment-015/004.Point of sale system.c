#include<stdio.h>

typedef struct sale
{
	char name[20];
	int price;
	int quantity;	
}s;

void displayy(s *,int );
void total_cost(s *,int );
void storee(s*,int );

void main()
{
	s arr[3];

	storee(arr,3);
	total_cost(arr,3);
	displayy(arr,3);	
}

void storee(s *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("enter name price quantity :");
		scanf("%s %d %d",&arr[i].name,&arr[i].price,&arr[i].quantity);
	}

}

void total_cost(s *arr,int n)
{
	int total=0;
	for(int i=0;i<n;i++)
	{
		total=total + (arr[i].price * arr[i].quantity);
	}
		printf("\ntotal cost = %d",total);

}

void displayy(s *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nname=%s price=%d quantity=%d",arr[i].name,arr[i].price,arr[i].quantity);
	}	
}