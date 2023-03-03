#include<stdio.h>

void main()
{
	int i,j;
	
	printf("enter your number:");
	scanf("%d",&i);
	for(i=2;i<=8;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d X %d = %d\n",i,j,(i*j));
		}
	}
}