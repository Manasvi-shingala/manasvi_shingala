#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
clrscr();
	printf("enetr the vaalue of a :");
	scanf("%d",&a);

	printf("enter the calue of b:");
	scanf("%d",&b);

	printf("ener the value of c:");
	scanf("%d",&c);
	if(a==b && b==c && a==c)
	{
	  printf("all are same...");
	}
	else
	{
	   if(a==b)
		{
		   printf("a and b are same...");
		}
		else if(b==c)
		{
		   printf("b and c are same...");
		}
		else if(a==c)
		{
		    printf("a and c are same...");
		}
	else
	{
	  if(a>b)
	{
	  if(b>c)
	   {
	      printf("b is max");
	   }
	  else
	   {
	      printf("c is max");
	   }
	 }
      else
      {
	if(b>c)
	{
	  printf("b is max");
	}
	else
	{
	  printf("c is max");
	}
      }
    }
  }
getch();
}