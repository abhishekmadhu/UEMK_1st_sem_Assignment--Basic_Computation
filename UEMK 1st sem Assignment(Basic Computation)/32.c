/*print prime in given interval*/
#include<stdio.h>
int print_prime(int a, int b)
{
	int i,j,c=0;
	for (i=a; i<=b; i++)
	{
		for(j=2; j<i; j++)
		{
			if((i%j)!=0)
			{
				printf("%d \n",i);
				c++;
				break;				
			}	
		}

	}
	return c;
}

int main()
{
	int a,b,c;
	printf("Enter the range separated by a space:\n");
	scanf("%d%d",&a,&b);
	c=print_prime(a,b);
	if(c==0)
		printf("There are no prme numbers in this range\n");
	return 0;
}