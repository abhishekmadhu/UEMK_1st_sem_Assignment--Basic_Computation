#include <stdio.h>

float bill(int total_call)
{
	int extra_call;
	float charge;
	if (total_call>100)
	{
		extra_call=total_call-100;
		charge=(extra_call*1.25)+250;
	}
	else
	{
		charge=250;
	}
	return charge;
}

int main()
{
	int call_num;
	float charge;
	scanf("%d",&call_num);
	charge=bill(call_num);
	printf("The total bill is %.2f INR\n", charge);
	return 0;
}