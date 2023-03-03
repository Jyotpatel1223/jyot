#include<stdio.h>

void main()
{
	int rollno,s1,s2,s3,total;
	char name[10];
	float per;
	
	printf("\n enter roll no:");
	scanf("%d",&rollno);
	fflush(stdin);
	printf("\nenter name:");
	//scanf("%s",&name);
	gets(name);
	printf("\nenter physic marks:");
	scanf("%d",&s1);
	printf("\nenter chemistry marks:");
	scanf("%d",&s2);
	printf("\nenter maths marks:");
	scanf("%D",&s3);
	
	printf("\nroll no%d",rollno);
	printf("\n enter name:%s",name);
	total=s1+s2+s3;
	per=(float)total/3;
	printf("\ntotal:%d",total);
	printf("\npercentage:%.2f",per);
	printf("\n class:");
	
	if (per>=75)
	{
		printf("distinction");
		
	}
	else if(per>=60)
	{
		printf("first class");
		
	}
	else if(per>=50)
	{
		printf("second class");

	}
	else if (per>=40) 
	{
		printf("pass class");
		
	}
	else
	{
		printf("fail");
	}
}