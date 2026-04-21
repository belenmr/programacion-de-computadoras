# 33 - Parámetros de una función de tipo punteros a int, float y char
En C debemos usar punteros si queremos que una función modifique una variable local de otra función (como el `main`).

Cuando pasamos un int, char o float a una función, C crea una copia en un nuevo espacio de memoria. Cualquier cambio realizado dentro de la función afecta solo a la copia y se pierde al finalizar la ejecución.

Para modificar la variable original, no pasamos el valor, sino la dirección de memoria donde reside.

### Operadores clave
#### `&`
* Se antepone a una variable para obtener su ubicación en la memoria RAM.

#### `*`
* En la declaración, indica que la variable almacenará una dirección.
* En la ejecución, permite acceder y modificar el contenido de esa dirección.

## Ejemplo de implementación

### Definición de la Función

La función debe declarar sus parámetros con el asterisco para indicar que recibirá direcciones.

```c
void cargar(int *pe1, int *pe2) {
    *pe1 = 100; // Accedemos al espacio de memoria original y cambiamos el valor
    *pe2 = 200;
}
```

### Llamada desde el `main`

Se utiliza el símbolo `&` para enviar la ubicación de las variables.
```c
int main() {
    int x1, x2;
    cargar(&x1, &x2); 
    // Ahora x1 vale 100 y x2 vale 200
    return 0;
}
```

## Modificando el contenido mediante Punteros
Para modificar el valor de la variable original desde una función, accedemos a "lo apuntado" mediante el operador de desreferencia (`*`).
```c
void incrementar(int *p) {
    *p = *p + 1; // Acceso y modificación directa
}
```

### Precedencia del operador de incremento (`++`)
Si queremos usar el operador incremental `++` para modificar el valor, es obligatorio el uso de paréntesis:
```c
void incrementar(int *p) {
    (*p)++; // Correcto: Incrementa el valor almacenado en la dirección p
}
```
#### ¿Por qué son necesarios los paréntesis?
En C, el operador de incremento `++` tiene mayor prioridad que el operador de desreferencia `*`.

* Si escribimos `*p++`, el compilador interpreta que queremos incrementar la dirección de memoria (el puntero en sí) y no el valor que está adentro. Esto causaría que el puntero deje de apuntar a nuestra variable original, moviéndose al siguiente bloque de memoria ("aritmética de punteros").

* Al usar `(*p)++`, forzamos a que primero se acceda al contenido y luego se incremente ese valor.

### Intercambiar contenido entre dos variables
Si queremos modificar el contenido de dos variables enteras en una función le pasamos sus direcciones y procedemos a modificar lo apuntado, como son enteros los que tenemos que intercambiar definimos una variable auxiliar de tipo int:
```c
void intercambiar(int *p1,int *p2)
{
    int aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}
```


## Conexión con scanf

Ahora se entiende la sintaxis de `scanf("%i", &x1);`.

El `&` significa que le pasamos la dirección de la variable `x1` para que la función por medio de un puntero cargue un entero en `x1`.




---
## Ejercitación

### Problema 145
Confeccionar una función que reciba como parámetros las direcciones de dos variables enteras y le cargue a lo apuntado por dichas variables dos enteros.


### Problema 146
Elaborar una función que se le pase la dirección de una variable entera e incremente en 1 lo apuntado por dicha variable.


### Problema 147
Implementar una función que intercambie el contenido de dos variables enteras, utilizar punteros para solucionarlo.


### Problema 148
Confeccionar un programa que permita cargar un vector de 5 enteros y obtenga el mayor y el menor.
Implementar dos funciones:
1. Carga del vector
2. Otra función que reciba el vector y retorne el mayor y menor elemento del vector por medio de dos parámetros de tipo puntero:

`void mayorMenor(int vec[TAMANO],int *pmayor,int *pmenor)`
