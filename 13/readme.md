# 13 - Tipo de dato char
En el lenguaje C, el tipo de dato `char` representa un solo caracter. Sin embargo, técnicamente es una variante de los números enteros que permite almacenar valores en un rango reducido.  
Una variable de tipo `char` ocupa 1 byte (8 bits) de memoria. Esto le permite almacenar un valor entero comprendido entre -128 y 127.  
La principal característica del `char` es su relación directa con la Tabla ASCII. Si almacenamos un valor entero positivo, el sistema puede interpretarlo y mostrarlo como el caracter asociado a ese número.

**Ejemplo:** Si asignamos el valor `65` a una variable `char`, al imprimirla como caracter obtendremos una `'A'`.

## Tabla ASCII
Los valores enteros están mapeados a caracteres o funciones específicas. A continuación, los registros más relevantes:

| Valor Decimal | caracter / Función | Descripción |
| :---: | :--- | :--- |
| **0** | `NUL` | Caracter nulo (Indica el fin de una cadena) |
| **9** | `TAB` | Tabulación horizontal |
| **10** | `LF` | Salto de línea (`\n`) |
| **32** | `Espacio` | Tecla espaciadora |
| **48 - 57** | `0 - 9` | Dígitos numéricos |
| **65 - 90** | `A - Z` | Abecedario en Mayúsculas |
| **97 - 122** | `a - z` | Abecedario en Minúsculas |


## Diferencia entre Tipo de Dato y Formato
La diferencia entre ver un número o una letra depende del **especificador de formato** que usemos en la función `printf`:
* `%c`: Muestra el caracter asociado según la tabla ASCII.
* `%i` o `%d`: Muestra el valor entero almacenado.


## Sintaxis
Es fundamental distinguir entre un caracter único y una cadena de caracteres (string). El compilador de C utiliza las comillas para determinar el tipo de dato:

* **Caracter único (`char`):** Se define con **comillas simples** (`' '`).
  * `char letra = 'A';`

* **Cadena de caracteres (`char[]`):** Se define con **comillas dobles** (`" "`).
  * `char letras[2] = "A"` es en realidad un conjunto que contiene la `'A'` y el carácter nulo `\0`.

**El "truco" del espacio en scanf:**
Al leer un `char` con `scanf`, es una buena práctica dejar un espacio antes del porcentaje: `scanf(" %c", &variable);`. 
Esto le indica a C que debe ignorar cualquier "basura" en el búfer de entrada (como el `Enter` de una lectura anterior).


## Uso de `char` en estructuras repetitivas
Dado que un `char` es un número, podemos utilizarlo en ciclos `for` e incrementarlo con el operador `++`. Esto es extremadamente útil para recorrer rangos alfabéticos de forma legible.

#### Ejemplo: Impresión del abecedario (Mayúsculas y Minúsculas)
Por legibilidad, es preferible iniciar la variable con el literal `'A'` en lugar de su código decimal `65`.

```c
#include <stdio.h>

int main() 
{
    char letra;

    // Recorrido de Mayúsculas
    for(letra = 'A'; letra <= 'Z'; letra++) 
    {
        printf("%c-", letra);
    }

    printf("\n\n");

    // Recorrido de Minúsculas
    for(letra = 'a'; letra <= 'z'; letra++) 
    {
        printf("%c-", letra);
    }

    return 0;
}
```


---
## Ejercitación

### Problema 63
Definir tres variables de tipo char y cargar dos por asignación y la tercera por teclado. Imprimir los valores de las mismas.


### Problema 64
Confeccionar un programa que permita la carga de valores enteros por teclado. Luego de ingresar el valor mostrar un mensaje por pantalla que pida confirmar al usuario si desea cargar otro valor ingresando los caracteres 's' o 'n'. Mostrar al final la suma de los valores ingresados.


### Problema 65
Mostrar el abecedario de la 'A' a la 'Z' primero en mayúsculas y luego en minúsculas. Utilizar una variable de tipo char dentro de un for.


### Problema 66
Confeccionar un programa que solicite la carga de dos valores enteros por teclado. Luego solicitar que se cargue alguno de los caracteres: '+', '-', '*' o '/'.  
Según el caracter ingresado proceder a mostrar la sumar, resta, multiplicación o división de los valores ingresados.


### Problema 67
Realizar un programa que solicite la carga de la edad y sexo de dos personas. Luego mostrar la edad y sexo de la persona mayor. Para almacenar el sexo definir variables de tipo char donde se almacenará el caracter 'm' o 'f' indicando si es del sexo masculino o femenino. 


### Problema 68
Realizar la carga de valores enteros por teclado y sumarlos. Cada vez que se carga un valor pedir al operador que ingrese si quiere cargar otro valor ingresando una 's' o 'S' (minúscula o mayúscula) 