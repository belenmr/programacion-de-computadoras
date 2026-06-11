# 35 - Relación entre punteros y vectores

En el lenguaje C, **el nombre de un vector es, en realidad, un puntero constante** que almacena la dirección de memoria de su primer elemento (la posición `[0]`).

```c
int vec[5] = {10, 20, 30, 40, 50};
int *pe;

pe = vec; // Es equivalente a hacer pe = &vec[0];
```

Después de igualar `pe = vec`, ambas variables apuntan exactamente al mismo lugar en la memoria RAM, lo que nos permite usar la notación de corchetes `pe[f]` con el puntero.

## Vectores como Parámetros de Funciones
Dado que el nombre del vector es un puntero, cuando pasamos un vector a una función no se crea una copia del contenido. Se pasa la dirección de memoria.

Por este motivo, las siguientes dos cabeceras de función son exactamente equivalentes para el compilador:

    Sintaxis clásica: `void cargar(float p[TAMANO])`

    Sintaxis de punteros: `void cargar(float *p)`

La segunda opción (float *p) es la más utilizada en entornos profesionales y de nivel avanzado (como las APIs del sistema operativo).

## Implementación
A continuación se presenta la resolución del problema de carga e impresión de un vector de float:
```c
#include <stdio.h>

#define TAMANO 5

// Recibe un puntero al primer elemento del vector
void cargar(float *p) {
    for (int f = 0; f < TAMANO; f++) {
        printf("Ingrese elemento %i: ", f + 1);
        // p[f] accede directamente a la memoria del vector original
        scanf("%f", &p[f]); 
    }
    // Limpieza de buffer estándar para evitar problemas con lecturas posteriores
    while (getchar() != '\n'); 
}

// Recibe el puntero para lectura
void imprimir(float *p) {
    printf("\n--- Elementos del Vector ---\n");
    for (int f = 0; f < TAMANO; f++) {
        printf("%0.2f ", p[f]);
    }
    printf("\n");
}

int main() {
    float vec[TAMANO];
    
    // Pasamos el vector (que ya es una dirección de memoria)
    cargar(vec); 
    imprimir(vec);
    
    return 0;
}
```


---
## Ejercitación
### Problema 151
Confeccionar un programa que permita cargar e imprimir un vector de 5 elementos de tipo float. Utilizar la sintaxis de punteros en los parámetros de las funciones

### Problema 152
Se define en la main un vector de tipo char de 40 caracteres.
Implementar las funciones de carga e impresión de dicho vector utilizando la sintaxis de punteros cuando definamos los parámetros de las funciones. 
