#include <stdio.h>

int main ()
{
	int producto = 0;
	printf("--- Tabla de multiplicar del 5 ---\n");

	for (int i = 1; i <= 10; i++)
	{
		producto = 5 * i;
		printf("5 x %i = %i\n", i, producto);  
	}     

	return 0;
}