#include <stdio.h>

#define TAM 4  

int main() {
	int codigos[TAM];
	float precios[TAM];
	int i;
	
	float mayorPrecio, menorPrecio;
	int codigoMayor, codigoMenor;
	
	printf("Ingrese %d productos, se solicitara el codigo y precio:\n\n", TAM);
	
	for (i = 0; i < TAM; i++) {
		int codigo;
		do {
			printf("Ingrese el codigo de barras (1-999999999): ");
			scanf("%d", &codigo);
			
			if (codigo < 1 || codigo > 999999999) {
				printf("Error. El codigo de barras debe estar entre 1 y 999999999\n");
			}
		} while (codigo < 1 || codigo > 999999999);
		codigos[i] = codigo;
		
		
		float precio;
		do {
			printf("Ingrese el precio: ");
			scanf("%f", &precio);
			
			if (precio < 0) {
				printf("Error.  El codigo de barras debe estar entre 1 y 999999999\n");
			}
		} while (precio < 0);
		precios[i] = precio;
	}
	
	
	printf("\nCodigo\t\tPrecio\n");
	for (i = 0; i < TAM; i++) {
		printf("%d\t\t%.2f\n", codigos[i], precios[i]);
	}
	
	
	mayorPrecio = menorPrecio = precios[0];
	codigoMayor = codigoMenor = codigos[0];
	
	for (i = 1; i < TAM; i++) {
		if (precios[i] > mayorPrecio) {
			mayorPrecio = precios[i];
			codigoMayor = codigos[i];
		}
		if (precios[i] < menorPrecio) {
			menorPrecio = precios[i];
			codigoMenor = codigos[i];
		}
	}
	
	printf("\nMas caro: [%d] %.2f\n", codigoMayor, mayorPrecio);
	printf("Mas barato: [%d] %.2f\n", codigoMenor, menorPrecio);
	
	return 0;
}
