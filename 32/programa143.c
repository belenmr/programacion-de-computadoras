#include <stdio.h>

int main ()
{
	int f;
    int *pe;
    pe = &f;

    for(*pe = 1; *pe <= 10; *pe = *pe + 1)
    {
        printf("%i\n", f);
		// Se imprime: 1
		// Se imprime: 2
		// Se imprime: 3
		// Se imprime: 4
		// Se imprime: 5
		// Se imprime: 6
		// Se imprime: 7
		// Se imprime: 8
		// Se imprime: 9
		// Se imprime: 10
    }

	return 0;
}