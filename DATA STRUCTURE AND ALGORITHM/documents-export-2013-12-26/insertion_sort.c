/*
	Name: Sagar Giri
	Roll no. : 0205
	Date: 25-06-13
	Description: Program of "insertion sort".
*/
#include <stdio.h>
#define SIZE 50
main()
{
	int num[SIZE];
	int i,j,step,temp;
	int n;
	printf("how many numbers:\n?:");
	scanf("%d",&n);
	
	printf("enter no:\n");
	for(i=0;i<n;i++) 
	{
		scanf("%d",&num[i]);
	}
	
	for(step=1;step<=(n-1);step++) 
	{
		temp = num[step];
		for(j=step-1;j>=0&&num[j]>temp;j--) 
		{
			num[j+1] = num[j];
		}
		num[j+1] = temp;
	}
	printf("\n\n");
	printf("the sorted array is\n");
	for(j=0;j<n;j++) {
		printf("%d\t",num[j]);
	}
	getch();
}
