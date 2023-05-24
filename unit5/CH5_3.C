#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	int b;
	int c;
	clrscr();
	printf("enter the value of a:");
	scanf("%d",&a);

	printf("enter the value of b:");
	scanf("%d",& b);

	printf("enter the value of c:");
	scanf("%d",&c);

	if(a<b)
	{
	  if(a<c)
	  {
	    printf("a is minimum");
	  }
	  else
	  {
	   printf("b is minimum");
	  }

	}
	else
	{
	 if(b<c)
	 {
	  printf("b is minimum");
	 }
	 else
	 {
	  printf("c is minimum");
	 }
	}
	getch();
}