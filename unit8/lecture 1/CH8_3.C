#include<stdio.h>
main()
{


	int n;
	
	printf("enter  size of array:");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],i;
	
	
	 printf("enter any array a's element\n");
	 	 
	 for(i=0;i<n;i++)
	 {
	 	printf("enter a[%d]",i);
	 	scanf("%d",&a[i]);
	 }
	 	 
	 	 printf("enter any array a's element\n");
	 	 
	 for(i=0;i<n;i++)
	 {
	 	printf("enter b[%d]",i);
	 	scanf("%d",&b[i]);
	 }
	 	 
	 	 for(i=0;i<n;i++)
	 	 {
	 	 	c[i]=a[i]+b[i];
	 	 	printf("%d",c[i]);
	 	 	
		  }
}
