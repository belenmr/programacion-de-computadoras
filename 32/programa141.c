#include <stdio.h>

int main ()
{
	int num1, num2;
	int *pe;

	pe = &num1;
	*pe = 100;

	pe = &num2;
	*pe = 200;

	printf("Primer variable entera: %i\n", num1);
	printf("Segunda variable entera: %i\n", num2);
	
	return 0;
}