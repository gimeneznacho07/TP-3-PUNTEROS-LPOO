#include <stdio.h>
#include <string.h>
char array[30], arrayCopia[30];
void cambiar(char *origen, char *destino);
main() {
    printf("Ingrese una cadena de texto: ");
    cambiar(array, arrayCopia);
    printf("La cadena copiada es: %s\n", arrayCopia);
}
void cambiar(char *origen, char *destino) {
    strcpy(destino, origen);  
}
