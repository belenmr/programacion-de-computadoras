# 20 - Vectores (mayor y menor elemento)
Encontrar el valor máximo o mínimo dentro de un vector es un algoritmo muy común. No solo nos interesa saber **cuál** es el valor, sino también **dónde** está (su índice o posición) para poder operar con él más tarde.

## Lógica del algoritmo
Para encontrar un extremo (mayor o menor), aplicamos una estrategia de comparación secuencial:

1.  **Hipótesis inicial:** Asumimos que el primer elemento (`vec[0]`) es nuestro ganador (el mayor o el menor).
2.  **Recorrido:** Comparamos nuestra variable auxiliar contra el resto de los elementos del vector, desde el índice `1` hasta el final.
3.  **Actualización:** Si encontramos un valor que rompe nuestra hipótesis (por ejemplo, un número más grande que nuestro "mayor"), actualizamos la variable con el nuevo valor y guardamos su índice.


## Complejidad algorítmica: $O(n)$
Decimos que este algoritmo tiene una complejidad de **$O(n)$** (u orden Lineal). Es decir, que el tiempo de ejecución crece en proporción directa a la cantidad de datos.  
Si el vector tiene `n` elementos, el programa realizará `n` comparaciones. Es un algoritmo eficiente porque solo requiere una única pasada por el vector para darnos el resultado.


## Implementación 
En C, la única diferencia entre buscar el mayor o el menor es el sentido del operador de comparación (`>` o `<`).

### Función para buscar el mayor
```c
void buscarMayor(int vec[5]) {
    int mayor = vec[0]; // Hipótesis inicial
    int posicion = 0;
    
    for(int i = 1; i < 5; i++) {
        if (vec[i] > mayor) { // ¿Es el actual más grande que nuestro mayor guardado?
            mayor = vec[i];
            posicion = i;
        }
    }
    printf("El mayor es %i y esta en la posicion %i\n", mayor, posicion);
}
```

### Función para buscar el menor
```c
void buscarMenor(int vec[5]) {
    int menor = vec[0]; // Hipótesis inicial
    int posicion = 0;
    
    for(int i = 1; i < 5; i++) {
        if (vec[i] < menor) { // ¿Es el actual mas chico que nuestro menor guardado?
            menor = vec[i];
            posicion = i;
        }
    }
    printf("El menor es %i y esta en la posicion %i\n", menor, posicion);
}
```



---
## Ejercitación

### Problema 109
Confeccionar un programa que defina en la main un vector de 5 elementos de tipo entero. Cargar e imprimir el mayor elemento y su posción.


### Problema 110
Cargar un vector de 5 elementos enteros. Imprimir el menor y un mensaje si se repite dentro del vector. 