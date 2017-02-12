#include<stdio.h>
int main()
{
  int a,b,c,d,e,max1,max2,max3,max;
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  max1=(a>b)?a:b;
  max2=(max1>c)?max1:c;
  max3=(max2>d)?max2:d;
  max=(max3>e)?max3:3;
  printf("Maximum is :%d\n",max);
  return 0;
}
  
