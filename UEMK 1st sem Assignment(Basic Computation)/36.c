	/*Super digit of a number*/
	/*It is the number iff the number is of one
	digit, else it is given by the super digit 
	of the digit sum 
	of the number*/

#include<stdio.h>

int sup(int a)
{
	int num,d,z,sum=0;
	num=a;
	while(a!=0)
	{
		d=a%10;
		sum+=d;
		a=a/10;
	}
	if(num/10==0)
	{
		return num;
	}
	else
	{
		z=sup(sum);
		return z;
	}
}

int main()
{
	int a,ans;
	scanf("%d",&a);
	ans=sup(a);
	printf("The super digit is %d\n",ans);
	return 0;
}