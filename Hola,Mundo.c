/*Todo programador gomienza con este primer ejercicio al
 *momento de aprender un nuevo lenguaje de programacion
 *
 *Diseñe un programa que imprima las palabras Hola,Mundo
 */

//Primero comenzaremos con la cabezera de nuestro programa

//Incluimos las librerias standard de C
#include <stdio.h>
#include <stdlib.h>
/////////////////////////////////////////

void main()/*Funcion principal main, void sirve
            *para que esta funcion no retorne ningun valor
            */

{//Inicio del Algoritmo

    printf("Hola, Mundo\n\n");/*printf Sirve para imprimir en la terminal las cadenas de
	                         *caracteres que se encuentren entre comillas printf("example");
	                         *el caracter especial \n representa solo un salto de linea
	                         *por lo tanto no se imprime al igual que los comentarios
	                         */
	system("pause");//siver para pausar el programa..
    return 0;
//Esto es un comentario y no se imprime
/*Esto tambien es un comentario y tampoco se imprime*/

}//Fin del Algoritmo

/*El programa esta listo para ser ejecutado, para realizar esto en windows
 *devemos abrir la terminal en el directorio donde este nuestro Archivo.c
 *y escribir lo siguiente gcc Archivo.c -o Nombre.del.Archivo*/

//Listo programa ejecutado
