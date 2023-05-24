#include<stdio.h>

main()
{
	int n,i=0;
	
	printf("enter any number :");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n/10;
		i++;
		
	}
	printf("the degit value: %d",i);
		
	  	
	
}
