#include <stdio.h>
int main() 
{
  int k,l,Total=0;

  printf("Enter the Number : ");
  scanf("%d",&k);

  for(l=1;l<=k;l++)
    {
      Total += l;
    }
  printf("Sum = : %d",Total);
  return 0;
}