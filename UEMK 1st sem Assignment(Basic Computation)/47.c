#include <stdio.h>
void rev_sen()
{
	char a;
	scanf("%c", &a);
	if (a!='\n')
	{
		rev_sen();
		printf("%c", a);
	}
}
int main()
{
	printf("Enter a sentence to be reversed:\n");
	rev_sen();
	printf("\n");
	return 0;	
}