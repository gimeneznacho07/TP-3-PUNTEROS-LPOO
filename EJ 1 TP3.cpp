#include <stdio.h>
#include <string.h>
char variable1[30], variable2[30];
void cambiar(char *var1, char *var2);
main(){
	printf("Ingrese la primer variable: \n");
	scanf("%s", variable1);
	printf("Ingrese la segunda variable: \n");
	scanf("%s", variable2);
	cambiar(variable1, variable2);
	printf("La primera palabra es: %s\n", variable1);
	printf("La segunda palabra es: %s\n", variable2);
}
void cambiar(char *var1, char *var2)
{
	char temp[30];
	strcpy(temp, var1);
	strcpy(var1, var2);
	strcpy(var2, temp);
}
