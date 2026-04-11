# 16 - Concepto de funciones - Programación estructurada
El paradigma de **programación estructurada** propone dividir un problema complejo en pequeños sub-problemas más simples para su resolucion. En el lenguaje C, esta división se logra mediante el uso de **funciones**.

Una función es un conjunto de instrucciones independientes que realizan una tarea específica.

Si un programa empieza a ser más complejo (cientos de líneas o más), la división en pequeñas funciones nos permitirá tener un programa más ordenado y fácil de entender. Por lo tanto, más sencillo de mantener.

## Estructura de una función
Toda función tiene un nombre único, puede recibir datos (parámetros) y puede devolver un resultado.

### Sintaxis general:
```c
[valor_que_retorna] [nombre_de_la_funcion] ([parámetros])
{
    // Algoritmo (Cuerpo de la función)
}
```

#### Componentes:
* **Tipo de retorno:** Si la función no devuelve nada, usamos la palabra clave `void`.
* **Nombre:** No debe contener espacios ni caracteres especiales (camelCase recomendado).
* **Cuerpo:** El código encerrado entre llaves `{}`.



## Flujo de Ejecución
En C, el programa **siempre comienza** por la función `main()`. Las funciones que nosotros creamos solo se ejecutan si son **llamadas** (invocadas) desde la función `main` o desde otra función.



### Ejemplo de Modularización:
```c
#include <stdio.h>

// Definición de nuestras funciones
void presentacion() {
    printf("Calculadora de Suma v1.0\n");
    printf("*******************************\n");
}

void cargaSuma() {
    int valor1, valor2, suma; // Variables locales
    printf("Ingrese primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese segundo valor: ");
    scanf("%i", &valor2);
    suma = valor1 + valor2;
    printf("La suma es: %i\n", suma);
}

void finalizacion() {
    printf("*******************************\n");
    printf("Gracias por utilizar el programa.\n");
}

// Función Principal: El orquestador
int main() {
    presentacion(); // Llamada
    cargaSuma();    // Llamada
    finalizacion(); // Llamada
    return 0;
}
```

---

## Conceptos Importantes

### Variables Locales
Las variables definidas dentro de una función (como `valor1`, `valor2` y `suma` en el ejemplo anterior) se llaman **variables locales**.
* **Solo existen** mientras la función se está ejecutando.
* **No pueden ser accedidas** por otras funciones (ni siquiera por la función `main`).

### El orden de las llamadas
El orden en que invocamos las funciones dentro de la función `main` determina la lógica del programa. Si llamamos a `finalizacion()` antes que a `cargaSuma()`, el programa terminará antes de que el usuario pueda ingresar datos.


## Reutilización de Código

Una de las mayores ventajas de la programación estructurada es la posibilidad de **invocar una función múltiples veces**. En lugar de duplicar código (lo cual es una mala práctica), simplemente llamamos a la función cuantas veces sea necesario.

**DRY (Don't Repeat Yourself):** Si nos encontramos copiando y pegando el mismo bloque de código más de dos veces, es momento de convertirlo en una función.

El programa es más corto y limpio, favoreciendo el fácil mantenimiento. Así si encontramos un error en la lógica de nuestra función, solo lo corregís en la función y automáticamente se arregla en todas las partes donde la invocamos.

Además, al igual que usamos `printf` o `scanf` sin saber exactamente cómo funcionan por dentro, otros programadores pueden usar nuestras funciones enfocándose en **qué hacen** y no en **cómo lo hacen**.

### Ejemplo de Llamadas Múltiples:
Si necesitáramos sumar dos pares de valores, no escribimos la lógica dos veces, simplemente llamamos a la función de nuevo:

```c
int main() {
    presentacion();
    
    // Primera suma
    printf("--- Operacion 1 ---\n");
    cargaSuma();
    
    // Segunda suma (Reutilizamos la funcion)
    printf("--- Operacion 2 ---\n");
    cargaSuma();
    
    finalizacion();
    return 0;
}
```


---
## Ejercitación

### Problema 84
Confeccionar un programa que muestre una presentación en pantalla del programa. Solicite la carga de dos valores y nos muestre la suma. Mostrar finalmente un mensaje de despedida del programa.  
Implementar estas actividades en tres funciones.


### Problema 85
Confeccionar una aplicación que solicite la carga de dos valores enteros y muestre su suma. Repetir la carga de otros dos valores, sumarlos y mostrar.  
Mostrar una línea separadora después de cada vez que cargamos dos valores y mostramos su suma.


### Problema 86
Desarrollar un programa con dos funciones aparte de la main. La primer solicite el ingreso de un entero y muestre el cuadrado de dicho valor. La segunda que solicite la carga de dos valores y muestre el producto de los mismos.  
Llamar desde la main a ambas funciones. 


### Problema 87
Desarrollar una función que solicite la carga de tres valores y muestre el menor. Desde la función main llamar 3 veces a dicha función.