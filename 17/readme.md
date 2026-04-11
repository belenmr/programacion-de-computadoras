# 17 - Funciones con parámetros de tipo int, float y char
Las funciones con parámetros operan con los valores que reciban al momento de ser llamadas.  
Los parámetros se disponen luego del nombre de la función encerrado entre paréntesis y separados por coma. Un parámetro es una variable que se declara en la cabecera de la función. Su objetivo es recibir un valor desde quien llama a la función (generalmente la función `main`).

## Sintaxis
```c
void nombreFuncion(tipo nombreParametro1, tipo nombreParametro2)
{
    // Algoritmo que utiliza los parámetros
}
```


### Ejemplos
```c
void mostrarEdad(int edad)
{
    // Algoritmo (Cuerpo de la función)
}

void imprimirMayor(int a, int b)
{
    // Algoritmo (Cuerpo de la función)
}

void calcularArea(float base, float altura)
{
    // Algoritmo (Cuerpo de la función)
}

void imprimirLetra(char letra)
{
    // Algoritmo (Cuerpo de la función)
}
```

## El paso de parámetros por valor
Es fundamental entender qué sucede en la memoria cuando llamamos a una función. En C, los parámetros se pasan **por valor**. Esto significa que:

1. El valor de la variable original se **copia** en el parámetro de la función.
2. La función trabaja con esa copia.
3. Si la función modifica el parámetro, la variable original en la función `main` **no cambia**.


### Ejemplo: Imprimir el mayor de dos números
```c
void imprimirMayor(int v1, int v2) {
    if (v1 > v2) {
        printf("El mayor es %i\n", v1);
    } else if (v2 > v1) {
        printf("El mayor es %i\n", v2);
    } else {
        printf("Son iguales\n");
    }
}

int main() {
    int x = 10, y = 20;
	int v1 = 5, v2 = 15;

    imprimirMayor(x, y);       // Pasamos variables
    imprimirMayor(100, 50);    // Pasamos valores directos (literales)
	imprimirMayor(v1, v2);     // Pasamos variables con igual nombre que los parametros
    return 0;
}
```

## Parámetros y variables locales de la función
Aunque las variables de la función `main` y los parámetros de la función se llamen igual, para la computadora son **entidades distintas** en lugares de memoria diferentes.  
Los parámetros son el puente de comunicación de la función `main` hacia las funciones.  
**Ámbito (Scope):** Los parámetros y las variables locales solo existen mientras la función se está ejecutando. Al llegar a la llave de cierre `}`, se borran de la memoria.



---
## Ejercitación

### Problema 88
Confeccionar una función que reciba dos enteros e imprima el mayor de ellos. Llamar a la función desde la main cargando previamente dos valores por teclado.


### Problema 89
Confeccionar un programa que solicite el pago por hora de un empleado y la cantidad de horas trabajadas dentro de una estructura repetitiva en la función main. Elaborar una función que reciba como parámetro el valor de la hora y la cantidad de horas trabajadas y nos muestre el total a pagar.


### Problema 90
Desarrollar dos funciones que reciban como parámetro el valor del lado de un cuadrado. La primera debe calcular y mostrar la superficie y la segunda calcular y mostrar el perímetro.
En la main llamar a las funciones pasando los valores enteros comprendidos entre 10 y 20


### Problema 91
Desarrollar una función que reciba como parámetro un caracter. Si llega una 'h' mostrar por pantalla el mensaje "hombre", si llega una 'm' mostrar el mensaje "mujer".  
Llamar desde la función main pasando una vez una 'h' y otra vez una 'm'.


### Problema 92
Confeccionar una función que reciba tres enteros y nos muestre el mayor de ellos. La carga de los valores hacerlo por teclado en la función main. 


### Problema 93
Elaborar una función que reciba un valor entero y nos muestre desde el 1 hasta dicho valor. Si la función recibe un valor negativo mostrar un mensaje de error. 


### Problema 94
Desarrollar una función que reciba como parámetro un caracter. La función debe mostrar un mensaje si es una vocal o no es una vocal. Debe funcionar tanto con mayúsculas y minúsculas.