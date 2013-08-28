cprogramacion1
==============

Programacion C 1

VARIABLES. ACUMULADORES. CONTADORES. BUCLES Y TOMA DE DECISIONES

1.	Ingresar 5 números y calcular su media
2.	Escribir el algoritmo necesario para calcular  y mostrar el cuadrado de un número. El número debe ser mayor que cero, en caso de error que aparezca el mensaje "ERROR, el número debe ser mayor que cero"
3.	De 10 números ingresados indicar cuantos son mayores a cero y cuantos son menores a cero.
4.	Diseñar un algoritmo que calcule la longitud de la circunferencia y el área del círculo de radio dado.
5.	Diseñar un algoritmo que calcule la superficie de un triángulo a partir del ingreso de su base y altura y muestre el resultado.
6.	Hacer el algoritmo que nos permita introducir un número por teclado y nos informe si es positivo o negativo
7.	Hacer el algoritmo que nos permita introducir un número por teclado y nos informe si es par o impar
8.	Escribir el algoritmo que me permita leer un número decimal que representa una cantidad de grados Celsius y convierta dicho valor a la cantidad equivalente en grados Fahrenheit. La salida del programa puede ser de la siguiente forma: 100  grados celsius son 212 grados Fahrenheit
9.	Dados ciertos centímetros como entrada de tipo decimal, escribir su equivalente a pies (enteros) y pulgadas (decimal), dando las pulgadas con una precisión de 1 lugar decimal. Considerar 2.54 cm por pulgada y 12 pulgadas por pie. La salida podrá ser: 333.3 cm son 10 pies y 11.2 pulgadas.
10.	Escribir en Pseudocódigo  y codificar en C un programa que lea  20 caracteres. Luego de la lectura indicar cuantas "a" se ingresaron, cuantas "e, i, o, u"


MÁXIMOS Y MÍNIMOS

11.	Hacer el algoritmo que imprima el mayor y el menor de una serie de 5 números que vamos introduciendo por teclado.
12.	De los alumnos de una escuela se registra su apellido y nombre y su altura. Diseñar en Pseudocódigo un algoritmo que indique el nombre del alumno más alto y su altura (sólo uno es el más alto).
13.	Diseñar un algoritmo que permita calcular el promedio de un alumno sabiendo que se ingresa por alumno la nota de 6 materias y su nombre. No se sabe la cantidad de alumnos. Se pide mostrar:  NOMBRE DEL ALUMNO:				PROMEDIO:
14.	Del registro de partes meteorológico por cada día se registra la fecha, temperatura máxima y temperatura mínima. Diseñar en Pseudocódigo un algoritmo que permita informar:
•	el día más frío y cual fue esa temperatura
•	el día más  cálido y cual fue esa temperatura
15.	De las 20 participantes de un concurso de belleza se van registrando de uno en uno los siguientes datos:
Apellido y Nombre
Puntos por inteligencia 
Puntos por Cultura general
Puntos por Belleza
Se necesita informar por pantalla:
•	Apellido y nombre de la concursante de mayor puntaje general
•	Puntaje acumulado por todas las participantes en Cultura general, en Inteligencia y en Belleza
•	De los tres puntajes acumulados en el ítem anterior cual fue el menor
16.	Escribir un programa que calcule el salario semanal de cada trabajador de una empresa dada la tarifa horaria y el número de horas trabajadas además del nombre. Se debe permitir al usuario  indicar cuando desea dejar de ingresar datos.
17.	Ídem  al anterior pero informando al finalizar (el ingreso de datos y los cálculos correspondientes) la cantidad de empleados a los que se les calculó el salario.
18.	Ídem al anterior agregando en el informe final nombre  del empleado de mayor salario con el monto del salario correspondiente y nombre del empleado de menor salario con el monto del salario correspondiente 
19.	Ídem al anterior agregando en el informe final el costo de la empresa en salarios y el salario promedio
20.	En un club se registran de uno en uno los siguientes datos de sus socios:
Número de socio
Apellido y nombre 
Edad
Tipo de deporte que practica (1 tenis, 2 rugby, 3 voley, 4 hockey, 5 futbol)
Diseñar en Pseudocódigo un algoritmo que permita emitir por pantalla cuantos socios practican tenis y cuantos paddle y el promedio de edad de los jugadores de cada deporte



