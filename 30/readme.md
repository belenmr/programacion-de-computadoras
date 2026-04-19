# 30 - Estructura de datos tipo vector (elementos de tipo struct)
Un **vector de registros** permite almacenar una colección de objetos complejos bajo un mismo nombre. Cada índice del vector ya no guarda un simple número, sino una estructura completa con múltiples campos.

## Declaración
La sintaxis combina la definición de un `struct` con la de un vector tradicional:

```c
#define TAMANO 4

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};

struct producto vector[TAMANO];
```


## Acceso a los datos
Para acceder a un dato específico, primero indicamos el índice del vector y luego el campo del registro mediante el punto (`.`):
```c
vec[f].codigo = 101;
printf("%s", vec[f].descripcion);
```


## Paso de vectores a funciones
A diferencia de un `struct` individual (que se pasaba por valor), los *vectores de structs* se pasan por *referencia*. Esto significa que si modificamos el vector dentro de una función (como en `cargar`), los cambios impactan directamente en el vector del `main`.


---
## Ejercitación

### Problema 136
Se tiene la siguiente declaración de registro:
```c
struct producto {
    int codigo;
    char descripcion[41];
    float precio;
}; 
```
Definir un vector de 4 elementos de tipo producto.  
Implementar las funciones:
* Carga del vector.
* Impresión del vector.
* Mostrar el nombre del articulo con precio mayor


### Problema 137
Se tiene la siguiente declaración de registro:
```c
struct libro
{
    int codigo;
    char titulo[40];
    char autor[40];
};
```
Definir un vector de cuatro elementos de tipo libro.  
Codificar las funciones:
1. Carga del vector.
2. Listado completo.
3. Ingresar por teclado un nombre de autor y luego mostrar todos los títulos de libros que ha escrito o un mensaje si no tiene. 