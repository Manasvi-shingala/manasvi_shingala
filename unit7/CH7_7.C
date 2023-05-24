 #include<stdio.h>
 #include<conio.h>

 main()
 {
	int i;
	int j;

	clrscr();
	for(i='a'; i<='e'; i++)
	{
	for(j=i; j>='a'; j--)
	{
	 printf("%c",j);
	}
		printf("\n");
	}
 getch();
 }