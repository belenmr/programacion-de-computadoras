# 27 - Estructura de datos tipo registro (struct)
Un **registro** (`struct`) es una estructura que permite agrupar diferentes tipos de datos (int, float, char[]) bajo un mismo nombre. A diferencia de los vectores, sus elementos no se acceden por índice, sino por **nombres de campos**.

Hasta ahora, para representar, por ejemplo, un producto usábamos un vector para el código y una matriz para el nombre. Con `struct`, creamos una "plantilla" única donde los datos están físicamente juntos.

En la memoria, los campos de un struct se almacenan de forma contigua (uno al lado del otro). Esto es mucho más eficiente para el caché del procesador que tener vectores paralelos dispersos en la RAM.

**Campos:** Son las variables internas del registro.


## Declaración y Definición
Una cosa es declarar la "forma" (el molde) del registro y otra es crear las variables reales:

```c
// Declaración del molde
struct producto 
{
    int codigo;
    char descripcion[41];
    float precio;
};  // obligatorio el ;

struct producto pro1, pro2; // Creación de variables de tipo producto
```
Es obligatorio cerrar la llave de la declaración del `struct` con `;`.


## Acceso a Campos: El operador Punto (`.`)
Para acceder o modificar la información interna de un `struct`, usamos el nombre de la variable seguido de un punto y el nombre del campo:  
`variable.campo`.



---
## Ejercitación

### Problema 130
Declarar un registro que permita almacenar el codigo, descripcion y precio de un producto. Luego definir dos variables de dicho tipo, cargarlas e imprimir el nombre del producto que tiene mayor precio.


### Problema 131
Se tiene la siguiente declaración de registro:
```c
struct pais {
    char nombre[40];
    int cantidadhab;
};
```

Definir tres variables de tipo país y almacenar los nombres de los países y la cantidad de habitantes de dichos países.  
Mostrar seguidamente el nombre del país con mayor cantidad de habitantes (considerar que los tres países tienen cantidades distintas) 