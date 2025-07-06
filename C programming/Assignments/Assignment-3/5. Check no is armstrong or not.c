#include <stdio.h>

void main()
{
	int no=153;
	int r,sum=0,temp=no;
	while(no>0)
	{
		r=no%10;
		sum=sum+(r*r*r);
		no=no/10;
	}	
	if(sum==temp)
	{
		printf(" %d no is armstrong",temp);
	}                             
	else
	{
		printf("%d no is not armstrong",temp);
	}
	

} 