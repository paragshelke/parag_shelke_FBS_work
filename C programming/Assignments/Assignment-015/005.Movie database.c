#include<stdio.h>
#include <string.h> 

typedef struct movie
{
	char name[20];
	char director[20];
	int year;
	char genre[20];	
}m;

void displayy(m *,int );
void update(m *,int);
void search(m *,int );
void add(m*,int );

void main()
{
	m arr[3];

	add(arr,3);
	search(arr,3);
	update(arr,3);
	displayy(arr,3);	
}

void add(m *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("enter name director year genre :");
		scanf("%s %s %d %s",&arr[i].name,&arr[i].director,&arr[i].year,&arr[i].genre);
	}

}

void search(m *arr, int n)
{
    char title[20];
    int found = 0;

    printf("\nEnter movie title to search: ");
    scanf("%s", title);

    for (int i = 0; i < n; i++)
    {
        if (strcmp(arr[i].name, title) == 0)
        {
            printf("\nMovie found:\n");
            printf("Name: %s\n", arr[i].name);
            printf("Director: %s\n", arr[i].director);
            printf("Year: %d\n", arr[i].year);
            printf("Genre: %s\n", arr[i].genre);
            found = 1;
            break; 
        }
    }

    if (found==0)
    {
        printf("Movie not found.\n");
    }
}

void update(m *arr, int n)
{
    char title[20];
    int found = 0;

    printf("\nEnter movie title to update: ");
    scanf("%s", title);

    for (int i = 0; i < n; i++)
    {
        if (strcmp(arr[i].name, title) == 0)
        {
            printf("\nEnter new name, director, year, genre: ");
            scanf("%s %s %d %s", arr[i].name, arr[i].director, &arr[i].year, arr[i].genre);

            printf("Movie updated successfully.\n");
            found = 1;
            break; 
        }
    }

    if (found==0)
    {
        printf("Movie not found.\n");
    }
}


void displayy(m *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nname=%s director=%s year=%d genre=%s",arr[i].name,arr[i].director,arr[i].year,arr[i].genre);
	}	
}