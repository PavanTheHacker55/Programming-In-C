/* C Program to Generate The ASCII Values*/

#include <stdio.h>

int main()
{
	int i=65,n;

	printf("Enter n Value: ");

	scanf("%d",&n);

	while(i<=n)
	{
		printf("%d-%c\n",i,i);

		i++;
	}

	return 0;

/*
Written by....

	PAVAN KUMAR BANDARU

*/

}