#include<stdio.h>
#include<conio.h>

main()
{
	int a;

	clrscr();

	printf("enter the value of a:");
	scanf("%d",&a);

	if(a<0)
	{
		printf("%d number is negative");
	}
	else if(a>0)
	{
		printf("%d number is posative");
	}
	else
	{
		printf("%d number is neutral");
	}
	getch();
}



