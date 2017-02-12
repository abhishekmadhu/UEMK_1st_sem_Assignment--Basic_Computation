
/*	INCOMPLETE	*/

/*57. Write the program that will read a real number 
from the keyboard and print the following
output in one line:
1. Smallest integer notless than the number
2. The given number
3. Largest integer not greater than the number*/

#include <stdio.h>
int flag=0;


int main()
{
	int n,i,j,k,digit=0,a[10],num,temp,first_digit,second_digit,p;
	scanf("%d",&n);
	num=n;
	for(i=0; i<10; i++)
	{
		while(n!=0)
		{
			a[i]=n%10;		//digis arranged in array
			if (n/100==0 && n/10!=0)
			{
				second_digit=a[i];
			}
			if(n/10==0)
			{
				first_digit=a[i];
			}
			n=n/10;
			digit++;		//no of digits found
		}
	}
	printf("first_digit=%d\n", first_digit);
	k=first_digit;
	//printf("k=%d\n", k);
	for(i=0; i<10; i++)
	{
		for(j=i+1; j<10; j++)
		{
			if (a[j]>a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}				//digits arranged in descending order
		}
	}
	for (p=0; p<digit; p++)
	{
		/* code */			//write a code to find all possible combnations with all the digits
	}

	return 0;
}

/*The digits should not be indvidual digits.
We need the  numbers that are formed by the 
combinations.
Then we just have to sort and fuck the question*/