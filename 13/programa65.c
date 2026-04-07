#include <stdio.h>

int main()
{
    char letra;

    for(letra='A'; letra <='Z'; letra++)
    {
        printf("%c", letra);
        printf("-");
    }
	
    printf("\n\n");

    for(letra='a'; letra<='z'; letra++)
    {
        printf("%c", letra);
        printf("-");
    }
	
	return 0;
}