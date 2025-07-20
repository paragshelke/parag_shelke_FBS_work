 #include <stdio.h>

void main()
 {
    int n;

    printf("Enter the range n: ");
    scanf("%d", &n);

     for (int i = 2; i <= n; i++) 
	{ 
       int flag = 0;
		 
 		int	j = 2;
        while (j <= i / 2)
		 {
            if (i % j == 0)
			 {
                flag = 1; 
                break;
            }
            j++;
        }

        if (flag == 0)
		 {
		 printf("%d ",i);	
		 
	}
    }
}
