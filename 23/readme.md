# 23 - Estructura de datos tipo matriz (elementos char)
Las matrices de tipo `char` se utilizan para almacenar un **conjunto de caracteres** (nombres, artículos, países, etc.). En esta estructura, cada fila de la matriz representa un string.


## Definición y concepto
Para guardar 5 nombres de hasta 40 caracteres (más el terminador `\0`), definimos:

```c
char nombres[5][41];
```

* **Subíndice único:** A diferencia de las matrices numéricas, para cargar o imprimir un nombre completo solo usamos el primer subíndice: `nombres[f]`.
* **Terminador:** Siempre reservamos un espacio extra para el `\0` (carácter nulo).


## Herramientas de la librería `<string.h>`
Como no podemos usar operadores como `==`, `>` o `=`, necesitamos funciones específicas:

| Función | Uso | Ejemplo |
| :--- | :--- | :--- |
| **`gets(mat[f])`** | Cargar una fila desde teclado. | `gets(nombres[0]);` |
| **`strcmp(s1, s2)`** | Comparar cadenas. | `if (strcmp(nom, nombres[f]) == 0)` |
| **`strcpy(dest, orig)`** | Copiar el contenido de una cadena a otra. | `strcpy(aux, nombres[f]);` |

**Nota:** `strcmp` devuelve `0` si son iguales; si devuelve un valor mayor a `0`, `s1` es alfabéticamente mayor a `s2` (orden A-Z).

## Búsqueda y consultas
Para saber si un nombre existe en la matriz, usamos una variable **"existe"** que actúa como bandera (0 o 1).

```c
int existe = 0;
for(int f = 0; f < 5; f++) {
    if (strcmp(nombreBuscado, nombres[f]) == 0) {
        existe = 1;
    }
}
```


## Ordenamiento alfabético
Para ordenar las filas de la matriz, aplicamos el **método de burbuja**, pero reemplazando los operadores lógicos por funciones de string:

```c
// Lógica de intercambio de filas de texto
if (strcmp(nombres[f], nombres[f+1]) > 0) {
    strcpy(aux, nombres[f]);
    strcpy(nombres[f], nombres[f+1]);
    strcpy(nombres[f+1], aux);
}
```



---
## Ejercitación

### Problema 119
Confeccionar un programa que permita ingresar en una matriz de tipo char los nombres de artículos para la venta. Hacer luego una función que imprima los nombres de dichos artículos.


### Problema 120
Confeccionar un programa que permita:
1. Almacenar en una matriz los datos de 5 personas.
2. Imprimir los nombres.
3. Ingresar otro nombre y verificar si se encuentra almacenado en la matriz.


### Problema 121
Confeccionar un programa que permita:
1. Almacenar en una matriz los datos de 5 personas.
2. Imprimir los nombres.
3. Ordenar alfabéticamente los nombres.


### Problema 122
Confeccionar un programa que permita :
1. Almacenar en una matriz los datos de 5 personas. 
2. Imprimir el nombre alfabéticamente menor.