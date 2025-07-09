#include<stdio.h>

void main()
{
	int h,m,s;
	printf("enter time h: m: s:");
	scanf("%d %d %d",&h,&m,&s);
	
    int hour = h*60*60;
    int minute = m*60;
    
    int sum = hour+minute+s;
    printf("%d",sum);
	
}