#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	int b;
	int c;
	int d;

	clrscr();

	printf("enter the value of a:");
	scanf("%d",&a);

	printf("enter trhe value of b:");
	scanf("%d",&b);

	printf("enter the value of c:");
	scanf("%d",&c);

	printf("enter yhe value of d:");
	scanf("%d",&d);
	if(a>b)
	{
	  if(a>c)
	  {
	     if (a>d)
	      {
	      printf("a is maximum");
	      }
	      else
	      {
	      printf("c is maximum");
	      }
	      if(c>d)
	      {
		printf("d is maximum");
	      }
	   }
	}
	if(b>c)
	       {
		 if(b>d)

		 if(c>d)
		 {
			printf("c is maximum");
		 }
		}
		else
		 {
			printf("d is maximum");
		 }
 getch();
}