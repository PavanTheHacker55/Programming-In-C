/* My Own Program to Find The R.R.Q.E*/

#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,sum,root1,root2,real,img;

	printf("Enter The a,b and c Values: ");
	scanf("%d%d%d",&a,&b,&c);

	sum = b*b-4*a*c;

	if (sum>0)
	{
			root1 = (-b+sqrt(sum))/(2*a);
			root2 = (-b+sqrt(sum))/(2*a);
			printf("\nThe Value of Root1=%.2f and Value of Root2 = %.2f",root1,root2);
	}

	else if(sum==0)
	{
			root1 = root2=-b/(2*a);
			printf("\nThe Value of Root1=%.2f and Value of Root2 = %.2f",root1,root2);
	}

	else
	{

			real=-b/(2*a);
			img=sqrt(-sum)/(2*a);
			printf("The Value of Root1 = %.2f+%.2fi and Root2 = %.2f-%.2fi",real,img,real,img);
	}

	return 0;

/*
Written by....

	PAVAN KUMAR BANDARU

*/

}