#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,d,e;
    clrscr();

    printf("enter the value of a:");
    scanf("%d",&a);

    printf("enter the value of b:");
    scanf("%d",&b);

    printf("enter the value of c:");
    scanf("%d",&c);

    printf("enter the value of d:");
    scanf("%d",&d);

    printf("enter the value of e:");
    scanf("%d",&e);

    if(a>b)
    {
	   if(a>c)
	   {
		  if(a>d)
		  {      if(a>e)
			{
			 printf("a is maximum");
			 }
		  }
		  else
		  {
			    printf("e is maximum");
		  }
	   }
    }
  else
  {
	    if(b>c)
	    {
		   if(b>d)
		   {      if(b>e)
			  {
			  printf("b is maximum");
		   }
		   }
		   else
		   {
			  printf("e is maximum");
		   }
	    }
  }
    if(c>d)
    {
      if(c>e)
      {
		  printf("c is maximum");
      }
      else
      {
		 printf("e is maximum");
      }
    }
    if(d>e)
    {
	   printf("d is maximum");
    }
    else
    {
	    printf("e is maximum");
     }

  getch();
}