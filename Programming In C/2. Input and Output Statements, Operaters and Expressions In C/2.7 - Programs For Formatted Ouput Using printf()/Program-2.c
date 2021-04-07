/* C Program For Convert Fahrenheit to Centegrade Temperature */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	float f,c;

	printf("Enter The Temperature In Fahrenheit: ");
	scanf("%f",&f);
	c=((f-32)*5)/9;

	printf("Centigrade Temperature = %f",c);

	return 0;

/*
Written by....

	PAVAN KUMAR BANDARU

*/

}