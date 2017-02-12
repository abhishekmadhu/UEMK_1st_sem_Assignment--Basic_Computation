#include<stdio.h>
void sizze()
{
  printf("\nint=%d bytes", sizeof(int));
  printf("\nfloat=%d bytes", sizeof(float));
  printf("\ndouble=%d bytes", sizeof(double));
  printf("\nchar=%d bytes", sizeof(char));
  
}

int main()
{
  sizze();
  return 0;
}
