# 25 - Vectores y matrices paralelas (ordenamiento)
Cuando trabajamos con estructuras paralelas, el ordenamiento requiere una sincronización entre ambas estructuras.

## Intercambio sincronizado
Si la condición de ordenamiento se cumple y decidimos mover un elemento en la estructura A, **obligatoriamente** debemos mover el elemento en la misma posición de la estructura B.  
No es solo ordenar, sino mantener el "vínculo" entre el elemento de la estructura A y el elemento asociado de la estructura B.

## Ejemplo
Si ordenamos por Nota (Mayor a Menor), aunque el `if` solo pregunta por la nota, el proceso de intercambio se realiza en ambas estructuras.

```c
if (notas[f] < notas[f + 1])
{
    // 1. Intercambio de notas 
    int auxNota = notas[f];
    notas[f] = notas[f + 1];
    notas[f + 1] = auxNota;

    // 2. Intercambio de nombres 
    char auxNombre[41];
    strcpy(auxNombre, nombres[f]);
    strcpy(nombres[f], nombres[f + 1]);
    strcpy(nombres[f + 1], auxNombre);
}
```



---
## Ejercitación

### Problema 126
Confeccionar un programa que permita cargar los nombres de 5 alumnos y sus notas respectivas. Luego ordenar las notas de mayor a menor. Imprimir las notas y los nombres de los alumnos.


## Problema 127
Cargar en una matriz los nombres de 5 países y en un vector paralelo la cantidad de habitantes del mismo. Ordenar alfabéticamente e imprimir los resultados. Por último ordenar con respecto a la cantidad de habitantes (de mayor a menor) e imprimir nuevamente. 