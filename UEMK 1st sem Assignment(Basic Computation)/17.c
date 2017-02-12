#include<stdio.h>
#include<stdlib.h>
#include<features.h>
int sqrt(int a)
{
  int i;
  for(i=0; i<=a/2; i++)
    {
      if(i*i==a)
	{
	  
	  return i;
	  break;
	}
    }
}

int main()
{
int a,b,c,z,r;
  float root1,root2;
  printf("Enter the co-efficient for x^2:\t");
  scanf("%d",&a);
  printf("Enter the co-efficient for x:\t");
  scanf("%d",&b);
  printf("Enter the costant term:\t");
  scanf("%d",&c);
  z=(b*b)-(4*a*c);
  r=sqrt(z);
  root1=((-b)+r)/(2*a);
  root2=(-b-r)/(2*a);
  printf("The roots are:\nRoot1=%f\nRoot2=%f",root1,root2);
  return 0;
}
