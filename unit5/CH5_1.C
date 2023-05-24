#include<stdio.h>
#include<conio.h>

main()

{
	int a;
	int b;
	clrscr();

	printf("enter the value of a:");
	scanf("%d",&a);

	printf("enter the value of b:");
	scanf("%d",&b);

	if(a<b)
	{
	       printf("first number is minimum number");
	}
	else
	{
	       printf("second number is minimum naumbr");

	}
	getch();
}
