# 29 - Funciones con retorno de un struct
Así como una función puede devolver un `int` o un `float`, en C también puede devolver un **registro completo**. Esto es fundamental para modularizar la carga de datos.

## 1. Declaración de la Función
Para que una función devuelva un struct, debemos indicar el tipo `struct` seguido del nombre de la estructura antes del nombre de la función:

### Ejemplos
```c
struct producto cargar()
{
    struct producto pro;
    // ... carga de datos ...
    return pro;
}

int main()
{
    struct producto pro1;
    
    // Asignación mediante retorno de función
    pro1 = cargar();
    
    return 0;
}
```


## El proceso de copia (return)
Cuando la función ejecuta el `return pro;`, sucede lo siguiente:
1. Se crea una copia temporal de la variable local en la memoria.
2. Al volver al `main`, esa copia se asigna a la variable receptora (ej: `pro1 = cargar();`).
3. La variable local de la función desaparece, pero los datos persisten en el `main` gracias a la copia.


---
## Ejercitación

### Problema 134
Se tiene la siguiente declaración de registro:
```c
struct producto
{
    int codigo;
    char descripcion[41];
    float precio;
}; //obligatorio el punto y coma
```
Plantear dos funciones: una que cargue un registro de tipo producto y otra que lo imprima.  
En la función main definir dos variables de tipo producto llamar a las funciones anteriores.


### Problema 135
Se tiene la siguiente declaración de registro: 
```c
struct punto
{
    int x;
    int y;
};
```
Definir tres variables de tipo punto y cargarlas llamando a una función que retorne valores de tipo punto.  
Finalmente crear otra función que imprima en que cuadrante se encuentra cada punto (tener en cuenta que si x>0 e y>0 se encuentra en el primer cuadrante, si x<0 e y>0 se encuentra en el segundo cuadrante y así sucesivamente) 