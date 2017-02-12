#include<stdio.h>
void multi()
{
	int i,j,n;
	printf("Enter value of n=");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		if(i!=1)
			printf("%d\t", i);
		if(i==1)
			printf(" \t");
		for(j=1; j<=n; j++)
		{
			printf("%d\t",i*j);
		}
		printf("\n\n\n");
	}
}

int main()
{
	multi();
	return 0;
}