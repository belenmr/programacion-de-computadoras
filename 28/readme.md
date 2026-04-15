# 28 - Funciones con parámetros de tipo struct
En C, los `struct` se comportan como los tipos de datos simples (`int`, `float`) cuando se pasan como parámetros a una función: **se pasan por valor**.

## Paso por Valor vs. Referencia
* **Tipos simples y structs:** La función recibe una **copia** exacta de la estructura. Si modificamos el parámetro dentro de la función, la variable original en el `main` **no cambia**.
* **Vectores y Matrices:** Se pasan por referencia (la función accede directamente a la memoria original).


## Implementación de Funciones
Para que una función reciba un registro, el parámetro debe definirse con la palabra clave `struct` seguida del nombre del tipo:

```c
void imprimir(struct producto p) {
    printf("Código: %i\n", p.codigo);
    printf("Descripción: %s\n", p.descripcion);
    printf("Precio: %0.2f\n", p.precio);
}
```

## Inicialización por Asignación
Existen dos formas principales de cargar datos en un `struct`:

### Inicialización en la definición
C permite inicializar un `struct` en una sola línea al momento de su definición, respetando el orden de los campos declarados
```c
struct producto pro = {1, "naranjas", 12.50};
```
### Inicialización por campos
Se realiza campo por campo después de haber definido la variable.
```c
struct producto pro;

pro.codigo = 1;
strcpy(pro.descripcion, "naranjas");
pro.precio = 12.50;
```

## Resumen de Inicializaciones

| Tipo de Dato | Ejemplo de Inicialización |
| :--- | :--- |
| **int** | `int cant = 0;` |
| **vector** | `int v[3] = {10, 20, 30};` |
| **matrix** | `int m[2][2] = {{1, 2}, {3, 4}};` |
| **struct** | `struct prod p = {1, "Aceite", 150.5};` |



---
## Ejercitación

### Problema 132
Se tiene la siguiente declaración de registro:
```c
struct producto {
    int codigo;
    char descripcion[41];
    float precio;
}; //obligatorio el punto y coma
```
Definir una variable en la función main e inicializar por asignación los tres campos.  
Plantear una función que reciba el registro y lo imprima.


### Problema 133
Se tiene la siguiente declaración de registro:
```c
struct pais {
    char nombre[40];
    int cantidadhab;
};
```
Definir tres variables de tipo país e iniciarlas por asignación con la sintaxis:
```c
struct pais pais1={"Argentina",40000000};
```
Elaborar una función que reciba un parámetro de tipo pais y muestre por pantalla sus dos campos. Llamar a dicha función desde la main pasando en forma sucesiva las tres variables definidas. 