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

	printf("enter the value of d:");
	scanf("%d",&d);
	if(a<b)
	{
	  if(a<c)
	  {
	     if (a<d)
	      {
	      printf("a is minimum");
	      }
	      else
	      {
	      printf("c is minimum");
	      }
	      if(c<d)
	      {
	      printf("d is minimum");
	      }
	   }
	}
	if(b<c)
	       {
		 if(b<d)

		 if(c<d)
		 {
			printf("c is minimum");
		 }
		}
		else
		 {
			printf("d is minimum");
		 }
 getch();
}