#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter the valu of x:");
  scanf("%d", &x);
  printf("Enter the value of y:");
  scanf("%d", &y);

  int temp=x; 
  x=y;
  y=temp;

  printf("Swapping the numbers: x = %d, y = %d ", x,y);

   return 0;
}
