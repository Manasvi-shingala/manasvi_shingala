#include<stdio.h>
#include<conio.h>
main()
{
float pie=3.14;
int radius;
float area=(pie*radius*radius);
clrscr();
printf("enter the radius of circle:");
scanf("%d",&radius);
area=pie*radius*radius;
printf("the area of circle:%f",area);
scanf("%d",&radius);
getch();
}
