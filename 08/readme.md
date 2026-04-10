# 8 - Condiciones compuestas con operadores lógicos

## Operadores Lógicos

Los operadores lógicos permiten combinar dos o más condiciones en una sola instrucción `if` o `while`. El resultado de estas combinaciones siempre es un valor booleano (Verdadero o Falso).

### Tipos de Operadores

| Operador | Nombre | Símbolo en C | Descripción |
| :---: | :---: | :---: | :--- |
| AND | Conjunción | `&&` | Es verdadero solo si **todas** las condiciones son verdaderas. |
| OR | Disyunción | `\|\|` | Es verdadero si al menos **una** de las condiciones es verdadera. |
| NOT | Negación | `!` | Invierte el valor lógico (lo que es verdadero lo hace falso y viceversa). |

### Tablas de Verdad

#### 1. Operador AND (`&&`) - Conjunción
Solo es verdadero si **ambas** condiciones se cumplen.

| A | B | A && B | Resultado |
| :---: | :---: | :---: | :--- |
| 0 | 0 | 0 | Falso |
| 0 | 1 | 0 | Falso |
| 1 | 0 | 0 | Falso |
| 1 | 1 | 1 | **Verdadero** |

#### 2. Operador OR (`||`) - Disyunción
Es verdadero si al menos **una** de las condiciones se cumple.

| A | B | A \|\| B | Resultado |
| :---: | :---: | :---: | :--- |
| 0 | 0 | 0 | Falso |
| 0 | 1 | 1 | **Verdadero** |
| 1 | 0 | 1 | **Verdadero** |
| 1 | 1 | 1 | **Verdadero** |

#### 3. Operador NOT (`!`) - Negación
Invierte el valor lógico actual.

| A | !A | Resultado |
| :---: | :---: | :--- |
| 0 | 1 | **Verdadero** |
| 1 | 0 | Falso |


### Evaluación de cortocircuito
* En un && (AND): Si la primera condición es falsa, C ni siquiera mira la segunda, porque ya sabe que todo el conjunto va a ser falso.  
* En un || (OR): Si la primera condición es verdadera, C ni siquiera mira la segunda, porque ya sabe que todo el conjunto va a ser verdadero.
**Ejemplos**
```c
if (a == b || c == d || e == f) {
    // instrucciones
}
```
Si la expresión `a == b` es verdadera , entonces `c == d` y `e == f` no se evalúan porque el resultado de la expresión ya está determinado. 
```c
if (a == b && c == d && e == f) {
    // instrucciones
}
```
De manera similar, si la expresión `a == b` es falsa , el compilador omitirá la evaluación de las demás.

---
## Ejercitación 

### Problema 18
Confeccionar un programa que lea por teclado tres números distintos y nos muestre el mayor.

#### Diagrama de flujo
![Diagrama de flujo](Diagrama-de-flujo-18.png)


### Problema 19
Se carga una fecha (día, mes y año) por teclado. Mostrar un mensaje si corresponde al primer trimestre del año (enero, febrero o marzo) Cargar por teclado el valor numérico del día, mes y año.  
Ejemplo: dia:10 mes:2 año:2017. 

#### Diagrama de flujo
![Diagrama de flujo](Diagrama-de-flujo-19.png)


### Problema 20
Realizar un programa que pida cargar una fecha cualquiera, luego verificar si dicha fecha corresponde a Navidad. 

### Problema 21
Se ingresan tres valores por teclado, si todos son iguales se imprime la suma del primero con el segundo y a este resultado se lo multiplica por el tercero.

### Problema 22
Se ingresan por teclado tres números, si todos los valores ingresados son menores a 10, imprimir en pantalla la leyenda "Todos los números son menores a diez". 

### Problema 23
Se ingresan por teclado tres números, si al menos uno de los valores ingresados es menor a 10, imprimir en pantalla la leyenda "Alguno de los números es menor a diez". 

### Problema 24
Escribir un programa que pida ingresar la coordenada de un punto en el plano, es decir dos valores enteros x e y (distintos a cero).  
Posteriormente imprimir en pantalla en que cuadrante se ubica dicho punto.  
(1º Cuadrante si x > 0 Y y > 0 , 2º Cuadrante: x < 0 Y y > 0, etc.) 

### Problema 25
De un operario se conoce su sueldo y los años de antigüedad. Se pide confeccionar un programa que lea los datos de entrada e informe:
1. Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años, otorgarle un aumento del 20 %, mostrar el sueldo a pagar.
2. Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle un aumento de 5 %.
3. Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios. 

### Problema 26
Escribir un programa en el cual: dada una lista de tres valores numéricos distintos se calcule e informe su rango de variación  
(debe mostrar el mayor y el menor de ellos) 