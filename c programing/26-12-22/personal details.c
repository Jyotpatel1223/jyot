#include<stdio.h>

void main()
{
	int age;
	char name;
	float salary;
	
	printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2 Accept persoal details\xb2\xb2\xb2");
	printf("\n\n\t\tenter your name:");
	scanf("%s",&name);
	fflush(stdin);
	printf("\t\t enter your age:");
	scanf("%d",&age);
	printf("\t\tenter your salary:");
	scanf("%f",salary);
	printf("\n\n\n\t\xb2\xb2\xb2\xb2\xb2 show your personal details \xb2\xb2\xb2\xb2\xb2");
	printf("\n\n\t\t name:%S",name);
	printf("\n\n\t\t age:%D",age);
	
}