//tp6
#include <stdio.h>
#include <math.h> 
float calcularAreaRectangulo(float l,float h);
float calcularPerimetroRectangulo(float l,float h);
float calcularDiagonalRectangulo(float l,float h);

float calcularAreaCirculo(float r);
float calcularPerimetroCirculo(float r);

void imprimirResultados(float aR,float pR,float aC,float pC,float diag );

int main(int argc, char *argv[]) {
	
	float largo,alto, radio,areaR=0,perR=0,areaC=0,perC=0,diagonal=0;
	int figura;
	
	printf("elija la figura que desea calcular:");
	printf("\n1-rectangulo\n2-circulo\n");
	scanf("%d",&figura);
	
	switch (figura){
	case 1:
	printf("ingrese la logitud del rectangulo: ");
	scanf("%f",&largo);
	printf("ingrese la altura del rectangulo:");
	scanf("%f",&alto);
	areaR=calcularAreaRectangulo(largo,alto);
	perR=calcularPerimetroRectangulo(largo,alto);
	diagonal=calcularDiagonalRectangulo(largo,alto);
	imprimirResultados(areaR,perR,areaC,perC,diagonal);
	calcularDiagonalRectangulo(largo,alto);
	break;
	
	case 2: 
	printf("ingrese el radio: ");
	scanf("%f",&radio);
	areaC=calcularAreaCirculo(radio);
	perC=calcularPerimetroCirculo(radio);
	imprimirResultados(areaR,perR,areaC,perC,diagonal);
	
	break;	
	}

	return 0;
}



float calcularAreaRectangulo(float l,float h){
	return l*h;
}
float calcularPerimetroRectangulo(float l,float h){
	int p;
	p=l*2+h*2;
	return p;
}

float calcularAreaCirculo(float r){
	return 3.14*r*r;
}
float calcularPerimetroCirculo(float r){
	return 2*r*3.14;
}

float calcularDiagonalRectangulo(float l, float h){
	float diagonal;
	diagonal= sqrt(l*l+h*h);
	return diagonal;
}
void imprimirResultados(float aR,float pR,float aC,float pC,float diag) {
	if (aC==0&&pC==0){
	printf("el area del rectangulo es %.2f\n",aR);
	printf("el perimetro del rectangulo es %.2f\n",pR);
	printf("la diagonal es %.2f\n",diag);
	}
	if (aR==0&&pR==0){
	printf("el area del circulo es %.2f\n",aC);
	printf("el perimetro del circulo es %.2f\n",pC);
	}
}

