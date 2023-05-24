#include<stdio.h>
#include<conio.h>
main()
{
const pie=3.14;
int perimeter;
int radius;

clrscr();

printf("radius of circle=");
scanf("%d",&radius);
perimeter=2*pie*radius;
printf("enter thr radius of circleis:%d",perimeter);
getch();
}
