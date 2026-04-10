# 3 - Codificación del diagrama de flujo en lenguaje C

## Inclusión de Librerías
El comando `#include` permite importar funciones predefinidas. La más utilizada es `stdio.h` (Standard Input Output), necesaria para la comunicación con el usuario.
```c
#include <stdio.h>
```
## Estructura Principal y Variables
La ejecución de todo programa en C comienza en la función `main`. Dentro de ella, definimos las **variables**, que son espacios reservados en la memoria RAM:

* **`int`**: Para números enteros.
* **`float`**: Punto flotante para valores con decimales.

**Ejemplo:**
```c
int horasTrabajadas;
float sueldo;
```

Podemos definir varias variables en una misma línea:

**Ejemplo:**
```c
int num1, num2, suma, producto;
```

## Comunicación con el Usuario
Para interactuar con el programa, utilizamos dos funciones esenciales:

### A. Salida de Datos (`printf`)
Se utiliza para mostrar mensajes o valores en pantalla. Todo lo contenido entre comillas aparecerá exactamente en la terminal.

Si necesitamos mostrar el contenido de una variable, usamos especificadores:
* `%i` para variables de tipo **int**.
* `%f` para variables de tipo **float**.

**Ejemplo:** 
```c
printf("%f", sueldo);
printf("El sueldo es: %f", sueldo);
```

Para realizar un salto de línea en pantalla utilizamos:
```c
printf("\n");
```

### B. Entrada de Datos (`scanf`)
Permite capturar datos ingresados por teclado. Su sintaxis requiere dos parámetros:

1. El especificador de tipo de dato entre comillas (`"%i"` si es int o `"%f"` si es un float).
2. El nombre de la variable antecedida por el carácter **`&`** (operador de dirección). Este símbolo ampersand es crucial en `scanf` porque le indica a la función la dirección exacta de memoria donde debe "depositar" el dato capturado.

**Ejemplo:** 
```c
scanf("%i", &horasTrabajadas);
```


---
## Ejercitación

### Problema 1
Calcular el sueldo mensual de un operario conociendo la cantidad de horas trabajadas y el pago por hora.

##### Datos conocidos:
* Horas trabajadas en el mes.
* Pago por hora.

##### Proceso:
Cálculo del sueldo multiplicando la cantidad de horas por el pago por hora.

##### Información resultante:
Sueldo mensual

#### Diagrama de flujo
![Diagrama de flujo](Diagrama-de-flujo.png)