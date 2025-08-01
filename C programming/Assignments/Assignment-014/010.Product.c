#include<stdio.h>

struct product
{
	int id;
	char name[20];
	int quantity;
	int price;
};

void displayproduct(struct product p );
struct product storeproduct();

void main()
{
	struct product p1,p2;
	
	p1=storeproduct();
	displayproduct(p1);
	
	p2=storeproduct();
	displayproduct(p2);
}

struct product storeproduct()
{
	struct product p;
	printf("enter id name quantity price : ");
	scanf("%d %s %d %d",&p.id,&p.name,&p.quantity,&p.price);
	
	return p;
}

void displayproduct(struct product p)
{
	printf("id:%d,name:%s,quantity:%d,price:%d\n",p.id,p.name,p.quantity,p.price);
}

