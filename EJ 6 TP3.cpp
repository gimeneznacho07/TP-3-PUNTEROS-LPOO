#include <stdio.h>
int array[30], elemento, cant, longitud;
int ocurrencias(int *arr, int elem, int longi);
main(){
	int i;
    printf("Ingrese la longitud del array: \n");
    scanf("%d", &longitud);
    printf("Ingrese los elementos del array: \n");
    for(i=0; i<longitud; i++) 
		{
			printf("Elemento %d: ", i+1);
        	scanf("%d", &array[i]);
  		}
    printf("Ingrese el componente que desea buscar: \n");
    scanf("%d", &elemento);
    cant = ocurrencias(array, elemento, longitud);
    printf("El elemento %d aparece %d vez/veces \n", elemento, cant);
}
int ocurrencias(int *arr, int elem, int longi) 
	{
   	    int cont = 0;
    	int i;
    	for(i=0; i<longi; i++) 
		{
        	if(*arr == elem) {
            cont++;
        }
        arr++;
    }
    return cont;
}
