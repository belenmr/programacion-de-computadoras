# 18 - Funciones con retorno de un valor
En la programación estructurada, el objetivo es dividir problemas complejos en funciones especializadas. Hasta ahora, nuestras funciones procesaban datos y los mostraban por pantalla (`void`). Sin embargo, una función también es capaz de **devolver** un resultado a quien la invocó (recordemos que una función la podemos llamar desde la función `main` o inclusive desde otras funciones de nuestro programa).


## Concepto de Retorno (`return`)
El retorno es el valor que una función entrega como resultado de su ejecución. Al devolver un dato, la función permite que la función que la ha invocado decida qué hacer con esa información (guardarla, mostrarla o usarla para otro cálculo).  
Una función puede ejecutar un solo `return` por vez. En cuanto el programa lee la línea del `return`, no sigue ejecutando el resto de la función sino que sale a la línea del programa desde donde llamamos a dicha función.


## Sintaxis
Para que una función retorne un valor, debemos realizar dos cambios:
1.  **Tipo de dato:** Reemplazar `void` por el tipo de dato que devuelve (`int`, `float`, `char`, etc.).
2.  **Instrucción `return`:** Usar la palabra clave `return` seguida del valor o variable resultante a devolver.

### Ejemplo
```c
int calcularSuperficie(int lado) {
    int sup = lado * lado;
    return sup; // Envía el resultado hacia afuera, hacia la función que la invocó
}
```

## Captura del valor en la llamada
Cuando llamamos a una función que retorna un valor, el programa reemplaza la llamada por el valor devuelto.

### Formas de recibir el dato
* **Asignación a una variable:**
  ```c
  int superficie = calcularSuperficie(10);
  ```
* **Uso directo en una expresión o función:**
  ```c
  printf("La superficie es: %i", calcularSuperficie(10));
  ```


## 4. Diferencias entre `void` y funciones con retorno

| Característica | Función `void` | Función con `return` |
| :--- | :--- | :--- |
| **Objetivo** | Realizar una acción (imprimir, limpiar pantalla). | Procesar datos y entregar un resultado. |
| **Flexibilidad** | Baja (el dato se muestra y se pierde). | Alta (el dato puede seguir usándose). |



---
## Ejercitación

### Problema 95
Confeccionar una función que le enviemos como parámetro el valor del lado de un cuadrado y nos retorne su superficie.


### Problema 96
Confeccionar una función que defina dos parámetros enteros y nos retorne el mayor.


### Problema 97
Elaborar una función que reciba tres enteros y nos retorne el valor promedio de los mismos.


### Problema 98
Elaborar una función que nos retorne el perímetro de un cuadrado pasando como parámetros el valor de un lado.


### Problema 99
Confeccionar una función que calcule la superficie de un rectángulo y la retorne, la función recibe como parámetros los valores de dos de sus lados:  
`int retornarSuperficie(int lado1,int lado2)`  
En la función main del programa cargar los lados de dos rectángulos y luego mostrar cual de los dos tiene una superficie mayor.