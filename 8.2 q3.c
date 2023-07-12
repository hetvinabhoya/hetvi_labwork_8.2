#include<stdio.h>

void main()
{
	int i,n;
	
	printf("Enter array size: ");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
	{
    printf("Enter array elements: ");
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
	{
	printf("a[%d]=%d\n",i,a[i]);
	}
	printf("----------------------------\n");
	printf("The squares of array elements:\n");
	for(i=0;i<n;i++)
	{
		a[i]=a[i]*a[i];
		printf("a[%d]=%d\n",i,a[i]);
	}
}
