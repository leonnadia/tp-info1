//link al repositorio:https://github.com/leonnadia/tp-info1 
#include <stdio.h>

int main(int argc, char *argv[]) {
	float peso,altura, imc;
	printf("ingrese su peso en kg: ");
	scanf("%f",&peso);
	while (peso<=0){
		printf("error, el peso debe ser un valor positivo\n");
		printf("ingrese nuevamente su peso en kg: ");
		scanf("%f",&peso);
	}
		
	printf("ingrese su altura en metros: ");
	scanf("%f",&altura);
	while (altura<=0){
		printf("error, la altura debe ser un valor positivo\n");
		printf("ingrese nuevamente su altura en metros:");
		scanf("%f",&altura);
	}
	
	imc=peso/(altura*altura);
	printf("Su indice de masa corporal es %.2f\n",imc);
	printf("Indice| Condición\n\n<18.5 | Bajo peso\n18.5 a 24.9 | Normal\n");
	printf("25.0 a 29.9 | Sobrepeso\n>=30| Obesidad\n\n\n");
	
	
	if (imc>= 30)
		printf("su condicion es: obesidad\n");
	else if (imc>= 25)
		printf("su condicion es: sobrepeso\n");
	else if (imc>= 18.5)
		printf("su condicion es: normal\n");
	else printf("su condicion es: bajo peso\n");
	
	return 0;
}

