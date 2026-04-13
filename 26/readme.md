# 26 - Directiva #define
La directiva `#define` permite crear **macros**, que son nombres simbólicos que el compilador reemplaza por un valor específico antes de empezar a procesar el código fuente.


## Sintaxis
`#define [nombre de la macro]  [valor de la macro]`

* **Mayúsculas:** Por convención, las macros se escriben siempre en **MAYÚSCULAS** para diferenciarlas visualmente de las variables.
* **Sin punto y coma:** Las macros **no llevan `;`** al final. 
* **Ubicación:** Se declaran al inicio del archivo, después de los `#include`.


## Funcionamiento: El Preprocesador
Es fundamental entender que `#define` **no crea una variable**. Lo que sucede es una búsqueda y reemplazo de texto puro:
1. El **preprocesador** recorre el archivo `.c`.
2. Donde encuentra el nombre de la macro (ej. `CANTIDAD`), escribe el valor asignado (ej. `5`).
3. Recién después de este reemplazo, comienza la compilación real.


## Ventajas Técnicas
* **Mantenibilidad:** Permite cambiar configuraciones globales en un solo lugar. Si el programa pasa de procesar 5 a 100 empleados, solo se modifica la macro.
* **Legibilidad:** Evita los números sueltos en el código. Es más claro leer `for(f=0; f < CANTIDAD; f++)` que un número suelto cuyo sentido no se explica.
* **Memoria:** Al no ser variables, no ocupan espacio en la memoria RAM durante la ejecución del programa.


## Ejemplo

```c
#include <stdio.h>

// Definición de macros
#define CANTIDAD 5
#define MENSAJE_FIN "Proceso finalizado con éxito."

void cargar(float sueldos[CANTIDAD])
{
    for(int f = 0; f < CANTIDAD; f++)
	{
        printf("Ingrese sueldo: ");
        scanf("%f", &sueldos[f]);
    }
}

int main()
{
    float sueldos[CANTIDAD]; // El compilador verá: float sueldos[5];
    
    cargar(sueldos);
    
    printf("%s\n", MENSAJE_FIN);
    return 0;
}
```



---
## Ejercitación

### Problema 128
Se desea guardar los sueldos de 5 operarios.  
Desarrollar dos funciones una donde se los ingrese por teclado y otra función donde se los imprima.  
Definir una macro para indicar el tamaño del vector.


### Problema 129
Se tiene la siguiente información:
* Nombres de 4 empleados (matriz de tipo char)
* Ingresos en concepto de sueldo, cobrado por cada empleado, en los últimos 3 meses (matriz de tipo float)

Confeccionar el programa para:
1. Realizar la carga de la información mencionada.
2. Generar un vector que contenga el ingreso acumulado en sueldos en los últimos 3 meses para cada empleado.
3. Mostrar por pantalla el total pagado en sueldos a todos los empleados en los últimos 3 meses
4. Obtener el nombre del empleado que tuvo el mayor ingreso acumulado

Utilizar macros para definir la cantidad de filas y columnas de las estructuras de datos.