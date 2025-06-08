#include <stdio.h>

int main(int argc, char *argv[]) {
	float peso,altura, imc;
	printf("ingrese su peso en kg:\n");
	scanf("%f",&peso);
	printf("ingrese su altura en metros:\n");
	scanf("%f",&altura);
	
	imc=peso/(altura*altura);
	printf("Su indice de masa corporal es %.2f\n",imc);
	printf("Indice| Condición\n\n<18.5 | Bajo peso\n18.5 a 24.9 | Normal\n");
	printf("25.0 a 29.9 | Sobrepeso\n>=30| Obesidad\n");
	
	return 0;
}

