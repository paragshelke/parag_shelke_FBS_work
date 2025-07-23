#include<stdio.h>

void triangle(int*);
void main()
{	
	int arr[3];
	printf("Enter three sides of triangle : ");
	for(int i=0;i<3;i++)
	{
		scanf("%d",&arr[i]);
	}
	triangle(arr);
}
void triangle(int* arr)
{

	if(arr[0]==arr[1]&&arr[1]==arr[2])
	{
		printf("Triangle is equilateral");
	}
	else if(arr[0]==arr[1]||arr[1]==arr[2]||arr[0]==arr[2])
	{
		printf("Triangle is isosceles");
	}
	else
	{
		printf("Triangle is scalene");
	}
}