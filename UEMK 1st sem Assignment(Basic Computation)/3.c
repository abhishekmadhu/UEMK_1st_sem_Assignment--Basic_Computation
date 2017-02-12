
#include <stdio.h>

int max_of_array(int a[],int n)
{
	int max=a[0],i;
	for (i = 0; i < n; i++)	
	{
		if(a[i]>max)
			max=a[i];
	}
	return max;
}

int min_of_array(int a[],int n)
{
	int min=a[0],i;
	for (i = 0; i < n; i++)	
	{
		if(a[i]<min)
			min=a[i];
	}
	return min;
}


int main()
{
	int b[100],i,n,max,min;
	printf("No of elements\n");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&b[i]);
	}
	max=max_of_array(b,n);
	min=min_of_array(b,n);
	printf("Range is %d to %d\n", min,max);
	return 0;
}