#include<stdio.h>
#include<conio.h>

main()
{
	int choice;
	int type_1;
	int type_2;
	int type_3;

	clrscr();

	printf("\npress 1 for english");
	printf("\npress 2 for hindi");
	printf("\npress 3 for gujarati");

	printf("enter your choice");
	scanf("%d",&choice);

     switch(choice)
    {
     case 1:
	printf("\npress 1 for topup_recharge");
	printf("\npress 2 for menual_ recharge");
	printf("\npress 3 for internet_recharge");

	printf("enter the your type");
	scanf("%d",&type_1);

     switch(type_1)
	{
	case 1: printf("\nyou select the topup_recharge");  break;
	case 2: printf("\nyou select the menual_recharge");  break;
	case 3: printf("\nyou select the internet_recharge");  break;
	default: printf("\nno any type avilable");
	}
	break;
     case 2:
	printf("\ntopup_recharge ke liye 1 dabaiye");
	printf("\nmenual_recharge ke liye 2 dabaiye");
	printf("\ninternet_recharge ke liye 3 dabaiye");

	printf("enter the your langauge type");
	scanf("%d",&type_2);

     switch(type_2)
     {
      case 1: printf("\napne topup_recharge pasand kiya he");break;
      case 2: printf("\napne manual_recharge pasand kiya he");break;
      case 3: printf("\napne internet_recharge pasand kiya he");break;
      default: printf("\napne pasand kiya hua recharge upalabdh nahi he");
     }
break;
     case 3:
	printf("\ntoup_recharge mate 1 dabavo");
	printf("\nmenual_recharge mate 2 dabavo");
	printf("\ninternet_recharge mate 3 dabavo");

	printf("enter the your langauge type");
	scanf("%d",&type_3);

     switch(type_3)
     {
      case 1: printf("\ntame topup_recharge pasand karyu chhe");break;
      case 2: printf("\ntame manual_recharge pasand karyu chhe");break;
      case 3: printf("\ntame internet_recharge pasand karyu chhe");break;
      default: printf("\ntame pasand karelu recharge upalabdh nathi");
     }

     break;
     }
     getch();
}

