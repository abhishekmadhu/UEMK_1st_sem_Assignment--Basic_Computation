/*	ASCII character and VALUE	*/

#include<stdio.h>
void ascii()
{
	int i=0;
	printf("ASCII VALUE    CHARACTER\n");
	while(i!=256)
	{
		printf("     %d             %c\n",i,i);
		i++;
	}
}
int main()
{
	ascii();
	return 0;
}