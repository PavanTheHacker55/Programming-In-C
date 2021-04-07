/*C program for find the Area Of a Triangle*/

#include <stdio.h>

int main()
{
	int base,height;
	float Area;

	printf("Enter the base and height values: ");

	scanf("%d%d",&base,&height);

	Area = 0.5*base*height;

	printf("Area of Triangle = %f",Area);

	return 0;

/*
Written by....

	PAVAN KUMAR BANDARU

*/
}