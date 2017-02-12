
#include <stdio.h>

void join(int a, int b)
{
	int digit=0,ans,part1,num2=b,i,multi=1;
	
	while(num2!=0)
	{
		num2=num2/10;
		digit++;
	}
	for(i=1; i<=digit; i++)
	{
		multi=multi*10;
	}
	part1=a * multi;
	ans=part1+b;
	printf("%d\n", ans);
}
int main()
{
	int a,b;
	printf("Enter the two integers separated by a space:\t");
	scanf("%d%d",&a,&b);
	join(a,b);
	return 0;
}