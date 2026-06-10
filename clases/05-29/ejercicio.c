#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void borrarDatos(int suc[], int prod[], int tam);
void mostrarDatos(int suc[], int prod[], int tam);
int cargarDatos(int suc[], int prod[], int tam,  int cont);
void ordenar(int orden[], int secun[], int tam);

int main()
{
    int sucursal[TAM], producto[TAM];
    int cont=0,salir=0, auxSucursal=0, auxProducto=0;
    //char nombre[TAM][20];

    borrarDatos(sucursal, producto, TAM);

    cont =0;



    do{

        system("pause");
        system("cls");
        printf("1- Vaciar Datos\n");
        printf("2- Cargar Datos\n");
        printf("3- Listar Ordenados por sucursal\n");
        printf("4- Listar Ordenados por producto\n");
        printf("0- Fin\n");
        scanf("%d",&salir);

        switch(salir){
            case 1: borrarDatos(sucursal, producto, TAM);
                    cont =0;
                    break;
            case 2: cont = cargarDatos(sucursal, producto, TAM, cont);
                    break;
            case 3: ordenar(sucursal, producto, cont);
                    printf("\n\n MOSTRAMOS ORDENADOS POR SUCURSAL \n");
                    mostrarDatos(sucursal, producto, cont);
                    break;
            case 4: ordenar(producto, sucursal, cont);
                    printf("\n\n MOSTRAMOS ORDENADOS POR PRODUCTO \n");
                    mostrarDatos(sucursal, producto, cont);
                    break;
            case 0:break;
            default:
        }

    }while(salir != 0);

    return 0;
}
void borrarDatos(int suc[], int prod[], int tam){
    for(int i=0; i<tam; i++){
        suc[i]=0;
        prod[i]=0;
    }
}
void mostrarDatos(int suc[], int prod[], int tam){
     for(int i=0; i<tam; i++){
        printf("sucursal: %d, producto: %d\n",suc[i],prod[i]);
    }
}
int cargarDatos(int suc[], int prod[], int tam, int cont){
    int salir=0;
     do{
        printf("Ingrese Sucursal: ");
        scanf("%d",&suc[cont]);

        printf("Ingrese Producto: ");
        scanf("%d",&prod[cont]);

        cont++;

        printf("Desea Salir? \n presione 0 para salir\n");
        scanf("%d",&salir);

    }while(salir != 0);
    return cont;
}
void ordenar(int orden[], int secun[], int tam){
    int aux1, aux2;
    for(int i=0; i<tam; i++){ // las veces que voy a recorrer todo el vector
        for(int j=0; j<tam-1; j++){ // para comparar una posicion con la siguiente
            if(orden[j] > orden[j+1]){
                aux1 = orden[j];
                orden[j] = orden[j+1];
                orden[j+1] = aux1;

                aux2 = secun[j];
                secun[j] = secun[j+1];
                secun[j+1] = aux2;

            }
        }
    }
}