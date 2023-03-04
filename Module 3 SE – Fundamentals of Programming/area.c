/*WAP to find area of circle, rectangle and triangle*/

#include<stdio.h>

#define pi 3.14
int main()
{
     //area of circle//
     float radius, area,l,b,h;
    
     printf("Enter Radius of Circle: ");
     scanf("%f", &radius);
     area = 3.14 * radius * radius;
     printf("Area of Circle = %.2f \n",area);
     
    //area of rectangle//
     printf("\n length of rectangle=");
     scanf("%f",&l);
     printf("\n breath of rectangle= ");
     scanf("%f",&b);
     area=l*b;
     printf("\n area of rectangle=%f",area);
     
     
     

//area of trinagle//


printf("\n enter base & height:");
scanf("%f%f",&b,&h);
area=(0.5*b*h);
printf("\n area of trinagle=%2f\n",area);

 
     return 0;
}
