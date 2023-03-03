#include<stdio.h>

void f1()
{
	f2();
	printf("\nfunction1 called.");
	
}
void f2()
{
	
	printf("\nfuntion2 called.");
	
}
void main()
{
	printf("\nstart function called.");
	f1();
	f2();
	printf("\n End function.");
}

