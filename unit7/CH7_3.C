 #include<stdio.h>
 #include<conio.h>

 main()
 {
	int a;
	int b;
	clrscr();
	for(a=5; a>=1; a--)
	{
	for(b=5; b>=a; b--)
	{
	 printf("%d",a);
	}
		printf("\n");
	}
 getch();
 }