EJERCICIOS DE VECTORES


1.	Leer 10 elementos de un vector de enteros y mostrar su contenido
2.	Leer 20 números enteros positivos, indicar cual es el mayor y en que orden fue leído (a que elemento pertenece). Mostrar el vector completo.
3.	Sumar números en un vector de 10 elementos enteros hasta que el usuario lo desee. Cuando finalicen las sumas visualizar por pantalla lo siguiente:
Elemento 0		cantidad total
.....			.......
Elemento 9		cantidad total
4.	Una persona desea saber en qué día del mes realizó más gastos en compras, para ello ingresa por teclado día a día lo que gastó por día, cargando un vector definido en memoria. Puede haber varias o ninguna compra para un determinado día. Informar cual fue el día de mayor gasto.
5.	Leer dos vectores A y B de dimensión 10. Generar un tercer vector C de 100 elementos donde la componente  C[ i ] sea igual al mínimo valor de A[ i ] y B[ i ]. Mostrar los tres vectores
6.	Leer 20 números enteros positivos. Mostrar el vector tal como fue ingresado y luego mostrar el vector ordenado en forma decreciente.
7.	De los 100 empleados de una fábrica se registra: número de legajo (coincide con el número de índice), edad y salario. Se pide:
•	Ingresar los datos correlativamente
•	Calcular la edad promedio informando número de legajo de los empleados cuya edad supere el promedio
8.	Mismo enunciado al ejercicio anterior. Se pide:
•	Ingresar los datos en forma aleatoria. (se pide ingreso de número de legajo de 1 a 100, se posiciona  en el elemento correspondiente y se ingresa edad y salario)
•	Calcular salario promedio informando número de legajo de aquellos cuyo salario supere el promedio



EJERCICIOS DE VECTORES Y MATRICES


1.	Inicializar a cero una matriz de 6 filas por  5 columnas. Cargar valores enteros en un elemento determinado, para lo cual se debe informar número de fila y de columna y luego ingresar el valor a cargar. Mostrar la matriz por filas y luego por columnas
2.	Una empresa de colectivos tiene 3 líneas de 12 coches cada una. Por cada viaje el chofer entrega al llegar a la terminal una planilla con el número de coche (de 1 a 12) , número de línea ( de 1 a 3) y la recaudación del viaje. Las planillas se entregan sin ningún orden. Se pide informar por pantalla:
La recaudación total por línea de colectivo
La recaudación total por coche
La recaudación total general

3.	Una empresa financiera tiene 100 clientes numerados de 1 a 100. Por cada transacción se registra:
N° de cliente
Código de transacción:	1. Depósito
2. Extracción
3. Comisiones deducidas
4. Intereses acreditados
Monto de la operación
No se conoce la cantidad de transacciones que se realizan. Se desea:
Emitir un listado con la siguiente información:

N° De Cliente	Total Depósitos	Total Extracciones	Total Comisiones	Total Intereses	Saldo
XXX	XXXXX.XX	XXXXX.XX	XXXXX.XX	XXXXX.XX	XXXXX.XX

Indicar ( por impresora) cual fue el cliente con mayor cantidad depositada y cual fue esa cantidad. Se debe mostrar si hay más de un cliente con el depósito máximo

4.	De los 100 alumnos de una escuela se ingresa:
nota del 1° trimestre, nota del 2° trimestre, nota del 3° trimestre
El orden de ingreso coincide con su número de legajo que es de 1 a 100
Luego del registro el programa debe preguntar al usuario si desea corregir alguna nota, para lo cual se debe ingresar:
N° de legajo
Trimestre a corregir (1,2 o 3)
Nueva nota
El programa debe mostrar la nota anterior correspondiente al trimestre indicado y preguntar si confirma la modificación. Si contesta “SI” se registra la nueva nota, caso contrario pregunta si desea continuar. Cuando no se registren más modificaciones se deberá listar:
	
N° DE LEGAJO	1° TRIMESTRE	2° TRIMESTRE	3° TRIMESTRE	PROMEDIO
XXXX	XX	XX	XX	XX.XX
				

