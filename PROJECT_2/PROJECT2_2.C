#include<stdio.h>
#include<conio.h>

main()
{
	int unit;
	float amount , survalue;
	clrscr();

	printf("enter the unit : ");
	scanf("%d",&unit);
	if(unit<=50)
	{
		amount=unit*0.50;
	}
	else if(unit<=150)
	{
		amount=unit*0.75;
	}
	else if (unit<=250)
	{
		amount=unit*1.20;
	}
	else
	{
		amount=unit*1.50;
	}
       survalue=(amount*0.20);
	printf("the electricity bill is :%f",amount+survalue);

getch();
}