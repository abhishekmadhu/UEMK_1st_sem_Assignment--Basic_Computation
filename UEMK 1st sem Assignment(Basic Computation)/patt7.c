/*PATTERN 7*/

/*
12344321
123**321
12****21
1******1
*/

#include <stdio.h>

int main()
{
	int i,j,k,l;
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=4+1-i; j++)
		{
			printf("%d",j);
		}
		for(l=1; l<=(2*i)-2; l++)
		{
			printf("*");
		}
		for(k=4-i+1; k>=1; k--)
		{
			printf("%d", k);
		}
		printf("\n");
	}
	return 0;
}