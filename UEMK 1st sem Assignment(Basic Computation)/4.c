#include <stdio.h>

int main()
{
  int array[100], search, c, n,m=0;

  printf("Enter the number of elements in array\n");
  scanf("%d",&n);

  printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter the number to search\n");
  scanf("%d", &search);


  for (c = 0; c < n; c++)
    {
      if (array[c] == search){ 
      
	printf("%d is present at location %d.\n", search, c+1);
	m++;
      }
    }
  if (m==0)
    printf("%d is not present in array.\n", search);

  return 0;
}
