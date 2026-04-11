# 14 - Cadenas o vectores de caracteres en C (elementos de tipo char)
En el lenguaje C, las cadenas de texto no son un tipo de dato primitivo, sino que se implementan como **vectores de tipo `char`** que finalizan con un carácter especial de control.

## Sintaxis
Para almacenar una cadena de caracteres, debemos definir un vector de tipo `char`. Es fundamental reservar una posición adicional para el carácter nulo (`\0`), que indica el fin de la cadena.  
#### Ejemplo
Si necesitamos guardar 10 caracteres, el vector debe ser de tamaño 11.  
`char saludo[11] = "Hola Mundo";`

## Representación en Memoria
| Índice | [0] | [1] | [2] | [3] | [4] | [5] | [6] | [7] | [8] | [9] | [10] |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| **Contenido** | 'H' | 'o' | 'l' | 'a' | ' ' | 'M' | 'u' | 'n' | 'd' | 'o' | `\0` |

**Nota:** Si definimos un vector de 11 pero solo guardamos `"Hola"`, el `\0` se ubicará en la posición `[4]`. Todo lo que venga después de ese carácter no será procesado por las funciones de C y se considera "basura".

## Entrada y Salida de Datos

### **Salida (`printf`)**
Utilizamos el especificador `%s` (string). La función imprimirá todos los caracteres hasta encontrar el primer `\0`.
```c
printf("%s", saludo);
```
###  **Entrada (`gets`)** 
Se utiliza para leer una cadena completa desde el teclado, permitiendo incluir espacios en blanco.  
El problema de esta función que si el operador carga más caracteres que los reservados en la variable produce errores inesperados.
```c
gets(nombre_vector);
```

## Gestión del Buffer y `fflush`
Un problema recurrente ocurre al mezclar `scanf` (para números) con `gets` (para cadenas). Al presionar **Enter** después de ingresar un número mediante la función scanf, ese salto de línea queda almacenado en el buffer del teclado.  
Así la siguiente llamada a `gets` leería ese "Enter" y saltaría la carga, dejando la cadena vacía. Para evitar que sucesa esto, debemos usar `fflush(stdin);` después de cada `scanf` para limpiar el buffer antes de leer una cadena.

```c
printf("Ingrese la edad: ");
scanf("%i", &edad1);
fflush(stdin); // Limpia el buffer de teclado
printf("Ingrese el nombre: ");
gets(nombre1);
```

## Recorrido y Procesamiento Manual
Como sabemos en el vector de caracteres se almacenan los que ingresó el operador por teclado y luego del último se guarda el caracter ASCII NULL que en el lenguaje C se lo representa por '\0'. Entonces si necesitamos recorrer el vector, podemos hacerlo mediante un `while` que itere hasta encontrar el terminador de cadena `\0`.

#### Ejemplo
```c
char palabra[50];
int i = 0;

printf("Ingrese una palabra: ");
gets(palabra);

while (palabra[i] != '\0') 
{
    i++;
}
printf("La cantidad de letras que tiene la palabra %s es %i", palabra, i);
```

**Nota:** Es mucho más compacto realizar la impresión de mensajes y múltiples variables con un único `printf`. El orden de las variables al final de la función debe coincidir exactamente con los especificadores (`%s`, `%i`) definidos en la cadena de formato.



---
## Ejercitación

### Problema 69
Definir una variable para almacenar el nombre y apellido del programador. Mostrar dicho nombre por pantalla.


### Problema 70
Cargar los nombres de dos personas y sus edades. Mostrar el nombre de la persona que tiene mayor edad. Los nombres de las personan no superan los 20 caracteres.


### Problema 71
Ingresar por teclado una palabra en minúsculas. Mostrar por pantalla la cantidad de vocales que tienen dicha palabra.


### Problema 72
Ingresar una palabra por teclado. Mostrar por pantalla la palabra y la cantidad de caracteres que tiene dicha palabra. 


### Problema 73
Ingresar por teclado una oración de hasta 200 caracteres. Se sabe que el operador ingresa solo un caracter en blanco entre palabras. Imprimir por pantalla la cantidad de palabras que tiene la oración. 


### Problema 74
Confeccionar un programa que permita ingresar una palabra y luego muestre un mensaje si la misma comienza con la vocal 'A' o 'a'.


### Problema 75
Permitir el ingreso de una palabra en minúsculas por teclado. Cambiar todas las vocales por un caracter de guión: '-'.