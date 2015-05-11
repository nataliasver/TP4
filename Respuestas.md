#Respuestas#
#####Respuesta 1
La primera expresión del for, inicializa la variable nl y la variable nc en Cero, la primera vez que se ejecuta la sentencia. La coma permite evaluar las expresiones de izquierda a derecha. El tipo y el valor del resultado, son el tipo y valor del operando derecho.  
Sirve para evaluar dos proposiciones en paralelo. No se trata de un operador.  
Un operador similar es:  

    nc = nl = 0;

En este caso ambos tienen asignados el mismo valor, es decir, funciona por asociatividad. No serviría en el caso de que las variables deban tomar distintos valores. 
****
#####Respuesta 2
Los parentesis de getchar se colocan, ya es una funcion a la que no se le pasan argumentos. Devuelve un int, con el dato que se encuentra en el buffer de entrada.  
Declaración de getchar en stdio.h:
	
	 int getchar( void );
**** 
#####Respuesta 3
Semantica: Si la funcion feof retorna cero, se ejecuta la sentencia dentro del if. Solo se ejecuta la sentencia dentro del if en el caso de que no seencuentre el fin de archivo/flujo.
Se le pasa como argumento a feof stdin, ya que se ingresa el flujo al llamar a la ejecucion al programa.
En caso de que feof devuelva cero (se termino la lectura del archivo antes de que sea EOF), se ejecuta la función perror.  
Ejemplo:  

	C:\prueba.exe < prueba.txt
Se le pasa un archivo al programa prueba.exe, para que sea utilizado como flujo de entrada.  

Pragmática: Lo que se quiere realizar con la sentencia, es verificar que no se haya cerrado el archivo/flujo antes de tiempo (o sea, que no devuelve EOF). En caso de que hubiera un inconveniente, se envia un mensaje de error. 

****
#####Respuesta 4  
La función perror, imprime el string que se le pasa como argumento, y un mensaje de error que se encuentra predefinido, que corresponde al entero "errno".  
Es equivalente o similar a:

	fprintf(stderr, "%s : %s\n", s, "mensaje de error")
  
Donde S equivaldría al mensaje que se le pasa a perror.  
Esta función recurre al flujo stderr.  
>Nota: sterr es un flujo salida, al igual que stout. Es utilizado, ya que en caso de haber un error si se utilizase stout, se imprimiría el mensaje de error al final de una salida concatenada.Al utilizar sterr, se evita este problema, y se envia el error independientemente de lo que suceda con stout. Esto se ve reflejado cuando la salida va hacia un archivo, o hacia otro programa.  

****
#####Respuesta 5  
A la función feof se le pasa como argumento un flujo (FILE), y devuelve un valor distinto de cero en caso de ocurrir un fin de archivo en el archivo espeficivado. (por eso se utiliza con ! )

	!feof(FILE *fp)

A la función ferror se le pasa como argumento un flujo (FILE), y devuelve un valor distinto de cero, en caso de encontrar un error en el flujo.  
No son mutuamente excluyentes.  
Lo que se quiere en este programa, es verificar que se han leido correctamente todas las lineas y caracteres, para luego hacer el promedio. En caso de que no se pudieron leer todos, se genera el mensaje de error antes de realizar el promedio (ya que los datos no serían correctos). 

****
#####Respuesta 6  
La función printf traduce de valores internos a caracteres, e imprime sus argumentos bajo el control de "format".

    int printf(char *format,arg1, arg2, ...)  
Para poder realizar la conversión de los caractéres, se forma de la siguiente manera, tomando como ejemplo lo pedido.  

    %.1f  
- **%** : comienzo para determinar la conversión.  
-  **"."** : separa el ancho del campo de la presición de impresión. (Separa la cantidad de caracteres a imprimir como enteros, del numero de decimales que se desea imprimir).  
- **1** : cantidad de decimales (o presición), la cual se desea imprimir. En este caso se desea imprimir solo un decimal después de la coma/punto.  
- **f** : tipo de dato que se desea imprimir. En este caso se trata de un double.  

****
#####Respuesta 7  
Se aplica un casteo (tomar una variable como otro tipo, solo por esa vez), ya que hay una división entre dos enteros, y al hacerla, arrojaría un resultado entero. Pero como queremos un resultado más exacto en float, se castea una de las variables, ya que por precedencia, se tomará el tipo float. 

****
#####Respuesta 10  
Este programa no funciona correctamente en el caso de que no haya líneas (por ejemplo, un archivo vacío). Con lo cual, se puede arreglar este inconveniente, agregando una expresión condicional, para realizar el promedio.  

	nl?(nc/(float)nl):nl
En este caso, se verifica si nl es distinto de cero, o sea que hay lineas, se realiza el promedio, y en caso de que no haya lineas, se muestra el valor de nl, que en este caso sería Cero.  
****
#####Respuesta 11  
La expresión no es precisa, ya que se cuentan los caracteres '\n', y no deberían ser contados. 

****
#####Respuesta 12  
Se debe agregar un printf:  

	printf("La cantidad total de caracteres ingresados es: %d \n La cantidad total de lineas es: %d", nc , nl);

