# 15 - Funciones que facilitan el trabajo con cadenas de caracteres (string.h)
Para facilitar la administración de cadenas de caracteres, el lenguaje C proporciona la librería `<string.h>`, la cual incluye funciones predefinidas que nos evitan tener que programar algoritmos complejos manualmente.

## Función `strlen` (String Length)
Retorna un valor entero que representa la cantidad de caracteres almacenados en la cadena (sin contar el terminador `\0`).  
Nos evita implementar un ciclo `while` con un contador manual.

#### Sintaxis 
`int cant = strlen(vector);`


## Función `strcmp` (String Compare)
En C no se pueden usar los operadores relacionales (`==`, `>`, `<`, etc.) para comparar cadenas directamente. Para ello, usamos `strcmp`.

#### Sintaxis 
`int resultado = strcmp(cadena1, cadena2);`

### Valores de retorno:
| Resultado | Significado |
| :---: | :--- |
| 0 | Las cadenas son exactamente iguales. |
| > 0 | `cadena1` es mayor alfabéticamente que `cadena2`. |
| < 0 | `cadena2` es mayor alfabéticamente que `cadena1`. |

### Funcionamiento Interno:
La función resta los valores ASCII de cada posición. En cuanto encuentra una diferencia, devuelve el resultado de esa resta.
#### Ejemplo
Comparando "Bien" (B=66, i=105) y "Bueno" (B=66, u=117).
1. Posición [0]: 66 - 66 = 0 (Continúa).
2. Posición [1]: 105 - 117 = **-12** (Se detiene y retorna -12).


## Función `strcpy` (String Copy)
Dado que no existe el operador de asignación (`=`) para vectores, utilizamos `strcpy` para copiar el contenido de una cadena en otra.
#### Sintaxis
`strcpy(destino, origen);`

**Nota:** El contenido previo de `destino` se borra y es reemplazado por el de `origen`.

**Vaciar un String**: Para dejar una cadena vacía, podemos usar `strcpy(cadena, "");` o, de forma más eficiente: `cadena[0] = '\0';`.

## Función `strcat` (String Concatenate)
Permite añadir o agregar una cadena al final de otra ya existente.
#### Sintaxis
`strcat(cadena1, cadena2);`  

**Requisito:** `cadena1` debe estar inicializada y tener suficiente espacio disponible en su tamaño de vector para recibir los nuevos caracteres.


### Ejemplo
```c
#include <stdio.h>
#include <string.h>

int main() {
    char nombre1[31] = "Belen";
    char nombre2[31] = "Medina";
    char nombreCompleto[62];

    // Copiamos el primer nombre
    strcpy(nombreCompleto, nombre1);
    
    // Agregamos un espacio y el segundo nombre
    strcat(nombreCompleto, " ");
    strcat(nombreCompleto, nombre2);

    printf("Nombre completo: %s\n", nombreCompleto);
    printf("Longitud total: %i", strlen(nombreCompleto));

    return 0;
}
```

## Normalización de Cadenas (Mayúsculas/Minúsculas)
Para comparar nombres alfabéticamente de forma correcta, debemos "normalizar" las cadenas. De lo contrario, las mayúsculas siempre aparecerán antes que las minúsculas debido a su valor en la tabla ASCII.

### Uso de `tolower` y `toupper`
Para usar estas funciones debemos incluir la librería `<ctype.h>`. Estas funciones actúan sobre un único carácter, por lo que debemos usarlas dentro de un ciclo.

* **`tolower(caracter)`**: Convierte un carácter a minúscula.
* **`toupper(caracter)`**: Convierte un carácter a mayúscula.

#### Ejemplo
Pasar un nombre a minúsculas para comparar
```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nombre1[31];
    int i = 0;

    printf("Ingrese un nombre: ");
    gets(nombre1);

    // Recorremos la cadena y convertimos caracter por caracter
    while (nombre1[i] != '\0') {
        nombre1[i] = tolower(nombre1[i]);
        i++;
    }

    printf("Nombre normalizado: %s", nombre1);
    return 0;
}
```


---
## Ejercitación

### Problema 76
Ingresar por teclado una palabra. Mostrar luego por pantalla la cantidad de letras que tiene.


### Problema 77
Ingresar dos nombres por teclado. Mostrar un mensaje si son iguales y sino mostrar el que es mayor alfabéticamente.


### Problema 78
Cargar por teclado dos nombres de personas que tengan distinta cantidad de caracteres. Almacenar en un tercer vector de caracteres el nombre que tenga más caracteres. Luego imprimir dicho vector.


### Problema 79
Cargar por teclado en dos variables de tipo string el nombre y el apellido de una persona. Definir un tercer string y guardar la concatenación del nombre y apellido.


### Problema 80
Confeccionar un programa que pida ingresar el nombre de usuario y clave en dos string. Mostrar un mensaje "Correcto" si se ingresa como clave la cadena "abc123". 


### Problema 81
Ingresar por teclado dos nombres de personas y luego mostrarlas ordenados alfabéticamente. 


### Problema 82
Ingresar por teclado dos nombres de personas y luego mostrarlas primero el que tiene más caracteres y luego el que tiene menos. 


### Problema 83
Cargar tres nombres por teclado. Generar un cuarto string que almacene los tres nombres ingresados por teclado en orden alfabético separados por una coma. 