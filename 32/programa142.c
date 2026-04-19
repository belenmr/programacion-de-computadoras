#include <stdio.h>

int main ()
{
	char c1 = 'A';
    char c2 = 'B';
    char *pc;

    pc = &c1;
    printf("%c\n", c1); // Se imprime: A

    *pc = 'a';
    printf("%c\n", c1); // Se imprime: a

    c1 = 'Z';
    printf("%c\n", *pc); // Se imprime: Z

    pc = &c2;
    printf("%c\n", *pc); // Se imprime: B

	return 0;
}