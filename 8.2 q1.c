#include<stdio.h>

main()
{
	int n1,n2,i;
	
	printf("Enter the size of array A :-");
	scanf("%d",&n1);

	printf("Enter the size of array B :-");
	scanf("%d",&n2);
	
	int a[n1],b[n2],c[n1+n2];
	
	for(i=0;i<n1;i++)
	{
		printf("a[%d] :- ",i);
		scanf("%d",&a[i]);   
	}	
	for(i=0;i<n2;i++)
	{
		printf("b[%d] :- ",i);
		scanf("%d",&b[i]);  
	}	
	
	for(i=0;i<n1;i++)
	{
		c[i] = a[i];
	}
	for(i=0+n1;i<n1+n2;i++)
	{
		c[i] = b[i-n1];
	}
	
	printf("\nAfter merge array :- ");
	for(i=0;i<n1+n2;i++)
	{
		printf("%d  ",c[i]);
	}
}

