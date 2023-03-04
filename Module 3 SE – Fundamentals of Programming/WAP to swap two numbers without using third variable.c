#include<stdio.h>
int main()
{
	int a,b;
	printf("enter number a:");
	scanf("%d",&a);
	printf("\n enter number b:");
	scanf("%d",&b);
	printf("before swap a=%d b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n after swap a=%d b=%d",a,b);
	return 0;
}

