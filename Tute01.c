#include <stdio.h>

int main() 
{
  int subject1,subject2,Total,Avg;

  printf("Enter Subject 1 mark : ");
  scanf("%d",&subject1);

  printf("Enter Subject 2 mark : ");
  scanf("%d",&subject2);

  Total=subject1+subject2;
  Avg=Total/2;

  printf("Average = %d",Avg);
  
  return 0;
}