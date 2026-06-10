# 34 - Parámetro de una función de tipo punteros a struct
En C, los `structs` pueden contener grandes cantidades de datos. Si pasamos un registro por **valor**, el lenguaje realiza una copia de todos sus campos, lo que consume memoria y tiempo de CPU de forma innecesaria. 

Para modificar el registro original o mejorar la eficiencia, utilizamos **punteros a estructuras**.


## El Operador Flecha (`->`)

Es la sintaxis estándar y más utilizada para acceder a los miembros de una estructura a través de un puntero. 

* **Sintaxis tradicional:** `(*pprod).codigo` (Requiere paréntesis porque el punto tiene mayor precedencia que el asterisco).
* **Sintaxis con flecha:** `pprod->codigo` (Más limpia y profesional).

> **Nota:** Si la variable es un **puntero**, usamos `->`. Si la variable es el **objeto directo**, usamos `.`.

## Ejemplo
```c
#include <stdio.h>

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};

// Carga de datos: Recibe PUNTERO para modificar la variable original
void cargar(struct producto *pprod) {
    printf("Ingrese codigo: ");
    scanf("%i", &pprod->codigo);

    // Limpieza de buffer
    while (getchar() != '\n'); 

    printf("Ingrese descripcion: ");
    // fgets es preferible sobre gets por seguridad
    fgets(pprod->descripcion, 41, stdin);
    
    printf("Ingrese precio: ");
    scanf("%f", &pprod->precio);
}

// Impresión: Recibe por VALOR (Copia) porque no requiere modificar el original
void imprimir(struct producto prod) {
    printf("\n--- Datos del Producto ---\n");
    printf("Codigo: %i\n", prod.codigo);
    printf("Descripcion: %s", prod.descripcion);
    printf("Precio: %0.2f\n", prod.precio);
}

int main() {
    struct producto prod;
    
    // Pasamos la DIRECCIÓN de la estructura
    cargar(&prod); 
    
    // Pasamos la estructura por VALOR
    imprimir(prod);

    return 0;
}
```

## Diferencias Técnicas
| Concepto | Paso por Valor | Paso por Puntero |
| :--- | :--- | :--- |
| **Sintaxis en Función** | `void func(struct T s)` | `void func(struct T *s)` |
| **Uso de Memoria** | Alta (Copia todo el struct) | Baja (Solo 8 bytes de dirección) |
| **Modificación** | No afecta al original | Modifica el original |
| **Acceso a Campos** | Operador punto `s.campo` | Operador flecha `s->campo` |



---
## Ejercitación

### Problema 149
Se tiene la siguiente declaración de registro:
```c
struct producto {
    int codigo;
    char descripcion[41];
    float precio;
}; 
```
Plantear una función que reciba la dirección de un registro y mediante esta modificar los campos de la variable que le pasamos desde la main.

Imprimir el registro definido en la main.


### Problema 150
Se tiene la siguiente declaración de registro:
```c
struct pais {
    char nombre[40];
    int cantidadhab;
};
```
Definir tres variables de tipo país en la función main.
Crear una función que reciba un puntero de tipo pais y cargue por teclado el nombre del país y la cantidad de habitantes.
Mostrar en otra función los datos cargados de cada país. 