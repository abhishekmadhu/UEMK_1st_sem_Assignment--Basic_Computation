/*C Program to Swap two Numbers without third variable and arithmetic operator*/
// using X-OR

#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Values before swap are a=%d and b=%d\n", a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("Values after swap are a=%d and b=%d\n", a,b);
	return 0;
}