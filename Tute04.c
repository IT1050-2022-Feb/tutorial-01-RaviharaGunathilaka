#include <stdio.h>
int  minimum(int no1 , int no2);
int  maximum(int no1 , int no2);
int  multiply(int no1 ,int no2);
int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d\n ", minimum(no1, no2));
   printf("%d \n", maximum(no1, no2));
   printf("%d \n", multiply(no1, no2));
   return 0;
}
int  minimum(int no1 , int no2){
  if (no1 > no2){
    return no2;
  }
  else{
    return no1;
  }
}
int  maximum(int no1 , int no2){
   if (no1 < no2){
    return no2;
  }
  else{
    return no1;
  }
}
int  multiply(int no1 ,int no2){
  int y = no1 * no2;

  return y;
}