#include<stdio.h>

void main()
{
	int n,i;
	printf("enter number:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("%d X %d\n %D ",n,i,(n*i));
	}
}