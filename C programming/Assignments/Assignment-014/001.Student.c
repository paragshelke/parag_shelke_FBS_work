#include<stdio.h>

struct student 
{
	int rollno;
	char name[15];
	int marks;
};
 
void main()
{
	struct student s1,s2,s3;
	printf("enter rollno,name,marks :");
	scanf("%d %s %d",&s1.rollno,&s1.name,&s1.marks);
	
	printf("enter rollno,name,marks :");
	scanf("%d %s %d",&s2.rollno,&s2.name,&s2.marks);
	
	printf("enter rollno,name,marks :");
	scanf("%d %s %d",&s3.rollno,&s3.name,&s3.marks);
		
			printf("s1rollno = %d , s1name = %s , s1marks = %d",s1.rollno,s1.name,s1.marks);
			printf("s2rollno = %d , s2name = %s , s2marks = %d",s2.rollno,s2.name,s2.marks);
			printf("s3rollno = %d , s3name = %s , s3marks = %d",s3.rollno,s3.name,s3.marks);
}