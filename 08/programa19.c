#include<stdio.h>

int main()
{
    int dd,mm,aa;
    printf("Ingrese numero de dia: ");
    scanf("%i",&dd);
    printf("Ingrese numero de mes: ");
    scanf("%i",&mm);
    printf("Ingrese numero de año: ");
    scanf("%i",&aa);
    if (mm==1 || mm==2 || mm==3)
    {
        printf("Corresponde al primer trimestre");
    }
    return 0;
}