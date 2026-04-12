# 24 - Vectores y matrices paralelas
Este concepto se aplica cuando existe una **relación lógica** entre los datos almacenados en diferentes estructuras, compartiendo el mismo **índice** (posición).

La relación paralela no es una característica técnica del lenguaje C, sino una **decisión de diseño** del programador. Decimos que dos estructuras son paralelas cuando la información en el índice `i` de una está relacionada con la información en el índice `i` de la otra.

**Integridad de Datos:** Si alguna vez necesitamos ordenar una de las estructuras, estamos obligados a mover también los elementos de la otra estructura.

### Ejemplo
Si tenemos una matriz de caracteres de 5 filas y 30 columnas en la que se almacenan los nombres de personas y un vector de 5 enteros en la que se almacenan las edades de dichas personas, decimos que la matriz nombres es paralelo al vector edades si en la componente 0 del vector y la fila 0 de la matriz se almacena información relacionada a una persona. Es decir hay una relación entre cada componente del vector y la fila de la matriz.  


## El Desafío del Buffer
Cuando mezclamos `scanf` (para números) con `gets` (para texto), ocurre lo siguiente:
1.  El `scanf` lee el número pero deja el "Enter" (`\n`) en la memoria (**buffer**).
2.  El siguiente `gets` lee ese "Enter" residual y salta la carga del nombre.

**Solución:** Usar `fflush(stdin)` después de un `scanf` para limpiar la memoria antes de leer un string.

**Cuando falla `fflush(stdin)`:** Usar `getchar()` después de un `scanf`. `getchar()` captura el carácter de salto de línea (`\n`) residual

## Implementación

Para procesar estas estructuras, siempre usamos el mismo bucle `for`, ya que el índice `f` nos da acceso a ambos datos simultáneamente.

```c
#include <stdio.h>
#include <string.h>

#define CANT 5
#define LARGO 41

// Carga conjunta: usamos un solo for para ambas estructuras
void cargar(char nombres[CANT][LARGO], int edades[CANT]) {
    for (int f = 0; f < CANT; f++) {
        printf("Ingrese nombre: ");
        gets(nombres[f]);
        printf("Ingrese edad: ");
        scanf("%i", &edades[f]);
        fflush(stdin); // Limpieza del buffer

		// si no funciona fflush(stdin)
		getchar();// Limpieza del buffer: "se come" el Enter sobrante
    	
    }
}
```

## Formateo de Tablas en Consola (`printf`)
Para que el listado de estructuras paralelas se vea organizado como una tabla (y no todo desalineado), usamos **especificadores de ancho de campo** en el `printf`.

### Sintaxis: `%-20s`
* **`%`**: Inicia el especificador.
* **`-`**: Alinea el texto a la izquierda (agrega los espacios a la derecha).
* **`20`**: Es la cantidad mínima de caracteres/espacios que se reservan para esa columna.
* **`s` / `i` / `f`**: El tipo de dato (string, entero o flotante).

### Ejemplo
```c
printf("%-20s %-10s %-15s\n", "Nombre", "Nota", "Condicion");
printf("--------------------------------------------------\n");
for (int f = 0; f < CANT; f++) {
    printf("%-20s %-10i %-15s\n", nombres[f], notas[f], condiciones[f]);
}
```

**¿Por qué usarlo?**  
Si un nombre tiene 5 letras y otro tiene 15, sin el formateo las siguientes columnas quedarían en distintas posiciones visuales. Con %-20s, C garantiza que la columna de notas siempre empiece exactamente 20 caracteres después del inicio de la fila.



---
## Ejercitación

### Problema 123
Desarrollar un programa que permita cargar 5 nombres de personas y sus edades respectivas. Luego de realizar la carga por teclado de todos los datos imprimir los nombres de las personas mayores de edad (mayores o iguales a 18 años)


### Problema 124
Ingresar el nombre de 5 productos en una matriz de caracteres y sus respectivos precios en un vector paralelo de tipo float.  
Mostrar cuantos productos tienen un precio mayor al primer producto ingresado (se debe contar) 


### Problema 125
En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben procesar de acuerdo a lo siguiente:
1. Ingresar Nombre y Nota de cada alumno (almacenar los datos en estructuras paralelas)
2. Realizar un listado que muestre los nombres, notas y condición del alumno. En la condición, colocar "Muy Bueno" si la nota es mayor o igual a 8, "Bueno" si la nota está entre 4 y 7, y colocar "Insuficiente" si la nota es inferior a 4.
3. Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”. 