	//	random number in a range-- not totally random--
	//	pattrn observed in output (8,394 are common when availabe in range)

#include<stdio.h>

int random(int a, int b)
{
	int i,k;
	while(i<a || i>b)
	{
		if(i>=a && i<=b)
		{
			return i;			
			break;
		}
		else
		{
			k=random(a,b);
			return k;
			break;
		}
	}
}

int main()
{
	int a,b,r;
	printf("Enter the starting~ending range separated  by a space\n");
	scanf("%d%d",&a,&b);
	r=random(a,b);
	printf("%d\n",r);
	return 0;
}