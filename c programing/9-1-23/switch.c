#include<stdio.h>

void main()
{
	int a,b,choice;
	printf(" enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("\na=%d,\nb=%d",a,b);
	printf("\n press 1.add\n press 2.sub\n press 3.multiply\n press 4.division");
	printf("\n enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("\n addition: %d",(a+b));
		       break;
		case 2:printf("\n subtract: %d",(a-b));
		       break;
	    case 3:printf("\n multiply:%d",(a*b));
		       break;
	    case 4:printf("\n division:%.2f",((float)a/b));
		       break;
	    default:printf("\n invalid input");
		        break;       
	}
}