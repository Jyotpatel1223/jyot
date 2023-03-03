

void main()
{
	struct employee
	
	{
	
	
		int eid;
		char name[20];
		float salary;
};
	
	 void main()
	 {
	 	struct employee e1;
	 	printf("\n enter employee id:");
	 	scanf("%d",&e1.eid);
	 	printf("\nenter name");
	 	scanf("%s",&e1.name);
	 	printf("\nENTER SALARY:");
	 	scanf("%f",&e1.salary);
	 	 
	 	 printf("\n employee id:%d",e1.eid);
	 	 printf("\n employee name:%S",e1.name);
	 	 printf("\nemployee salary:%.2f",e1.salary);
	 }
}