#include <stdio.h>

void incrementar (int *p)
{
	(*p)++; // o sea: *p = p + 1;
}

int main ()
{
	int x = 0;
	printf("%i\n",x); // Imprime 0
    
	incrementar(&x);
    printf("%i\n",x); // Imprime 1
    
	incrementar(&x);
    printf("%i\n",x); // Imprime 2
    
	incrementar(&x);
    printf("%i\n",x); // Imprime 3
	
	return 0;
}