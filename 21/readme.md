# 21 - Vectores (ordenamiento)
Ordenar un vector significa reubicar sus elementos para que sigan una secuencia lógica (ascendente o descendente). En C, el método más sencillo de implementar es el **Ordenamiento Burbuja**.

## El Concepto de Intercambio (Swap)
Para intercambiar dos valores en un vector, no podemos simplemente asignar uno al otro (ej: `vec[0] = vec[1]`), porque perderíamos el valor original de `vec[0]`. Necesitamos una **variable auxiliar**.

```c
int aux = vec[f];
vec[f] = vec[f + 1];
vec[f + 1] = aux;
```

## Algoritmo de ordenamiento burbuja
El nombre Bubble Sort (Ordenamiento Burbuja) proviene de la forma en que los valores mayores se desplazan gradualmente hacia el final del vector en cada iteración. En cada 'pasada', el elemento más grande disponible va intercambiando lugares con sus vecinos hasta quedar anclado en su posición definitiva, tal como una burbuja de aire sube hasta la superficie del agua.

### ¿Por qué dos bucles `for`?
1.  **Bucle Interno (f):** Compara elementos adyacentes y realiza el intercambio. Al terminar una vuelta completa, el valor más grande queda "anclado" al final.
2.  **Bucle Externo (k):** Controla cuántas veces debemos repetir el proceso. Si tenemos $N$ elementos, necesitamos repetir el proceso $N-1$ veces para asegurar que todos queden en su lugar.


## Optimización del Algoritmo
Un algoritmo eficiente no debería comparar elementos que ya sabemos que están ordenados. 
* En la primera pasada (`k=0`), el mayor queda en la última posición.
* En la segunda pasada (`k=1`), ya no hace falta comparar el último elemento.
* **Fórmula optimizada:** `for (f = 0; f < (N - 1) - k; f++)`

## Implementación en C
```c
void ordenar(int vec[5]) {
    int aux;
    for (int k = 0; k < 4; k++) { // Bucle externo
        for (int f = 0; f < 4 - k; f++) { // Bucle interno optimizado
            if (vec[f] > vec[f + 1]) {
                aux = vec[f];
                vec[f] = vec[f + 1];
                vec[f + 1] = aux;
            }
        }
    }
}
```

**Nota:** El Método de la Burbuja tiene una complejidad de **$O(n^2)$**. Esto significa que es excelente para aprender y para vectores pequeños, pero en sistemas de alto rendimiento con millones de datos, se prefieren algoritmos más rápidos como *QuickSort* o *MergeSort*.



---
## Ejercitación

### Problema 111
Se debe crear un vector donde almacenar 5 sueldos. Ordenar el vector sueldos de menor a mayor.


### Problema 112
Cargar un vector de 5 elementos enteros. Ordenarlo de mayor a menor y mostrarlo por pantalla, luego ordenar de menor a mayor e imprimir nuevamente. 