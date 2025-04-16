#include <stdio.h>
int numero[5], may, men, i, n=5;
void mayor(int i, int *punt);
void menor(int i, int *punt);
main(){
	for(i=0; i<n; i++)
	{
	printf ("Ingrese el numero %d\n", i+1);
	scanf("%d", &numero[i]);
	}
	for(i=0; i<n; i++)
	{
		mayor(i, &numero[i]);
		menor(i, &numero[i]);
	}
	printf("El numero mayor es: %d\n", may);
	printf("El numero menor es: %d\n", men);
}
	void menor(int i, int *punt)
	{
		if(i==0 || *punt < men)
		{
			men = *punt;
		}
	}
	void mayor(int i, int *punt)
	{
		if(i==0 || *punt > may)
		{
			may = *punt;
		}
	}
