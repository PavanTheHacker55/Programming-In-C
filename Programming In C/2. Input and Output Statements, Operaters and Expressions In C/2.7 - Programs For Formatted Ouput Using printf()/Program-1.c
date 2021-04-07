/* C program for Calculate the Real Roots Of Quadritic Equation */

#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c;
	float sum,total;

	printf("Enter The a,b and c Values: ");
	scanf("%d%d%d",&a,&b,&c);

	sum = sqrt((b*b)-4*a*c);
	total=(-b+sum)/2*a;

	printf("The Real Roots Of Q.E Is = %f\n",total);	

	return 0;

/*
Written by....

	PAVAN KUMAR BANDARU

*/

}