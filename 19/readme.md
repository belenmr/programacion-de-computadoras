# 19 - Funciones con parámetros de tipo vector

Un vector permite almacenar un conjunto de datos del mismo tipo bajo un único nombre. Cuando pasamos un vector a una función, el comportamiento cambia radicalmente respecto a los tipos simples (`int`, `float`, `char`).

## El concepto de Referencia
A diferencia de las variables simples que se pasan por **valor** (se hace una copia), los vectores se pasan por **referencia**.

La función no recibe una copia de todos los elementos del vector, sino que recibe la **dirección de memoria** donde empieza el vector original. Por lo tanto, si modificamos los elementos del vector dentro de la función, estamos modificando directamente el vector original definido en la función `main` o donde se haya definido.


## Sintaxis
Para definir un parámetro de tipo vector, usamos los corchetes `[]` indicando el tamaño.

```c
void cargar(int vec[5]) {
    // Cualquier cambio en vec[i] afecta al vector declarado en la funcion main
}
```

## Ventajas de este comportamiento
1. **Eficiencia:** No se gasta memoria ni tiempo procesador en copiar 100 o 1000 elementos; solo se pasa una dirección.
2. **Modularidad:** Podemos crear funciones especializadas en "cargar", "imprimir" o "procesar" vectores, facilitando la reutilización.



### Ejemplo: Suma de Vectores
Podemos reutilizar funciones para distintos vectores del mismo tipo y tamaño:

```c
void imprimir(int vec[5]) {
    for(int x = 0; x < 5; x++) {
        printf("%i ", vec[x]);
    }
    printf("\n");
}

int main() {
    int v1[5] = {1, 2, 3, 4, 5};
    int v2[5] = {10, 20, 30, 40, 50};
    
    imprimir(v1); // La función usa la dirección de v1
    imprimir(v2); // La misma función ahora apunta a v2
    return 0;
}
```


---
## Ejercitación

### Problema 100
Confeccionar un programa que defina dos funciones, una que permita cargar un vector de 5 elementos enteros y otra que muestre un vector de 5 elementos enteros.
En la función main definir una variable de tipo vector y seguidamente llamar a las dos funciones.


### Problema 101
Guardar los datos de 6 sueldos de empleados en un vector de tipo float. Confeccionar las siguientes funciones:
1-Carga de sueldos.
2-Impresión de los sueldos.
3-Gasto total de la empresa en sueldos.


### Problema 102
Definir tres vectores de tipo entero. Realizar la carga de los dos primeros por teclado. Definir una única función que realice la carga de un vector y llamar a dicha función dos veces pasando el primer y segundo vector definido.  
Plantear otra función que reciba tres vectores y proceda a sumar elemento a elementos los dos primeros vectores y se carguen en el tercer vector.  
Imprimir los tres vectores.


### Problema 103
Confeccionar dos funciones:
1-Permita ingresar por teclado una palabra en un vector de caracteres que llega como parámetro.
2-Retornar la cantidad de vocales que tiene la palabra.


### Problema 104
Definir un vector de 5 componentes de tipo float en la función main que representen las alturas de 5 personas. Desarrollar las siguientes funciones:
1. Carga del vector.
2. Retornar el promedio del vector.  
`float calcularPromedio(float alturas[5])`

3. Contar y luego imprimir cuántas personas son más altas que el promedio y cuántas más bajas.  
`void altasBajas(float alturas[5],float pro)`


### Problema 105
Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde). Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno. Imprimir los gastos en sueldos de cada turno.  
Se deben implementar las siguientes funciones:  
```c
void cargar(float sueldos[4]) 
float gastosTurno(float sueldos[4])

int main()
{
    float sueldosMa[4];
    float sueldosTar[4];
    printf("Carga de sueldos del turno manana\n");
    cargar(sueldosMa);
    printf("Carga de sueldos del turno tarde\n");
    cargar(sueldosTar);
    printf("Gastos del turno de la manana: %0.2f\n", gastosTurno(sueldosMa));
    printf("Gastos del turno de la tarde: %0.2f", gastosTurno(sueldosTar));
    
    return 0;
}
```


### Problema 106
Desarrollar un programa que permita administrar un vector de 8 elementos tipo entero.
Se deben codificar las siguientes funciones:
1. Carga del vector.  
`void cargar(int vector[8])`

2. Retornar el valor acumulado de todos los elementos del vector.  
`int sumar(int vector[8])`

3. Retornar el valor acumulado de los elementos del vector que sean mayores a 36.  
`int sumaMayores36(int vector[8])`

4. Retornar la cantidad de componentes con valores mayores a 50.  
`int cantidadMayores50(int vector[8])`

La función main:
```c
int main()
{
    int vector[8];
    cargar(vector);
    printf("valor acumulado de todos los elementos:%i\n", sumar(vector));
    printf("valor acumulado de los elementos del vector que sean mayores a 36: %i\n", sumaMayores36(vector));
    printf("cantidad de componentes con valores mayores a 50: %i", cantidadMayores50(vector));
    return 0;
}
```


### Problema 107
Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos.
1. Realizar la carga de las notas.
2. Mostrar el nombre del curso que obtuvo el mayor promedio general. 


### Problema 108
Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor. Hacer las dos actividades en funciones distintas. 