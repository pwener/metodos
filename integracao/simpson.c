#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fn(float x){
	return pow(M_E, x);	
}

float integrateSimpson(float x0, float x1, float x2){
	float h = x1 - x0;
	return h/3 * (fn(x0)+4*fn(x1)+fn(x2));
}

/**
* Erro baseado na funcao exponencial
* para outras classes utilizar derivada quarta de fn
*
*/
float errorSimpson(float h, float x1){
	return (pow(h, 5)/(-90))*fn(x1);
}

int main(){
	float x0, x1, x2;
	printf("Insira um x0>>");
	scanf("%f", &x0);
	printf("Insira um x1>>");
	scanf("%f", &x1);
	printf("Insira um x2>>");
	scanf("%f", &x2);
	printf("\n");
	printf("A integração no intervalo [%f, %f]>> %f +/- (%f)\n", x0, x2, integrateSimpson(x0, x1, x2), errorSimpson(x1-x0, x1));
	printf("\n");
	return 0;
}
