# 31 - Estructura de datos tipo registro (con campos int, float, vector, registros anidados etc.)
En C, los campos de un `struct` pueden ser de cualquier tipo de dato, incluso otros registros. Esto permite agrupar datos relacionados dentro de estructuras mayores.

## Orden de Declaración
Es fundamental declarar primero el registro "interno" antes que el registro "contenedor". De lo contrario, el compilador no reconocerá el tipo de dato cuando intente crear el campo.
```c
struct fecha
{
    int dd;
    int mm;
    int aa;
}; // Declarado primero

struct producto
{
    int codigo;
    char descripcion[41];
    float precio;
    struct fecha fechavencimiento; // Registro anidado
};
```

## Acceso a datos anidados
Para acceder a un campo que está dentro de otro registro, simplemente encadenamos el operador punto (`.`):
```c
// Acceso: variable.registro_interno.campo_interno
printf("Año: %i", vec[f].fechavencimiento.aa);
```


## Carga e impresion
Cada campo debe tratarse de forma individual. Si un registro contiene un vector o un registro anidado, debemos llegar hasta el nivel más básico del dato (int, float, char) para cargarlo o mostrarlo.
```c
void imprimir(struct producto vec[TAMANO])
{
    for(int f = 0; f < TAMANO; f++)
	{
        printf("Vence el: %i/%i/%i\n", vec[f].fechavencimiento.dd, vec[f].fechavencimiento.mm, vec[f].fechavencimiento.aa);
    }
}
```


---
## Ejercitación

### Problema 138
Se tienen las siguientes declaraciones de registros:
```c
struct fecha {
    int dd;
    int mm;
    int aa;
};

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
    struct fecha fechavencimiento;
}; 
```
Definir un vector de 3 elementos de tipo producto, realizar su carga e impresión.


### Problema 139
Se tienen las siguientes declaraciones de registros:
```c
struct punto {
    int x;
    int y;
};

struct triangulo {
    struct punto punto1;
    struct punto punto2;
    struct punto punto3;
};
```
Definir en el main un registro de tipo triangulo.

Codificar las funciones:
1. Una función que retorne un registro de tipo triangulo.
2. Impresión del registro.