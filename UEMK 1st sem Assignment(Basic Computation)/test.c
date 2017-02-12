/*testing*/

#include <stdio.h>

int main()
{
	int i=1,j=1,l=1;

	
	while (l!=100)
	{
		if (i=j)
		{
			if(i<5)
			{
				for (j;i+j<=12; j++)
				{
					printf("%d %d %d",i,j,l);
					l++;
				}
			}
			if(i>5)
			{
				for(j; i+j>11; j--)
				{
					printf("%d %d %d", i,j,l);
					l++;
				}
			}
		}
		if (i+j==11)
		{
			if (i<j)
			{
				for(i; i<j; i++)
				{
					printf("%d %d %d", i,j,l);
					l++;
				}
			}
			if(i>j)
			{
				for(i; i>(j+1); i--)
				{
					printf("%d %d %d", i,j,l);
					l++;
				}
			}
		}
	}														/*
	for(i=1; i<=10; i++)
	{
		for(j=1; j<=10; j++)
		{
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}														*/
	return 0;
}