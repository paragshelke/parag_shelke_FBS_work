#include<stdio.h>

typedef struct players
{
	char name[20];
	int runs;
	int matches;
	int wickets;
	
}p;

void displayy(p *,int );
void maxruns(p *,int );
void max_wickets(p *,int );
void storee(p *,int );

void main()
{
	p arr[3];

	storee(arr,3);
	maxruns(arr,3);
	max_wickets(arr,3);
	displayy(arr,3);	
}

void storee(p *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("enter name runs matches wickets:");
		scanf("%s %d %d %d",&arr[i].name,&arr[i].runs,&arr[i].matches,&arr[i].wickets);
	}

}

void maxruns(p *arr,int n)
{
	int max=arr[0].runs;
	
	for(int i=0;i<n;i++)
	{
		if(max<arr[i+1].runs)
		{
			max=arr[i+1].runs;
		}
	}
	printf("maximum runs are :%d",max);
}

void max_wickets(p *arr,int n)
{
	int max=arr[0].wickets;
	
	for(int i=0;i<n;i++)
	{
		if(max<arr[i+1].wickets)
		{
			max=arr[i+1].wickets;
		}
	}
	printf("\nmaximum wickets are :%d",max);
}



void displayy(p *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n name=%s runs=%d matches=%d wickets=%d",arr[i].name,arr[i].runs,arr[i].matches,arr[i].wickets);
	}	
}