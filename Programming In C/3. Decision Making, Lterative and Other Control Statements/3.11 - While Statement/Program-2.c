/* C Program to print the sum of digits of the given number*/

#include<stdio.h>

int main()
{
	int n,r,sum=0;

	printf("Enter n Value: ");

	scanf("%d",&n);

	while(n!=0)
	{
		r=n%10;

		sum=sum+r;

		n=n/10;
	}

	printf("The sum of digits:- %d",sum);

	return 0;

/*
Written by....

	PAVAN KUMAR BANDARU

*/

}