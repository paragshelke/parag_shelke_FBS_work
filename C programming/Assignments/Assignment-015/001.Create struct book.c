#include<stdio.h>

typedef struct book
{
	char bname[20];
	int id;
	char author[20];
	int price;
	
}bk;

void display(bk *,int );
bk store(bk *,int);

void main()
{
	bk arr[3];

	store(arr,3);
	display(arr,3);
	
}
 bk store(bk *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("enter bname id authour price :");
		scanf("%s %d %s %d",&arr[i].bname,&arr[i].id,&arr[i].author,&arr[i].price);
	}

}

void display(bk *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n name=%s id=%d author=%s price=%d",arr[i].bname,arr[i].id,arr[i].author,arr[i].price);
	}	
}