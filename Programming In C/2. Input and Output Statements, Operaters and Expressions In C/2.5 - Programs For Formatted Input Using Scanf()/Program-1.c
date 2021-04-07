/*C Program For Calulateting The Simple Interest*/

#include <stdio.h>

int main()
{
	int p,t,r;

	float si;

	printf("Enter Price, Time and Rate of Interest: ");
	
	scanf("%d%d%d",&p,&t,&r)

	si = p*t*r/100;

	printf("Simple Interest = %f",si);

	return 0;

/*
Written by....

	PAVAN KUMAR BANDARU

*/
}