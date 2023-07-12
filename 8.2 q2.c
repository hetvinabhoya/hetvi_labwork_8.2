#include<stdio.h>

void main()
{
	int n1,n2;
	printf("Enter the first year: ");
	scanf("%d",&n1);
	
	printf("Enter the last year: ");
	scanf("%d",&n2);
	printf("The array is:\n");
	for(n1=n1;n1<=n2;n1++)
	{
		if(n1%4==0)
		{
			printf(" %d\n",n1);
		}
	}
	
	
}
