#include <stdio.h>
int array[5], i, arrayCopia[5], n=5;
void cambiar(int i, int *punt);
main(){
	for(i=0; i<n; i++)
	{
	printf ("Ingrese el numero %d\n", i+1);
	scanf("%d", &array[i]);
	}
	for (i=0; i<n; i++)
	{
		cambiar(i, &array[i]);
	}
	printf("La lista copiada es: ");
	for (i=0; i<n; i++)
	{
		printf("%d", arrayCopia[i]);
	}
}
void cambiar(int i, int *punt)
{
	arrayCopia[i] = *punt;
}