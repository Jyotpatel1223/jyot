#include<stdio.h>

void main()
{
	int a,b,c;
	printf("\n enter a:");
	scanf("%d,&a");
	printf("\n enter b:");
	scanf("%d,&b");
	printf("\n enter c:");
	scanf("%d,&c");
	
	printf("\na=%D,b=%d,c=%D",a,b,c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\na is greater");
	
		}
		else
		{
			printf("\nc is greater.");
		}
	}
	else
	{
		if(b>c)
		{
			printf("\nb is greater.");
			
		}
		else
		{
			printf("\nc is greater.");
			
		}
	}
}
	

	
	