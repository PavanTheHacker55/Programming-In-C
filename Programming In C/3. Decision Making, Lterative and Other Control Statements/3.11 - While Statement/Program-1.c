/* C Program to print sum of n natural numbers using whole loop */

#include <stdio.h>

int main()
{
	int i=1,n,sum=0;

	printf("Enter n Value: ");

	scanf("%d",&n);

	while(i<=n)
	{
		sum=sum+i;
		
		i=i+1;
	}

	printf("%d\n",sum);

	return 0;

/*
Written by....

	PAVAN KUMAR BANDARU

*/
}