5.	Una compañía de aviación tiene 4 destinos ( numerados de 1 a 4) con 3 vuelos cada uno (numerados de 1 a 3). Se ingresa la información de las plazas disponibles en cada uno de los 12 vuelos. Posteriormente llegan pedidos de pasajes de los que se ingresa:
N° de pedido
N° de destino
N° de vuelo
Cantidad de pasajes requeridos
Si la cantidad de pasajes pedidos es superior a la disponibilidad existente en ese vuelo y para ese destino se rechaza el pedido indicando la leyenda: NO HAY  CANTIDAD DE PLAZAS DISPONIBLES.
	Se pide informar :
la cantidad de pasajes sobrantes en cada vuelo
los N° de pedidos rechazados con la cantidad de pasajes solicitados.


6.	Una fábrica tiene 30 obreros con legajos de 1 a 30. Por cada obrero se registran los movimientos que intervienen en la liquidación informando:
		N° de legajo
Sueldo básico
Bonificación por antigüedad	
Se debe calcular el sueldo neto de cada obrero considerando:
Un descuento por jubilación que representa el 16 % del sueldo básico
Un descuento por obra social que representa el 4,5 % del sueldo básico
Se pide:
Listado como el siguiente:

7.	N° de legajo	8.	Sueldo básico	9.	Jubilación	10.	Obra social	11.	Antigüedad	12.	Sueldo neto
13.		14.		15.		16.		17.		18.	

Indicar cual fue el legajo del o los obreros con mayor bonificación de antigüedad y cual fue esa cantidad
Listado de todos los obreros ordenado por sueldo neto



EJERCICIOS DE ESTRUCTURAS


1.	Crear una estructura llamada "jugador", que almacene la siguiente información sobre jugadores de fútbol:
	nombre del jugador
	nombre del equipo
	cantidad de partidos jugados
	cantidad de goles convertidos
	promedio de goles por partido

Utilizando la estructura, declarar un array de 100 elementos de ese tipo.
Escribir un programa que cargue los datos del array. Se ingresan: nombre del jugador, nombre del equipo, cantidad de partidos jugados y cantidad de goles  convertidos. 
Por cada jugador se calcula el promedio de goles por partido y se almacena en el miembro correspondiente a cada elemento del array. 
Luego de este proceso  se debe motrar por pantalla la información contenida en el array (nombre del jugador, nombre del equipo, cantidad de partidos jugados, cantidad de goles convertidos y promedio de goles por partido. 

2.	Generar un programa que me permita cargar la información de 100 empleados. La información que se carga es la siguiente:
		nombre
		dirección ( calle, número, localidad )
		edad
		sexo (M = masculino, F = femenino)
	Se pide:

	a) listar los empleados menores de 25 años
	b) listar los empleados que viven en Avellaneda
	c) listar los empleados que viven en Avellaneda menores de 25 años
	d) ordenar el vector por nombre y listarlo

3.	Se ingresa el apellido, la nota y el legajo de los 30 alumnos de un curso. Realizar un programa que me permita modificar los datos ingresados hasta que el usuario lo determine. Para ello se ingresa el legajo y la nota a modificar. Si no se encuentra el legajo se deberá mostrar un mensaje de error.

4.	Se ingresa nombre, sexo y edad de 100 personas. Se pide averiguar la cantidad de mujeres que tienen entre 20 y 30 años y cuantos hombres son menores a 37 años.

5.	Para un censo se debe tomar la edad ,el nombre y apellido, la dirección y teléfono de 100 personas. Realizar el programa que permita cargar los datos, y mostrarlos ordenados alfabéticamente por apellido, de la siguiente manera:

APELLIDO	NOMBRE	EDAD		TELEFONO



EJERCICIOS DE LISTAS

1.	Implementar una lista simple, de enteros, de N NODOS. N se ingresa por teclado. Imprimir la lista por pantalla con los valores ingresados.

2.	Implementar una función que recibe una puntero al primer nodo de una lista de enteros L y un número entero n de forma que modifique la lista mediante el borrado de todos los elementos de la lista que tengan este valor.

3.	Escribir una función Reemplazar que tenga como argumentos una pila con tipo de elemento int y dos valores int: nuevo y viejo de forma que si el segundo valor aparece en algún lugar de la pila,sea reemplazado por el segundo.

4.	Implementar una función Mezcla2 que tenga como parámetros dos listas de enteros ordenados de menor a mayor y que devuelva una nueva lista como unión de ambas con sus elementos ordenados de la misma forma. 

