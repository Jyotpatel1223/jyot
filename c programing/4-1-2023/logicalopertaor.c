#include<stdio.h>

void main()
{
	int a=10,b=20;
	printf("\na=%d,b=%D,a,b");
	if(a&&b)	
	{
		printf("\nline 1 is true");
		
	}
else
{
	printf("\nline2 is false ");
	
}
b=10,a=10;
if(a||b)
{
	printf("\nline 3 is true");
	
}
else
{
	printf("\nline 4 is false");
}
if(!(a&&b))
{
printf("\nline 5 is true");

}
else
{
	printf("\nline 6 is false");
}
}