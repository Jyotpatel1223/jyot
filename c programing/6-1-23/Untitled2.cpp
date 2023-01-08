#include<stdio.h>

void main()
{
	inta,b,choices;
	printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 choice calculator \xb2\xb2\xb2\xb2");
	printf("\n\n\t\tenter A:");
	scanf("%d",&a)
	printf("\t\tenter b :");
	scanf("%d",&b);
	printf("\n\t\ta=%d,b=%d",a,b);
	printf("\n\t\t==========================");
	printf("\n\t\t press1. for addition");
	printf("\n\t\tpress2.for subtraction");
	printf("\n\t\t press3. fro multiplicaton");
	printf("\n\t\t press4. for division");
	printf("\n\t\t enter your choices ?");
	scanf("%d",&choice);
	
	if(choice=1)
	{
		printf("\n\t\t addition:%d",(a+b));
		
	}
	else if (choice=2)
	{
		printf("\n\t\t subtraction:%d"(a-b));
		
	}
	elseif(choice=3)
	{
		printf("\n\t\tmultipliaction:%d",(a*b))
		
	}
	else if (choice=4)
	{
		printf("\n\t\tdivision:%d",(a/b));
		
	}
}