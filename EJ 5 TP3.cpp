#include <stdio.h>
#include <string.h>
char str1[30], str2[30], aux1[30], aux2[30];
void concat(char aux[30], char au2[30]);
main(){
	printf("Ingrese la primer palabra: ");
	scanf("%s", str1);
	printf("Ingrese la segunda palabra: ");
	scanf("%s", str2);
	strcpy(aux1, str1);
	strcpy(aux2, str2);
	concat(aux1, aux2);
	printf("Las palabras concatenadas son: %s", aux1);
}
void concat(char aux1[30], char aux2[30])
{
	strcat(aux1, aux2);
}