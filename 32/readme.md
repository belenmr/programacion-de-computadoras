# 32 - Variables de tipo Puntero
Los punteros son variables fundamentales en C. Su función no es guardar un valor (como un número o un texto), sino guardar una **dirección de memoria**.

Los punteros permiten:
* Modificar variables dentro de funciones (paso por referencia).
* Gestionar memoria dinámica (pedir memoria mientras el programa corre).
* Optimizar el rendimiento, evitando copiar grandes estructuras de datos de un lugar a otro.

## Definición y Sintaxis
Para declarar un puntero, utilizamos el asterisco (`*`) antes del nombre de la variable. El tipo de dato indica a qué tipo de valor está apuntando.

```c
int *pe;    // Puntero a un entero
float *pf;  // Puntero a un flotante
```

## Operadores clave: `&` y `*`
Para trabajar con punteros, debemos dominar estos dos símbolos:
* `&` (*Dirección*): Se usa para obtener la dirección de memoria de una variable.
* `*` (*Contenido/Referencia*): Se usa para acceder al valor que está guardado en la dirección que tiene el puntero.

### Ejemplo
```c
int valor1 = 10;
int *pe;

pe = &valor1; // pe ahora guarda la dirección de memoria de valor1

printf("Valor1: %i\n", valor1);           // Imprime 10
printf("Direccion en pe: %p\n", pe);      // Imprime algo como 0x7ffd...
printf("Lo apuntado por pe: %i\n", *pe);  // Imprime 10 (accede al contenido)
```



---
## Ejercitación

### Problema 140
Definir dos variables enteras y almacenar valores por asignación. Definir una variable puntero a entero y guardar sucesivamente las direcciones de dichas dos variables y acceder a sus valores.


### Problema 141
Definir dos variables enteras y no inicializarlas.  
Definir una variable puntero a entero, hacer que apunte sucesivamente a las dos variables enteras definidas previamente y cargue sus contenidos.  
Imprimir las dos variables enteras.


### Problema 142
Se tienen el siguiente programa:
```c
#include<stdio.h>
#include<conio.h>

int main()
{
    char c1='A';
    char c2='B';
    char *pc;
    pc=&c1;
    printf("%c\n",c1); //se imprime: ?
    *pc='a';
    printf("%c\n",c1); //se imprime: ?
    c1='Z';
    printf("%c\n",*pc); //se imprime: ?
    pc=&c2;
    printf("%c\n",*pc); //se imprime: ?
    getch();
    return 0;
}
```
Indicar que valor se imprime en cada llamada a printf. 


### Problema 143
Se tienen el siguiente programa:
```c
#include<stdio.h>
#include<conio.h>

int main()
{
    int f;
    int *pe;
    pe=&f;
    for(*pe=1;*pe<=10;*pe=*pe+1)
    {
        printf("%i\n",f); //se imprime ?
    }
    getch();
    return 0;
}
```
Indicar que valor se imprime en cada llamada a printf. 


### Problema 144
Se tienen el siguiente programa:
```c
#include <stdio.h>
#include<conio.h>

int main()
{
  float z1,z2;
  float *pf;
  pf=&z1;
  *pf=10.2;
  pf=&z2;
  *pf=20.90;
  printf("%0.2f %0.2f",z1,z2); // Se imprime ?
  getch();
  return 0;
}
```
Indicar que valor se imprime en la llamada a printf. 