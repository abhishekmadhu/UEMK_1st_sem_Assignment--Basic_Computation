
		//INSANE code, INSANE question
#include<stdio.h>
void patt(int a)
{

	if (a==3)
	{
		printf("%c",a);
		a++;
	}
	else if(a==4)
	{
		printf("%c",a);
		a--;
	}
}

int main()
{
	int a=3,p=0;
	printf("\n");
	while(p!=9999)

	{	

		patt(a);
		if(p%159==0)
		{
			printf("\n");
		}
		p++;

	}
	return 0;
	
	
	
}