#include <stdio.h>
#include <string.h>
float num1, num2, resultSuma, resultProm;
float suma(float*n1, float*n2);
float prom(float*n1, float*n2);
main(){
	printf("Ingrese el primer numero: \n");
	scanf("%f", &num1);
	printf("Ingrese el segundo numero: \n");
	scanf("%f", &num2);
	resultSuma = suma(&num1, &num2);
	resultProm = prom(&num1, &num2);
	printf("La suma de los dos numeros es: %f\n", resultSuma);
	printf("El promedio de los dos numeros es: %f\n", resultProm);
}
float suma(float *n1, float *n2)
{
	return *n1 + *n2;
 }
 float prom(float *n1, float *n2)
 {
 	float sum2 = suma(n1, n2);
 	return sum2/2;
  } 
