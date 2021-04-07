/* C Programm to Calculate the Area of Triangle given Three Sides*/

#include <stdio.h>
#include <math.h>

int main()
{
	
	float a,b,c,s,area;

	printf("Enter Three Sides Of A Triangle:- \n");

	scanf("%d%d%d",&a,&b,&c);

	s=(a+b+c)/2;
	
	area=sqrt(s*(s-a)*(s-b)*(s-c));

	printf("Area of the Triangle is = %f\n",area);

	return 0;


/*
Written by....

	PAVAN KUMAR BANDARU

*/

}