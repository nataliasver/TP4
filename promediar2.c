/* Informa la cantidad promedio caracteres ingresados
* Natalia Solange Verdura
* 137.626-3
*/
#include <stdio.h> /* getchar EOF feof perror printf */
#include <stdlib.h> /* EXIT_SUCCESS */

int main(void) 
{
    int nl = 0; /* la cantidad de lineas */
    int nc = 0; /* la cantidad de caracteres */
    int c; /* el caracter leido */
    
    while((c = getchar()) != EOF)
        if(c == '\n')
            ++nl;
        else
            ++nc;
        
    if( ferror(stdin) )  
        perror("No se pudo seguir leyendo de la entrada debido a un error");

    printf("Longitud promedio: %.1f\n", nl?(nc/(float)nl):nl );
    printf("La cantidad total de caracteres ingresados es: %d\n", nc);
    printf("La cantidad total de lineas es: %d\n",nl);
    return EXIT_SUCCESS;
}
