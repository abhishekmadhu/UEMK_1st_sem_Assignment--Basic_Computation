/*Triangle and pyramid print*/

#include<stdio.h>
void pyramid(int a)

{
  int i,j,k;						
  
  for(i=a; i>=1; i--)
    {
    	for(j=1; j<i; j++)
		{
		  printf(" ");	
		  printf("*");
		}
		for(k=0; k<=2*(a-i)-2; k++)
		  printf("*");
		if(i!=a)
		  printf("*");
    	printf("\n");
    }
  
}

void triangle(int rows)
{
  int i, j;
  for(i=1;i<=rows;++i)
    {
      for(j=1;j<=i;++j)
	{
	  printf("* ");
	}
      printf("\n");
    }
}

int main()
{
	int a,b,n;
	printf("What do you wanna print?\n");
	printf("1. Triangle\n2. Pyramid\n3. Both\n");
	scanf("%d",&n);
	printf("Enter the dimensions (in no of lines)\n");
	scanf("%d",&a);
	switch(n)
	{
		case 1: triangle(a);
				break;
		case 2: pyramid(a);
				break;
		case 3: triangle(a);
				printf("\n");
				pyramid(a);
				break;
		default: printf("Try Again Later\n");
	}
}