#include<stdio.h>

void main()
{
	int num1,num2;
	printf("\nEnter number 1:");
	scanf("%d",&num1);
	printf("\nEnter number2:");
	scanf("%d",&num2);
	
		printf("number1 =%d /nNumber2 = %d",num1,num2);
	//printf("/nNumber2 = %d",num2);
	printf("\nAddition:%d",(num1+num2));
	printf("\nsubtraction:%d",(num1-num2));
	printf("\nmultiplication:%d",(num1*num2));
	printf("\ndivision:%.2f",((float)num1/num2));
}