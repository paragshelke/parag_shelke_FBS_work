#include<stdio.h>
#include<string.h>

typedef struct player 
{
	int jerseynumber;
	char name[20];
    int runs;
    int wickets;
    int matches;
}p;

void sortby_wickets(p *,int);
void sortby_runs(p *,int);
void update_player(p *,int);
void removee_player(p *,int *);
void searchby_name(p *,int);
void searchby_jerseyno(p *,int);
void add_player(p *,int *);
void display(p *,int );
void stored_players(p *,int);
void main()
{
	p arr[11];
	int size=3;
	int choice;

    	stored_players(arr,size);
	
	do{
	
		printf("\n1. Display all players\n");
		printf("2. Add players\n");
		printf("3. Search players\n");
		printf("4. Remove players\n");
		printf("5. Update players\n");
		printf("6. Display sorted players\n");
		printf("7. Exit\n");
		printf("Enter your choice : \n");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			display(arr,size);
		}
		else if(choice==2)
		{
			add_player(arr,&size);
		}
		else if(choice==3)
		{
			int option;
			printf("\n1.search by jerseynumber");
			printf("\n2.search by name");
			printf("\nEnter your choice : \n");
			scanf("%d",&option);
			
			if(option==1)
			searchby_jerseyno(arr,size);
			else if(option==2)
			searchby_name(arr,size);		
		}
		else if(choice==4)
		{
			removee_player(arr,&size);
		}
		else if(choice==5)
		{
			update_player(arr,size);
		}
		else if(choice==6)
		{
			int option;
			printf("\n1.sort by runs");
			printf("\n2.sort by wickets");
			printf("\nEnter your choice :\n");
			scanf("%d",&option);
			
			if(option==1)
			sortby_runs(arr,size);
			else if(option==2)
			sortby_wickets(arr,size);
		}
		
	}while(choice!=7);
	 
}

void sortby_wickets(p *arr,int size)
{
	p temp;
    for(int i=0;i<size-1;i++)
	{
        for(int j=0;j<size-1-i;j++) 
		{
            if(arr[j].wickets<arr[j+1].wickets)
			{
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

	printf("\nplayers sorted by wickets :\n");
	display(arr,size);
}
void sortby_runs(p *arr,int size)
{
	p temp;
    for(int i=0;i<size-1;i++)
	 {
        for(int j=0;j<size-1-i;j++) 
		{
            if(arr[j].runs<arr[j+1].runs)
			{
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

	printf("\nplayers sorted by runs :\n");
	display(arr,size);
	
}
void update_player(p *arr,int size)
{
    int jn;
    printf("\nEnter jersey number of the player to update: ");
    scanf("%d",&jn);

    int flag = 0;
    for(int i=0;i<size;i++) 
	{
        if(arr[i].jerseynumber==jn)
		{
            flag=1;
		printf("\nEnter jerseynumber of player : \n");
    	scanf("%d",&arr[i].jerseynumber);
    	getchar();
    	
    	printf("Enter name of player : \n");
    	gets(arr[i].name);
    	
    	printf("Enter runs of player : \n");
  		scanf("%d",&arr[i].runs);
  		
  		printf("Enter wickets of player : \n");
    	scanf("%d",&arr[i].wickets);
    	
    	printf("Enter matches played by player : \n");
    	scanf("%d",&arr[i].matches);
    	
    	printf("player updated sucessfully\n");
            break;
        }
    }

    if(flag==0)
	{
        printf("\nPlayer not found\n");
    }

}
void removee_player(p *arr,int *size)
{
    int jn;
    printf("\nEnter jersey number to remove: ");
    scanf("%d",&jn);

    int flag=0;
    for (int i=0;i<*size;i++)
    {
        if(arr[i].jerseynumber==jn)
        {
            flag=1;
            for(int j=i;j<*size-1;j++)
            {
                arr[j]=arr[j + 1];
            }
            (*size)--; 
            
            break;
        }
    }
    if(flag==0)
    printf("\nPlayer not found\n"); 
	else
	printf("\nPlayer removed successfully\n");   
}

void searchby_name(p *arr,int size)
{
	char pname[20];
	printf("\nEnter name of player to search : ");
	getchar();
	gets(pname);
	
	int flag=0,index;
	for(int i=0;i<size;i++)
	{
		if(strcmp(arr[i].name,pname)==0)
		{
			flag=1;
			index=i;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nDetails of player : ");
		
		printf("\nJerseynumber of player : %d",arr[index].jerseynumber);
		printf("\nName of player : %s",arr[index].name);
		printf("\nRuns of player : %d",arr[index].runs);
		printf("\nWickets of player : %d",arr[index].wickets);
		printf("\nMatches played by player : %d\n",arr[index].matches);
	}
	else
		printf("\nplayer not found\n");
	
}
void searchby_jerseyno(p *arr,int size)
{
	int jn;
	printf("\nEnter jersey number to search : \n");
	scanf("%d",&jn);
	
	int flag=0,index;
	for(int i=0;i<size;i++)
	{
		if(arr[i].jerseynumber==jn)
		{
			flag=1;
			index=i;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nDetails of player : ");
		
		printf("\nJerseynumber of player : %d",arr[index].jerseynumber);
		printf("\nName of player : %s",arr[index].name);
		printf("\nRuns of player : %d",arr[index].runs);
		printf("\nWickets of player : %d",arr[index].wickets);
		printf("\nMatches played by player : %d\n",arr[index].matches);
	}
	else
		printf("\nplayer not found\n");
}
void add_player(p *arr,int *size)
{
		printf("\nEnter jerseynumber of player : \n");
    	scanf("%d",&arr[*size].jerseynumber);
    	getchar();
    	
    	printf("Enter name of player : \n");
    	gets(arr[*size].name);
    	
    	printf("Enter runs of player : \n");
  		scanf("%d",&arr[*size].runs);
  		
  		printf("Enter wickets of player : \n");
    	scanf("%d",&arr[*size].wickets);
    	
    	printf("Enter matches played by player : \n");
    	scanf("%d",&arr[*size].matches);
    	
    	(*size)++;
    	
    	printf("\nplayer added sucessfully\n");

}
void display(p *arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nDetails of player %d : \n",i+1);
		
		printf("\nJerseynumber of player : %d\n",arr[i].jerseynumber);
    	
    	printf("Name of player : %s\n",arr[i].name);
    	
    	printf("Runs of player : %d\n",arr[i].runs);
  		
  		printf("Wickets of player : %d\n",arr[i].wickets);
    
    	printf("Matches played by player : %d\n",arr[i].matches);
	}
}

void stored_players(p *arr,int size)
{
		arr[0].jerseynumber=7;
		strcpy(arr[0].name,"MS Dhoni");
		arr[0].runs=7000;
		arr[0].wickets=200;
		arr[0].matches=500;
		
		arr[1].jerseynumber=8;
		strcpy(arr[1].name,"Virat Kholi");
		arr[1].runs=10000;
		arr[1].wickets=20;
		arr[1].matches=300;
		
		arr[2].jerseynumber=10;
		strcpy(arr[2].name,"Sachin Tendulkar");
		arr[2].runs=15000;
		arr[2].wickets=60;
		arr[2].matches=800;			
}