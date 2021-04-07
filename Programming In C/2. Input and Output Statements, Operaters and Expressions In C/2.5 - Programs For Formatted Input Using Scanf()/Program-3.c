/*C Program to print sum and avarage of 6 subjects marks*/

#include <stdio.h>

int main()
{
	int s1,s2,s3,s4,s5,s6,total;
	float avg;

	printf("Enter 6 subject marks\n");

	scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);

	total=s1+s2+s3+s4+s5+s6;

	avg=total/6;

	printf("Sum of 6 subjects marks = %d\n",total);

	printf("Avarage = %f\n",avg);

	return 0;

/*
Written by....

	PAVAN KUMAR BANDARU

*/
	
}