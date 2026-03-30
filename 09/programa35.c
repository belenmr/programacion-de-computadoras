#include<stdio.h>

int main ()
{
    int num = 8;

    while (num <= 500)
    {
        printf("%i - ", num);
        num = num + 8;		
    }

	return 0;
}