# 22 - Estructura de datos tipo matriz (elementos int y float)

Una matriz es una estructura que almacena un conjunto de datos del mismo tipo bajo un único nombre, pero organizados en **filas** y **columnas**.

## Definición y Acceso
Para definir una matriz en C, indicamos primero la cantidad de filas y luego la de columnas entre corchetes independientes.

```c
int matriz[filas][columnas];

int mat[3][5]; // Matriz de 3 filas y 5 columnas (15 elementos en total)
```

* **Índices:** Al igual que los vectores, comienzan en **0**.
* **Coordenadas:** Para acceder a un elemento, necesitamos ambos subíndices: `mat[fila][columna]`. Por ejemplo, `mat[1][4]` accede a la segunda fila, quinta columna.

## Recorrido mediante For Anidado
La forma más común de procesar una matriz es mediante dos bucles `for`:
* El **for externo** controla las filas.
* El **for interno** controla las columnas.

```c
for(int f = 0; f < 3; f++) {
    for(int c = 0; c < 5; c++) {
        printf("%i ", mat[f][c]);
    }
    printf("\n"); // Salto de línea al terminar cada fila
}
```


## Casos Especiales de Recorrido
No siempre necesitamos recorrer toda la matriz. Dependiendo de lo que busquemos, la lógica cambia:

| Objetivo | Estrategia | Ejemplo de subíndice |
| :--- | :--- | :--- |
| **Fila específica** | Un solo `for` que recorre columnas. Fila fija. | `mat[0][c]` |
| **Columna específica** | Un solo `for` que recorre filas. Columna fija. | `mat[f][0]` |
| **Diagonal Principal** | Un solo `for`. El índice de fila y columna es el mismo. | `mat[k][k]` |


## Pasaje de Matrices a Funciones
Al igual que los vectores, las matrices se pasan por **referencia** (puntero a la dirección inicial). Sin embargo, en C es obligatorio especificar el tamaño de las columnas en el parámetro para que el compilador sepa cómo saltar de una fila a otra en la memoria.

```c
void imprimir(int mat[3][5]) { ... }
```



---
## Ejercitación

### Problema 113
Crear una matriz de 3 filas por 5 columnas con elementos de tipo int, cargar sus componentes y luego imprimirlas.


### Problema 114
Crear y cargar una matriz de 4 filas por 4 columnas. Imprimir la diagonal principal.

              x    -    -    -
              -    x    -    -
              -    -    x    -
              -    -    -    x


### Problema 115
Crear y cargar una matriz de 3 filas por 4 columnas. Imprimir la primer fila. Imprimir la última fila e imprimir la primera columna.


### Problema 116
Crear una matriz de 2 filas y 5 columnas. Realizar la carga de componentes por columna (es decir primero ingresar toda la primer columna, luego la segunda columna y así sucesivamente) Imprimir luego la matriz. 


### Problema 117
Crear una matriz de 3x4. Realizar la carga y luego imprimir el elemento mayor. 


### Problema 118
Definir una matriz de 2 filas y 5 columnas. Realizar su carga e impresión.
Intercambiar los elementos de la primera fila con la segunda y volver a imprimir la matriz. 