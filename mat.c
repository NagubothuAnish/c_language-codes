#include<stdio.h>
void main ()
{
	int arr1[3][3],i,j;
	
	printf("Read an Array of  size 3x3 and print the Matrix:\n");
	printf("---------------------------------------------------------------------------------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Elements-[%d],[%d]:",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	
  printf("\n The Matrix is: \n");
  for(i=0;i<3;i++)
  {
  	printf("\n");
  	for(j=0;j<3;j++)
  	   printf("%d\t",arr1[i][j]);
  }	
  printf("\n\n");
}
