#include<stdio.h>
void ck_alphabet(char a)
{
  int b;
  b=a;
                             // printf("%d\n",b);
  if(b>=65 && b<=90)
    {
      printf("Alphabet\n");
    }
  else if(b>=97 && b<=122)
    {
      printf("Alphabet\n");
    }
  else
    {
      printf("Not Alphabet\n");
    }
}

int main()
{
  char a;
  scanf("%c",&a);
  ck_alphabet(a);
  return 0;
}
