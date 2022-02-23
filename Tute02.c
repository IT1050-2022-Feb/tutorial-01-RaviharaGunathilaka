#include <stdio.h>

int main() 
{
  int Distance,Total;

  printf("Enter the Distance : ");
  scanf("%d",&Distance);

  if(Distance<=30)
  {
    Total= 50*Distance;
    printf("Amount = %d",Total);
  }
  else
  {
    Total = 50*30 + 40*(Distance-30);
    printf("Amount = %d",Total);
  }
  return 0;
}