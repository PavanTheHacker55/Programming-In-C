/* C Program to check the given number is a palindrome or not*/

#include <stdio.h>

int main()
{
	int n,d,r_no=0,on;

	printf("Enter n value: ");

	scanf("%d",&n);

	on=n;

	while(n != 0)
	{
		d=n%10;

		r_no=d+(r_no*10);

		n=n/10;
	}

	if (r_no==on)
	{
		printf("%d is Palindrome",on);
	}
	else{

		printf("%d is not Palindrome",on);
	}

	return 0;

/*
Written by....

	PAVAN KUMAR BANDARU

*/

}