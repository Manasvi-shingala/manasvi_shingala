#include<stdio.h>

main()
{
	int a[1000];
	int i,n;
	
	printf("enter array size:");
	scanf("%d",&n);
	
	printf("enter elements in array:");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n negative elements in array:");
	
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d\t",a[i]);
		}
		
	}
}
