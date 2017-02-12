#include <stdio.h>
void triangle(int rows)
{
  int i, j;
  for(i=1;i<=rows;++i)
    {
      for(j=1;j<=i;++j)
	{
	  printf("* ");
	}
      printf("\n");
    }
}
int main()
{
  int n;
  printf("Enter hight of triangle");
  scanf("%d",&n);
  triangle(n);
  return 0;
}
