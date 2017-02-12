#include<stdio.h>


void patt()
{
  int a[11][11]={0},i,j;
  int depth=1,height=10,n=1;
  
  for(i=1;i<=5;i++,depth++,height--)
    {
      for(j=depth;  j<=height;  j++,n++)
      {
          a[i][j]=n;
      }
      for(j=depth+1;  j<=height;   j++,n++)
      {
          a[j][height]=n;
      }
      for(j=height-1;  j>=depth;   n++,j--)
      {
          a[height][j]=n;
      }
      for(j=height-1;  j>depth;  n++,j--)
      {
          a[j][depth]=n;
      }
    }
  
  for(i=1;i<=10;i++)
    {
      printf("\n\n\t");
      for(j=1;j<=10;j++)
      {
        
          
        if(a[i][j]==100)
	  printf("%d", a[i][j]);
	
        else if(a[i][j]==99)
          printf("\t%d\t", a[i][j]);

	else
          printf("%d\t",a[i][j]);
      }
    }
    printf("\n\n\n");
}


int main()
{
  patt();
  return 0;
}

